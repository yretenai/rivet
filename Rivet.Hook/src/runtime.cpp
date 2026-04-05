// SPDX-FileCopyrightText: 2025-2026 Neptuwunium
//
// SPDX-License-Identifier: EUPL-1.2

#include <chrono>
#include <fstream>
#include <memory>
#include <ostream>
#include <thread>
#include <unordered_set>
#include <cstdio>

#include "ddl.hpp"
#include "runtime.hpp"
#include "settings.hpp"
#include "signature.hpp"
#include "signature_engine.hpp"
#include "runtime_loader.hpp"

#include <MinHook.h>
#include <nlohmann/json.hpp>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wmicrosoft-cast"

namespace {
	std::ofstream g_output;
	HMODULE g_renderdoc = nullptr;
	HMODULE g_game_module = nullptr;
	bool g_minhook_initialized = false;
	rivet_hook::settings g_settings;
	std::thread g_ddl_dump_thread;
	rivet_hook::AssetLoader loader;
} // namespace

namespace rivet_hook {
#pragma clang diagnostic push
#pragma ide diagnostic ignored "cppcoreguidelines-pro-bounds-pointer-arithmetic"

	using context_log_t = const char *(*)(const char *, const char *);
	context_log_t fwd_context_log = nullptr;
	std::string last_context;
	std::string last_message;

	const char *decode_url_string_name = "?DecodeURLString@Library@cohtml@@SAXPEBDIPEADPEAI@Z";
	using decode_url_t = void (*)(const char*, unsigned int, char*, unsigned int*);
	decode_url_t fwd_decode_url = nullptr;

	using load_asset_t = intptr_t (*)(intptr_t, AssetId, AssetId, const char*, intptr_t, intptr_t, int32_t);
	load_asset_t fwd_load_asset = nullptr;

	create_asset_id_t fwd_create_asset_id = nullptr;

