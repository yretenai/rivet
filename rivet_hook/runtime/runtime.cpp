// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <chrono>
#include <fstream>
#include <memory>
#include <ostream>
#include <unordered_set>

#include "ddl.hpp"
#include "runtime.hpp"
#include "settings.hpp"
#include "signature.hpp"
#include "signature_engine.hpp"

#include <MinHook.h>
#include <nlohmann/json.hpp>

namespace {
	std::ofstream g_output;
	HMODULE g_renderdoc = nullptr;
	HMODULE g_game_module = nullptr;
	bool g_minhook_initialized = false;
	rivet_hook::settings g_settings;
	std::thread g_ddl_dump_thread;
} // namespace

namespace rivet_hook {
	auto
	get_game() -> HMODULE {
		HMODULE module = nullptr;

		// if the exe name is set, use that
		if (strnlen_s(g_settings.exe_name.data(), g_settings.exe_name.size()) > 0) {
			module = GetModuleHandleA(g_settings.exe_name.data());
			if (module != nullptr) {
				g_output << "[rivet] found " << std::string_view(g_settings.exe_name.data()) << '\n';
				return module;
			}
		}

		// not found
		return nullptr;
	}

#pragma clang diagnostic push
#pragma ide diagnostic ignored "cppcoreguidelines-pro-bounds-pointer-arithmetic"

	void
	dump_ddl() {
		g_output << "[rivet] dumping DDL structures\n";
		using namespace std::chrono_literals;

		std::vector<uint8_t *> hm_ptrs = scan(g_game_module, DDL_HASH_MAP_SIGNATURE);
		std::vector<uint8_t *> tl_ptrs = scan(g_game_module, DDL_TYPE_LIST_SIGNATURE);
		if (hm_ptrs.empty()) {
			g_output << "[DDL] could not find hash map pointer, aborting\n";
			return;
		}

		if (hm_ptrs.size() > 1) {
			g_output << "[DDL] too many hash map pointers, aborting\n";
			return;
		}

		if (tl_ptrs.empty()) {
			g_output << "[DDL] could not find type list pointer, aborting\n";
			return;
		}

		if (tl_ptrs.size() > 1) {
			g_output << "[DDL] too many type list pointers, aborting\n";
			return;
		}

		g_output << "[DDL] sleeping by 5 seconds to give the game a chance to "
					"set up...\n";

		std::this_thread::sleep_for(5000ms);

		g_output << "[DDL] dumping...\n";

		auto *hm_rip = hm_ptrs[0] + 3 + 7;
		auto hm_rip_rel = reinterpret_cast<uint32_t *>(hm_ptrs[0] + 6)[0];
		const auto *type_hash_map = reinterpret_cast<const rivet_hook::ddl::ddl_hash_map *>(hm_rip + hm_rip_rel);

		auto *tl_rip = tl_ptrs[0] + 7;
		auto tl_rip_rel = reinterpret_cast<uint32_t *>(tl_ptrs[0] + 3)[0];
		const auto **type_list = reinterpret_cast<const rivet_hook::ddl::ddl_type_descriptor **>(tl_rip + tl_rip_rel);

		auto *tlc_rip = tl_ptrs[0] + 17;
		auto tlc_rip_rel = reinterpret_cast<uint32_t *>(tl_ptrs[0] + 13)[0];
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
			root_type["type_id"] = type_ptr->type_id;
			if (type_ptr->parent != nullptr) {
				const auto *parent_ptr = *type_ptr->parent;
				root_type["parent_name"] = parent_ptr->name;
				root_type["parent_type_id"] = parent_ptr->type_id;
			}

			roots.push_back(root_type);
		}

