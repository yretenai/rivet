// SPDX-FileCopyrightText: 2025-2026 Neptuwunium
//
// SPDX-License-Identifier: EUPL-1.2

#include <vector>
#include <thread>
#include <unordered_set>

#include "ddl.hpp"
#include "runtime.hpp"
#include "signature_engine.hpp"
#include "signature.hpp"

#include <nlohmann/json.hpp>

using namespace rivet_hook;

namespace rivet_hook::ddl {
	auto
	get_ddl_field(nlohmann::json &field, const uint8_t* object, uint32_t offset, uint8_t array_type, uint8_t field_type, int32_t index, const ddl_type_info* const type_ptr, const int32_t type_index) -> void {
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
					auto str = reinterpret_cast<const ddl_runtime_str*>(object + offset)[index];
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
					auto str = reinterpret_cast<const ddl_runtime_file*>(object + offset)[index];
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


	auto
	dump_ddl() -> void {
		g_output << "[rivet] dumping DDL structures" << std::endl;
		using namespace std::chrono_literals;

		std::vector<uint8_t *> hm_pointers = scan(g_game_module, DDL_HASH_MAP_SIGNATURE);
		std::vector<uint8_t *> tl_pointers = scan(g_game_module, DDL_TYPE_LIST_SIGNATURE);
		if (hm_pointers.empty()) {
			g_output << "[DDL] could not find hash map pointer, aborting" << std::endl;
			g_output.flush();
			return;
		}

		if (hm_pointers.size() > 1) {
			g_output << "[DDL] too many hash map pointers, aborting" << std::endl;
			g_output.flush();
			return;
		}

		if (tl_pointers.empty()) {
			g_output << "[DDL] could not find type list pointer, aborting" << std::endl;
			g_output.flush();
			return;
		}

		if (tl_pointers.size() > 1) {
			g_output << "[DDL] too many type list pointers, aborting" << std::endl;
			g_output.flush();
			return;
		}

		g_output << "[rivet] found hash map pointer at " << std::hex << reinterpret_cast<uintptr_t>(hm_pointers[0]) << std::endl;
		g_output << "[rivet] found type list pointer at " << std::hex << reinterpret_cast<uintptr_t>(tl_pointers[0]) << std::endl;

		g_output << "[DDL] sleeping by 5 seconds to give the game a chance to set up..." << std::endl;

		std::this_thread::sleep_for(5000ms);

		g_output << "[DDL] dumping..." << std::endl;

		const auto *hm_rip = hm_pointers[0] + 3 + 7;
		const auto hm_rip_rel = reinterpret_cast<uint32_t *>(hm_pointers[0] + 6)[0];
		const auto *type_hash_map = reinterpret_cast<const ddl_hash_map *>(hm_rip + hm_rip_rel);

		auto *tl_rip = tl_pointers[0] + 7;
		const auto tl_rip_rel = reinterpret_cast<uint32_t *>(tl_pointers[0] + 3)[0];
		const auto **type_list = reinterpret_cast<const ddl_type_descriptor **>(tl_rip + tl_rip_rel);

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
			auto type_ctor = reinterpret_cast<ddl_call_t*>(type_ptr->constructor_ptr);
			auto type_dtor = reinterpret_cast<ddl_call_t*>(type_ptr->destructor_ptr);
			auto type_init = reinterpret_cast<ddl_call_t*>(type_ptr->init_defaults_ptr);
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
						const auto *ex_13 = reinterpret_cast<const ddl_type_info *>(extra);
						nlohmann::json struct_type;
						struct_type["name"] = ex_13->name;
						struct_type["id"] = ex_13->type_id;
						field["struct"] = struct_type;
					} else if (field_type == 12) {
						if (bitset_ids.find(type_id) == bitset_ids.end()) {
							bitset_ids.emplace(type_id);
							const auto *ex_12 = reinterpret_cast<const ddl_type_info_ex_type_12 *>(extra);
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
						const auto *ex_11 = reinterpret_cast<const ddl_type_info_ex_type_11 *>(extra);
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
		g_output.flush();
	}

	auto
	list_versions() -> void {
		g_output << "[rivet] dumping versions" << std::endl;
		using namespace std::chrono_literals;
		using version_str_fn = const char *(*) (uint32_t index);
		using version_hash_fn = uint32_t(*) (uint32_t index);

		std::vector<uint8_t *> function_ptrs = scan(g_game_module, VERSION_SIGNATURE);
		std::vector<uint8_t *> hash_function_ptrs = scan(g_game_module, VERSION_HASH_SIGNATURE);

		if (function_ptrs.size() != 1 && hash_function_ptrs.size() != 1) {
			g_output << "[ver] could not find version pointer, aborting" << std::endl;
			g_output.flush();
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
		g_output.flush();
	}
}