	void
	get_ddl_field(nlohmann::json &field, const uint8_t* object, uint32_t offset, uint8_t array_type, uint8_t field_type, int32_t index, const rivet_hook::ddl::ddl_type_info* const type_ptr, const int32_t type_index) {
		if (array_type == 0) {
			switch (field_type) {
				case 0: field["default"] = reinterpret_cast<const uint8_t*>(object + offset)[index]; return;
				case 1: field["default"] = reinterpret_cast<const uint16_t*>(object + offset)[index]; return;
				case 2: field["default"] = reinterpret_cast<const uint32_t*>(object + offset)[index]; return;
				case 3: field["default"] = reinterpret_cast<const uint64_t*>(object + offset)[index]; return;
				case 4: field["default"] = reinterpret_cast<const int8_t*>(object + offset)[index]; return;
				case 5: field["default"] = reinterpret_cast<const int16_t*>(object + offset)[index]; return;
				case 6: field["default"] = reinterpret_cast<const int32_t*>(object + offset)[index]; return;
				case 7: field["default"] = reinterpret_cast<const int64_t*>(object + offset)[index]; return;
				case 8: field["default"] = reinterpret_cast<const float*>(object + offset)[index]; return;
				case 9: field["default"] = reinterpret_cast<const double*>(object + offset)[index]; return;
				case 11: field["default"] = reinterpret_cast<const uint32_t*>(object + offset)[index]; return; // enum
				case 12: field["default"] = reinterpret_cast<const uint32_t*>(object + offset)[index]; return; // bitset
				case 15: field["default"] = reinterpret_cast<const bool*>(object + offset)[index]; return;
				case 17: field["default"] = reinterpret_cast<const uint64_t*>(object + offset)[index]; return; // tuid
				case 20: field["default"] = reinterpret_cast<const uint64_t*>(object + offset)[index]; return; // instance
				case 10: { // str
					auto str = reinterpret_cast<const rivet_hook::ddl::ddl_runtime_str*>(object + offset)[index];
					if(str.value != nullptr) {
						nlohmann::json str_default;
						str_default["value"] = str.value;
						str_default["id"] = str.hash;
						field["default"] = str_default;
					} else {
						field["default"] = nullptr;
					}
					return;
				}
				case 16: { // file
					auto str = reinterpret_cast<const rivet_hook::ddl::ddl_runtime_file*>(object + offset)[index];
					if(str.value != nullptr) {
						nlohmann::json str_default;
						str_default["value"] = str.value;
						str_default["id"] = str.asset_id;
						field["default"] = str_default;
					} else {
						field["default"] = nullptr;
					}
					return;
				}
				default: {
					if(g_settings.debug_ddl && reinterpret_cast<const uint8_t*>(object + offset)[index] != 0) {
						g_output << "[DDL] " << type_ptr->name << " field " << type_ptr->field_names[type_index] << " (index " << index << ", type " << static_cast<int>(field_type) << ") has non-zero value that is not handled" << std::endl;
					}

					field["default"] = nullptr;
					return;
				}
			}
		}

		if(type_ptr == nullptr || index != 0) {
			g_output << "[DDL] hit unreachable state";
			return;
		}

		if(array_type == 1) {
			auto count = static_cast<int32_t>(type_ptr->field_array_sizes[type_index]);
			if(count <= 0) {
				field["default"] = nullptr;
				return;
			}

			nlohmann::json::array_t values;
			for(int32_t array_index = 0; array_index < count; ++array_index) {
				nlohmann::json tmp;
				get_ddl_field(tmp, object, offset, 0, field_type, array_index, type_ptr, type_index);
				values.push_back(tmp["default"]);
			}
			field["default"] = values;

			return;
		}

		if(array_type == 2) {
			auto count = reinterpret_cast<const int32_t*>(object + offset + (sizeof(intptr_t) * 1))[0];
			if(count <= 0) {
				field["default"] = nullptr;
				return;
			}

			auto ptr_values = reinterpret_cast<const uint8_t* const*>(object + offset)[0];
			if (ptr_values == nullptr) {
				field["default"] = nullptr;
				return;
			}

			g_output << "[DDL] " << type_ptr->name << " field " << type_ptr->field_names[type_index] << " (type " << static_cast<int>(field_type) << ", array type " << static_cast<int>(array_type) << ") has non-zero dynamic array that is not handled" << std::endl;

			// this is more complex, this will likely crash
			/*
			nlohmann::json::array_t values;
			for(int32_t array_index = 0; array_index < count; ++array_index) {
				nlohmann::json tmp;
				get_ddl_field(tmp, ptr_values, 0, 0, field_type, array_index, type_ptr, type_index);
				values.push_back(tmp["default"]);
			}
			field["default"] = values;
			*/

			return;
		}

		if(array_type == 3) {
			auto count = reinterpret_cast<const int32_t*>(object + offset + (sizeof(intptr_t) * 2))[0];
			if(count <= 0) {
				field["default"] = nullptr;
				return;
			}

			auto ptrs = reinterpret_cast<const uint8_t* const*>(object + offset);
			auto ptr_keys = ptrs[0];
			auto ptr_values = ptrs[1];
			if (ptr_keys == nullptr || ptr_values == nullptr) {
				field["default"] = nullptr;
				return;
			}

			auto map_type = type_ptr->field_map_types[type_index];

			nlohmann::json::array_t values;
			for(int32_t array_index = 0; array_index < count; ++array_index) {
				nlohmann::json tmp_key;
				get_ddl_field(tmp_key, ptr_keys, 0, 0, map_type, array_index, type_ptr, type_index);

				nlohmann::json tmp_value;
				get_ddl_field(tmp_value, ptr_values, 0, 0, field_type, array_index, type_ptr, type_index);

				nlohmann::json tmp;
				tmp["key"] = tmp_key["default"];
				tmp["value"] = tmp_value["default"];
				values.push_back(tmp);
			}
			field["default"] = values;

			return;
		}

		if(g_settings.debug_ddl && reinterpret_cast<const uint64_t*>(object + offset)[0] != 0) {
			g_output << "[DDL] " << type_ptr->name << " field " << type_ptr->field_names[type_index] << " (type " << static_cast<int>(field_type) << ", array type " << static_cast<int>(array_type) << ") has non-zero value that is not handled" << std::endl;
		}
	}