		for (auto i = 0u; i < type_hash_map->capacity; ++i) {
			const auto &type_ptr = type_hash_map->values[i];
			if (type_ptr == nullptr) {
				continue;
			}

			nlohmann::json type_info;
			type_info["name"] = type_ptr->name;
			type_info["type_id"] = type_ptr->type_id;
			type_info["function_id"] = type_ptr->function_id;
			type_info["parent_id"] = type_ptr->parent_id;
			type_info["size"] = type_ptr->allocation_size;

			nlohmann::json::array_t fields;

			for (auto fi = 0; fi < type_ptr->field_count; ++fi) {
				nlohmann::json field;
				field["name"] = type_ptr->field_names[fi];
				field["id"] = type_ptr->field_ids[fi];
				field["type_id"] = type_ptr->field_type_ids[fi];
				field["label"] = type_ptr->field_labels[fi];
				field["alt_name"] = type_ptr->field_names2[fi];
				field["description"] = type_ptr->field_descriptions[fi];
				field["type"] = static_cast<uint32_t>(type_ptr->field_types[fi]);
				field["array_type"] = static_cast<uint32_t>(type_ptr->field_array_types[fi]);
				field["tag_type"] = static_cast<uint32_t>(type_ptr->field_tag_types[fi]);
				field["flags"] = static_cast<uint32_t>(type_ptr->field_mutable_flags[fi]);
				field["offset"] = type_ptr->field_offsets[fi];

				const auto *extra = type_ptr->field_ex[fi];
				if (extra != nullptr) {
					auto field_type = type_ptr->field_types[fi];
					auto type_id = type_ptr->field_type_ids[fi];
					if (field_type == 13) {
						const auto *ex_13 = reinterpret_cast<const rivet_hook::ddl::ddl_type_info *>(extra);
						field["type_restrict_name"] = ex_13->name;
						field["type_restrict_id"] = ex_13->type_id;
					} else if (field_type == 12) {
						if (bitset_ids.find(type_id) == bitset_ids.end()) {
							bitset_ids.emplace(type_id);
							const auto *ex_12 = reinterpret_cast<const rivet_hook::ddl::ddl_type_info_ex_type_12 *>(extra);
							nlohmann::json bitset;
							bitset["id"] = type_id;
							nlohmann::json::array_t bitset_values;
							for (auto bi = 0u; bi < ex_12->count; ++bi) {
								nlohmann::json bitset_value;
								bitset_value["name"] = ex_12->values[bi];
								bitset_value["id"] = ex_12->ids[bi];
								bitset_value["value"] = ex_12->names[bi];
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
							enuminfo["id"] = type_id;
							nlohmann::json::array_t enum_values;
							for (auto bi = 0u; bi < ex_11->select_info->count; ++bi) {
								nlohmann::json enum_value;
								enum_value["id"] = ex_11->select_info->ids[bi];
								enum_value["value"] = ex_11->select_info->names[bi];
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

		g_output << "[DDL] done\n";
		g_output << "[DDL] found " << enums.size() << " enums\n";
		g_output << "[DDL] found " << bitsets.size() << " bitsets\n";
		g_output << "[DDL] found " << roots.size() << " roots\n";
		g_output << "[DDL] found " << types.size() << " types\n";
	}

	using context_log_t = const char *(*) (const char *, const char *);
	context_log_t fwd_context_log = nullptr;

	std::string last_context;
	std::string last_message;

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
				g_output << "[ctx] [" << (context == nullptr ? "?" : context) << "] " << (message == nullptr ? "" : message) << '\n';
			}
		}
		return result;
	}

	auto
	log(const char *message, ...) -> void * {
		if (message != nullptr) {
			va_list args;
			va_start(args, message);
			auto buffer_size = vsnprintf(nullptr, 0, message, args) + 1;
			auto buffer = std::make_unique<char[]>(buffer_size);
			vsnprintf(buffer.get(), buffer_size, message, args);
			va_end(args);
			std::string buffer_str(buffer.get());
			g_output << "[log] " << buffer_str;
			if (buffer_str.back() != '\n') {
				g_output << '\n';
			}
		}

		return nullptr;
	}

	void
	init_minhook() {
		if (g_minhook_initialized) {
			return;
		}

		if (MH_Initialize() != MH_OK) {
			g_output << "[rivet] failed to initialize minhook\n";
			return;
		}

		g_minhook_initialized = true;
	}

	void
	attach_context_log() {
		auto ptrs = scan(g_game_module, CONTEXT_LOG_SIGNATURE);
		if (ptrs.empty()) {
			g_output << "[rivet] could not find context log pointer, aborting\n";
			return;
		}

		if (ptrs.size() > 1) {
			g_output << "[rivet] too many context log pointers, aborting\n";
			return;
		}

		init_minhook();

		if (MH_CreateHook(ptrs[0], &context_log, reinterpret_cast<LPVOID *>(&fwd_context_log)) != MH_OK) {
			g_output << "[rivet] failed to hook context log\n";
			return;
		}

		if (MH_EnableHook(ptrs[0]) != MH_OK) {
			g_output << "[rivet] failed to enable context log hook\n";
			return;
		}

		g_output << "[rivet] hooked context log\n";
	}

	void
	attach_log() {
		auto ptrs = scan(g_game_module, LOG_SIGNATURE);
		if (ptrs.empty()) {
			g_output << "[rivet] could not find log pointer, aborting\n";
			return;
		}

		if (ptrs.size() > 1) {
			g_output << "[rivet] too many log pointers, aborting\n";
			return;
		}

		init_minhook();

		if (MH_CreateHook(ptrs[0], &log, nullptr) != MH_OK) {
			g_output << "[rivet] failed to hook log\n";
			return;
		}

		if (MH_EnableHook(ptrs[0]) != MH_OK) {
			g_output << "[rivet] failed to enable log hook\n";
			return;
		}

		g_output << "[rivet] hooked log\n";
	}

#pragma clang diagnostic pop

	namespace runtime {
		void
		init() {
			// this runs on the main thread

			g_output.open("./rivet.log");
			g_output << "[rivet] init\n";

			g_settings = settings::load();

			g_game_module = get_game();
			if (g_game_module == nullptr) {
				g_settings.save();
				g_output << "[rivet] game not found, set exe_name in ini.\n";
				return;
			}

			if (g_settings.load_renderdoc) {
				g_output << "[rivet] loading renderdoc\n";
				if (std::filesystem::exists("renderdoc.dll")) {
					g_output << "[rivet] loaded local renderdoc\n";
					g_renderdoc = LoadLibraryA("renderdoc.dll");
				} else {
					auto renderdoc_path = std::filesystem::path(g_settings.renderdoc_path.data());
					if (renderdoc_path.empty()) {
						g_output << "[rivet] renderdoc.dll not found\n";
					} else {
						if (std::filesystem::exists(renderdoc_path)) {
							g_output << "[rivet] loaded " << renderdoc_path << "\n";
							g_renderdoc = LoadLibraryA(g_settings.renderdoc_path.data());
						} else {
							g_output << "[rivet] renderdoc.dll not found\n";
						}
					}
				}
			}

			if (g_settings.dump_ddl) {
				g_output << "[rivet] starting ddl dump thread\n";
				g_ddl_dump_thread = std::thread(dump_ddl);
			}

			if (g_settings.attach_context_log) {
				g_output << "[rivet] attaching context log\n";
				attach_context_log();
			}

			if (g_settings.attach_log) {
				g_output << "[rivet] attaching log\n";
				attach_log();
			}

			g_output << "[rivet] init complete\n";
		}

		void
		fini() {
			g_settings.save();
			g_output << "[rivet] fini\n";

			if (g_renderdoc != nullptr) {
				g_output << "[rivet] unloading renderdoc\n";
				FreeLibrary(g_renderdoc);
			}

			if (g_ddl_dump_thread.joinable()) {
				g_ddl_dump_thread.join();
			}

			g_output << "[rivet] fini complete\n";
			g_output.flush();
			g_output.close();
		}
	} // namespace runtime
} // namespace rivet_hook