	void
	dump_ddl() {
		g_output << "[rivet] dumping DDL structures" << std::endl;
		using namespace std::chrono_literals;

		std::vector<uint8_t *> hm_pointers = scan(g_game_module, DDL_HASH_MAP_SIGNATURE);
		std::vector<uint8_t *> tl_pointers = scan(g_game_module, DDL_TYPE_LIST_SIGNATURE);
		if (hm_pointers.empty()) {
			g_output << "[DDL] could not find hash map pointer, aborting" << std::endl;
			return;
		}

		if (hm_pointers.size() > 1) {
			g_output << "[DDL] too many hash map pointers, aborting" << std::endl;
			return;
		}

		if (tl_pointers.empty()) {
			g_output << "[DDL] could not find type list pointer, aborting" << std::endl;
			return;
		}

		if (tl_pointers.size() > 1) {
			g_output << "[DDL] too many type list pointers, aborting" << std::endl;
			return;
		}

		g_output << "[rivet] found hash map pointer at " << std::hex << reinterpret_cast<uintptr_t>(hm_pointers[0]) << std::endl;
		g_output << "[rivet] found type list pointer at " << std::hex << reinterpret_cast<uintptr_t>(tl_pointers[0]) << std::endl;

		g_output << "[DDL] sleeping by 5 seconds to give the game a chance to "
					"set up..." << std::endl;

		std::this_thread::sleep_for(5000ms);

		g_output << "[DDL] dumping..." << std::endl;

		const auto *hm_rip = hm_pointers[0] + 3 + 7;
		const auto hm_rip_rel = reinterpret_cast<uint32_t *>(hm_pointers[0] + 6)[0];
		const auto *type_hash_map = reinterpret_cast<const rivet_hook::ddl::ddl_hash_map *>(hm_rip + hm_rip_rel);

		auto *tl_rip = tl_pointers[0] + 7;
		const auto tl_rip_rel = reinterpret_cast<uint32_t *>(tl_pointers[0] + 3)[0];
		const auto **type_list = reinterpret_cast<const rivet_hook::ddl::ddl_type_descriptor **>(tl_rip + tl_rip_rel);

		auto *tlc_rip = tl_pointers[0] + 17;
		auto tlc_rip_rel = reinterpret_cast<uint32_t *>(tl_pointers[0] + 13)[0];
		const auto type_count = reinterpret_cast<uint32_t *>(tlc_rip + tlc_rip_rel)[0];

		std::unordered_set<uint32_t> enum_ids;
		std::unordered_set<uint32_t> bitset_ids;

		nlohmann::json::array_t enums;
		nlohmann::json::array_t bitsets;
		nlohmann::json::array_t roots;
		nlohmann::json::array_t types;

		for (auto i = 0u; i < type_count; ++i) {
			const auto &type_ptr = type_list[i];
			if (type_ptr == nullptr) {
				continue;
			}

			nlohmann::json root_type;
			root_type["name"] = type_ptr->name;
			root_type["id"] = type_ptr->type_id;
			if (type_ptr->parent != nullptr) {
				nlohmann::json parent_type;
				const auto *parent_ptr = *type_ptr->parent;
				parent_type["name"] = parent_ptr->name;
				parent_type["id"] = parent_ptr->type_id;
				root_type["parent"] = parent_type;
			}

			roots.push_back(root_type);
		}

		for (auto i = 0u; i < type_hash_map->capacity; ++i) {
			const auto &type_ptr = type_hash_map->values[i];
			if (type_ptr == nullptr) {
				continue;
			}

			void* ddl_inst_this = calloc(type_ptr->allocation_size, 1);
			auto type_ctor = reinterpret_cast<rivet_hook::ddl::ddl_call_t*>(type_ptr->constructor_ptr);
			auto type_dtor = reinterpret_cast<rivet_hook::ddl::ddl_call_t*>(type_ptr->destructor_ptr);
			auto type_init = reinterpret_cast<rivet_hook::ddl::ddl_call_t*>(type_ptr->init_defaults_ptr);
			if(type_ctor != nullptr && type_init != nullptr) {
				auto temp = type_ctor(ddl_inst_this);
				if(temp != nullptr) {
					type_init(temp);
				} else {
					free(ddl_inst_this);
					ddl_inst_this = nullptr;
				}
			} else {
				free(ddl_inst_this);
				ddl_inst_this = nullptr;
			}

			if(g_settings.debug_ddl && ddl_inst_this != nullptr) {
				std::ofstream ddl_bin;
				ddl_bin.open("./ddl/" + std::string(type_ptr->name) + ".bin", std::ios::app | std::ios::binary);
				ddl_bin.write(reinterpret_cast<char*>(ddl_inst_this), type_ptr->allocation_size + 16);
				ddl_bin.flush();
				ddl_bin.close();
			}

			nlohmann::json type_info;
			type_info["name"] = type_ptr->name;
			type_info["id"] = type_ptr->type_id;
			type_info["component_id"] = type_ptr->function_id;
			type_info["parent_id"] = type_ptr->parent_id;
			type_info["size"] = type_ptr->allocation_size;

			nlohmann::json::array_t fields;

			for (auto fi = 0; fi < type_ptr->field_count; ++fi) {
				nlohmann::json field;
				field["name"] = type_ptr->field_names[fi];
				field["id"] = type_ptr->field_ids[fi];
				field["type_id"] = type_ptr->field_type_ids[fi];
				field["label"] = type_ptr->field_labels[fi];
				field["display_label"] = type_ptr->field_names2[fi];
				field["description"] = type_ptr->field_descriptions[fi];
				field["type"] = static_cast<uint32_t>(type_ptr->field_types[fi]);
				field["array_type"] = static_cast<uint32_t>(type_ptr->field_array_types[fi]);
				field["map_type"] = static_cast<uint32_t>(type_ptr->field_map_types[fi]);
				field["fized_size"] = static_cast<uint32_t>(type_ptr->field_array_sizes[fi]);
				field["offset"] = type_ptr->field_offsets[fi];

				if(ddl_inst_this != 0) {
					get_ddl_field(field, static_cast<uint8_t*>(ddl_inst_this), type_ptr->field_offsets[fi], type_ptr->field_array_types[fi], type_ptr->field_types[fi], 0, type_ptr, fi);
				}

				const auto *extra = type_ptr->field_ex[fi];
				if (extra != nullptr) {
					auto field_type = type_ptr->field_types[fi];
					auto type_id = type_ptr->field_type_ids[fi];
					if (field_type == 13) {
						const auto *ex_13 = reinterpret_cast<const rivet_hook::ddl::ddl_type_info *>(extra);
						nlohmann::json struct_type;
						struct_type["name"] = ex_13->name;
						struct_type["id"] = ex_13->type_id;
						field["struct"] = struct_type;
					} else if (field_type == 12) {
						if (bitset_ids.find(type_id) == bitset_ids.end()) {
							bitset_ids.emplace(type_id);
							const auto *ex_12 = reinterpret_cast<const rivet_hook::ddl::ddl_type_info_ex_type_12 *>(extra);
							nlohmann::json bitset;
							bitset["id"] = type_id;
							nlohmann::json::array_t bitset_values;
							for (auto bi = 0u; bi < ex_12->count; ++bi) {
								nlohmann::json bitset_value;
								bitset_value["value"] = ex_12->values[bi];
								bitset_value["id"] = ex_12->ids[bi];
								bitset_value["name"] = ex_12->names[bi];
								bitset_values.emplace_back(bitset_value);
							}

							bitset["values"] = bitset_values;
							bitsets.push_back(bitset);
						}
					} else if (field_type == 11) {
						const auto *ex_11 = reinterpret_cast<const rivet_hook::ddl::ddl_type_info_ex_type_11 *>(extra);
						field["enum_type_id"] = ex_11->select_info->type_id;
						if (enum_ids.find(ex_11->select_info->type_id) == enum_ids.end()) {
							enum_ids.emplace(ex_11->select_info->type_id);
							nlohmann::json enuminfo;
							enuminfo["id"] = ex_11->select_info->type_id;
							enuminfo["id2"] = type_id;
							nlohmann::json::array_t enum_values;
							for (auto bi = 0u; bi < ex_11->select_info->count; ++bi) {
								nlohmann::json enum_value;
								enum_value["id"] = ex_11->select_info->ids[bi];
								enum_value["name"] = ex_11->select_info->names[bi];
								enum_value["description"] = ex_11->select_info->descriptions[bi];
								enum_value["label"] = ex_11->select_info->labels[bi];
								enum_values.emplace_back(enum_value);
							}

							enuminfo["values"] = enum_values;
							enums.push_back(enuminfo);
						}
					}
				}

				fields.push_back(field);
			}

			type_info["fields"] = fields;
			types.push_back(type_info);

			if(g_settings.debug_ddl) {
				std::ofstream ddl_json_data;
				ddl_json_data.open("./ddl/" + std::string(type_ptr->name) + ".json");
				auto ddl_json_text = type_info.dump(4);
				ddl_json_data.write(ddl_json_text.c_str(), static_cast<std::streamsize>(ddl_json_text.size()));
				ddl_json_data.flush();
				ddl_json_data.close();
			}

			if(type_dtor != nullptr && ddl_inst_this != nullptr) {
				type_dtor(ddl_inst_this);
				free(ddl_inst_this);
			}
		}

		nlohmann::json ddl_dump {};
		ddl_dump["enums"] = enums;
		ddl_dump["bitsets"] = bitsets;
		ddl_dump["roots"] = roots;
		ddl_dump["types"] = types;

		std::ofstream json_data;

		json_data.open("./ddl.json");
		auto json_text = ddl_dump.dump();
		json_data.write(json_text.c_str(), static_cast<std::streamsize>(json_text.size()));
		json_data.flush();
		json_data.close();

		g_output << "[DDL] done" << std::endl;
		g_output << "[DDL] found " << enums.size() << " enums" << std::endl;
		g_output << "[DDL] found " << bitsets.size() << " bitsets" << std::endl;
		g_output << "[DDL] found " << roots.size() << " roots" << std::endl;
		g_output << "[DDL] found " << types.size() << " types" << std::endl;
	}

	void
	list_versions() {
		g_output << "[rivet] dumping versions" << std::endl;
		using namespace std::chrono_literals;
		using version_str_fn = const char *(*) (uint32_t index);
		using version_hash_fn = uint32_t(*) (uint32_t index);

		std::vector<uint8_t *> function_ptrs = scan(g_game_module, VERSION_SIGNATURE);
		std::vector<uint8_t *> hash_function_ptrs = scan(g_game_module, VERSION_HASH_SIGNATURE);

		if (function_ptrs.size() != 1 && hash_function_ptrs.size() != 1) {
			g_output << "[ver] could not find version pointer, aborting" << std::endl;
			return;
		}

		version_str_fn func1 = reinterpret_cast<version_str_fn>(function_ptrs[0]);
		version_hash_fn func2 = reinterpret_cast<version_hash_fn>(hash_function_ptrs[0]);

		int32_t index = 0;
		nlohmann::json versions = nlohmann::json::array_t();
		while(true) {
			auto version_str = func1(index++);
			if(reinterpret_cast<int64_t>(version_str) == -1) {
				break;
			}

			auto hash = func2(index);
			nlohmann::json version;
			std::stringstream str_stream;
			str_stream << std::hex << std::setfill('0') << std::setw(8) << hash;
			version["id"] = hash;
			version["version"] = version_str;
			versions.emplace_back(version);
			g_output << "[ver] " << version << " = " << str_stream.str() << std::endl;
		}

		std::ofstream json_data;

		json_data.open("./versions.json");
		auto json_text = versions.dump();
		json_data.write(json_text.c_str(), static_cast<std::streamsize>(json_text.size()));
		json_data.flush();
		json_data.close();
	}

	auto
	context_log(const char *context, const char *message) -> const char * {
		auto valid = (context != nullptr && context[0] != 0 && context[0] != '?') && (message != nullptr && message[0] != 0 && message[0] != '?');
		const auto *result = fwd_context_log(context, message);
		if (valid) {
			auto current_context = std::string(context);
			auto current_message = std::string(message);

			if (current_context != last_context || current_message != last_message) {
				last_context = current_context;
				last_message = current_message;
				g_output << "[ctx] [" << (context == nullptr ? "?" : context) << "] " << (message == nullptr ? "" : message) << std::endl;
			}
		}
		return result;
	}

	auto
	log(const char *message, ...) -> void * { // NOLINT(*-dcl50-cpp)
		if (message != nullptr) {
			va_list args; // NOLINT(*-init-variables)
			va_start(args, message);
			auto buffer_size = vsnprintf(nullptr, 0, message, args) + 1;
			auto buffer = std::make_unique<char[]>(buffer_size); // NOLINT(*-avoid-c-arrays)
			vsnprintf(buffer.get(), buffer_size, message, args); // NOLINT(*-err33-c)
			va_end(args);
			std::string buffer_str(buffer.get());
			g_output << "[log] " << buffer_str;
			if (buffer_str.back() != '\n') {
				g_output << std::endl;
			} else {
				g_output.flush();
			}
		}

		return nullptr;
	}

	void
	null_func() { }

	void
	init_minhook() {
		if (g_minhook_initialized) {
			return;
		}

		if (MH_Initialize() != MH_OK) {
			g_output << "[rivet] failed to initialize minhook" << std::endl;
			return;
		}

		g_minhook_initialized = true;
	}

	std::vector<uint8_t *>
	find_function(const std::string_view &name, HMODULE game, const hex_signature &signature) {
		g_output << "[rivet] searching for " << name << " pointer" << std::endl;
		auto pointers = scan(game, signature);

		if (pointers.empty()) {
			g_output << "[rivet] could not find " << name << " pointer, aborting" << std::endl;
			return {};
		}
		
		return pointers;
	}

	void
	create_hook(const std::string_view &name, LPVOID pointer, LPVOID detour, LPVOID *original) {
		init_minhook();

		g_output << "[rivet] found " << name << " pointer at " << std::hex << reinterpret_cast<uintptr_t>(pointer) << std::dec << std::endl;

		if (MH_CreateHook(pointer, detour, original) != MH_OK) {
			g_output << "[rivet] failed to create " << name << " hook" << std::endl;
			return;
		}

		if (MH_EnableHook(pointer) != MH_OK) {
			g_output << "[rivet] failed to enable " << name << " hook" << std::endl;
			return;
		}

		g_output << "[rivet] created " << name << " hook" << std::endl;
	}

	void
	create_hook(const std::string_view &name, HMODULE game, const hex_signature &signature, LPVOID detour, LPVOID *original, size_t limit, int select) {
		auto pointers = find_function(name, game, signature);
		if (pointers.empty()) {
			return;
		}

		if (pointers.size() > limit) {
			g_output << "[rivet] found " << pointers.size() << " " << name << " pointers, too many. aborting" << std::endl;
			return;
		}

		create_hook(name, pointers[select], detour, original);
	}

	void decode_url(const char* url, unsigned int urlLen, char* decoded, unsigned int* decodedSize) {
		if (url != nullptr) {
			g_output << "[cohtml] " << url << std::endl;
			g_output.flush();
		}

		fwd_decode_url(url, urlLen, decoded, decodedSize);
	}

	void
	hook_cohtml() {
		HMODULE mod = GetModuleHandleA("cohtml.WindowsDesktop.dll");
		if (!mod) {
			g_output << "cannot hook cohtml, not loaded yet." << std::endl;
			return;
		}

		LPVOID proc = reinterpret_cast<LPVOID>(GetProcAddress(mod, decode_url_string_name));
		if (!proc) {
			g_output << "cannot hook cohtml, export not found." << std::endl;
			return;
		}

		init_minhook();

		if (MH_CreateHook(proc, reinterpret_cast<LPVOID>(&decode_url), reinterpret_cast<LPVOID*>(&fwd_decode_url)) != MH_OK) {
			g_output << "[rivet] failed to create cohtml hook" << std::endl;
			return;
		}

		if (MH_EnableHook(proc) != MH_OK) {
			g_output << "[rivet] failed to enable cohtml hook" << std::endl;
			return;
		}

		g_output << "[rivet] created cohtml hook" << std::endl;
	}

	intptr_t
	load_asset(intptr_t self, AssetId asset_id, AssetId parent_asset_id, const char* asset_name, intptr_t referencing_asset, intptr_t unknown6, int32_t unknown7) {
		g_output << "[load asset] " << std::hex << asset_id << " ";

		if (asset_name && *asset_name) {
			g_output << asset_name << " from ";
		} else {
			g_output << "(null) from ";
		}

		if (referencing_asset) {
			auto upper_path = reinterpret_cast<const char**>(referencing_asset + 0x10);

			if (upper_path && *upper_path && **upper_path) {
				g_output << *upper_path;
			} else {
				g_output << "(null)";
			}
		} else {
			g_output << "(nowhere)";
		}

		g_output << std::endl;
		g_output.flush();

		return fwd_load_asset(self, asset_id, parent_asset_id, asset_name, referencing_asset, unknown6, unknown7);
	}

	AssetId*
	create_asset_id(AssetId* asset_id, char* asset_name) {
		auto result = fwd_create_asset_id(asset_id, asset_name);

		if (asset_name && *asset_name && asset_id) {
			g_output << "[asset id] " << std::hex << *asset_id << " " << asset_name << std::endl;
			g_output.flush();
		}

		return result;
	}

#pragma clang diagnostic pop

	namespace runtime {
		void
		init() {
			// this runs on the main thread

			g_output.open("./rivet.log");
			g_output << "[rivet] init" << std::endl;

			g_settings = settings::load();

			if (!GetModuleHandleExA(GET_MODULE_HANDLE_EX_FLAG_PIN, nullptr, &g_game_module)) {
				g_output << "[rivet] unable to get the executable handle." << std::endl;
				return;
			}

			if (g_settings.suppress_crash_handler) {
				create_hook("crash handler", g_game_module, CRASH_HANDLER_SIGNATURE, reinterpret_cast<LPVOID>(&null_func), nullptr);
			}

			if (g_settings.load_renderdoc) {
				g_output << "[rivet] loading renderdoc" << std::endl;
				if (std::filesystem::exists("renderdoc.dll")) {
					g_output << "[rivet] loaded local renderdoc" << std::endl;
					g_renderdoc = LoadLibraryA("renderdoc.dll");
				} else {
					auto renderdoc_path = std::filesystem::path(g_settings.renderdoc_path.data());
					if (renderdoc_path.empty()) {
						g_output << "[rivet] renderdoc.dll not found" << std::endl;
					} else {
						if (std::filesystem::exists(renderdoc_path)) {
							g_output << "[rivet] loaded " << renderdoc_path << std::endl;
							g_renderdoc = LoadLibraryA(g_settings.renderdoc_path.data());
						} else {
							g_output << "[rivet] renderdoc.dll not found" << std::endl;
						}
					}
				}
			}

			if (g_settings.dump_ddl) {
				if (g_settings.debug_ddl) {
					std::filesystem::create_directory("./ddl");
				}
				g_output << "[rivet] starting ddl dump thread" << std::endl;
				g_ddl_dump_thread = std::thread(dump_ddl);
			}

			if (g_settings.attach_context_log) {
				create_hook("context log", g_game_module, CONTEXT_LOG_SIGNATURE, reinterpret_cast<LPVOID>(&context_log), reinterpret_cast<LPVOID *>(&fwd_context_log));
			}

			if (g_settings.attach_log) {
				create_hook("log", g_game_module, LOG_SIGNATURE, reinterpret_cast<LPVOID>(&log), nullptr);
			}

			if (g_settings.list_versions) {
				g_output << "[rivet] dumping versions" << std::endl;
				list_versions();
			}

			if (g_settings.log_cohtml) {
				hook_cohtml();
			}

			if (g_settings.log_paths) {
				create_hook("asset paths", g_game_module, LOAD_ASSET_SIGNATURE, reinterpret_cast<LPVOID>(&load_asset), reinterpret_cast<LPVOID *>(&fwd_load_asset));
			}

			if (g_settings.log_asset_ids) {
				create_hook("asset ids", g_game_module, CREATE_ASSET_ID_SIGNATURE, reinterpret_cast<LPVOID>(&create_asset_id), reinterpret_cast<LPVOID *>(&fwd_create_asset_id), 2, 0);
			}

			g_output << "[rivet] init complete" << std::endl;
		}

		void
		fini() {
			g_settings.save();
			g_output << "[rivet] fini" << std::endl;

			if (g_renderdoc != nullptr) {
				g_output << "[rivet] unloading renderdoc" << std::endl;
				FreeLibrary(g_renderdoc);
			}

			if (g_ddl_dump_thread.joinable()) {
				g_ddl_dump_thread.join();
			}

			g_output << "[rivet] fini complete" << std::endl;
			g_output.flush();
			g_output.close();
		}
	} // namespace runtime
} // namespace rivet_hook

#pragma clang diagnostic pop
