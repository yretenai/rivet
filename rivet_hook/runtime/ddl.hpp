// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

#include <array>
#include <cstdint>

namespace rivet_hook::ddl {
#pragma pack(push, 1)

	using ddl_call_t = void* (void*);

	struct ddl_type_info {
		const char *name;
		uint32_t type_id;
		uint32_t function_id;
		uint32_t parent_id;
		uint32_t allocation_size;
		int16_t field_count;
		std::array<uint8_t, 38> unknowns;
		const void **field_ex;
		uint32_t *field_ids;
		const char **field_names;
		uint8_t *field_types;
		uint8_t *field_array_types;
		uint8_t *field_tag_types;
		uint8_t *field_mutable_flags;
		uint32_t *field_offsets;
		uint32_t *field_type_ids;
		const char **field_descriptions;
		const char **field_labels;
		const char **field_names2;
		uint32_t footer_unknown1;
		uint32_t footer_unknown2;
		uint64_t footer_unknown3;
		uint64_t footer_unknown4;
		const void* constructor_ptr; // sets vtable
		const void* copy_ptr; // seems to copy data
		const void* init_defaults_ptr; // calls allocators
		const void* reset_defaults_ptr; // also calls deallocators
		const void* reset_field_ptr; // resets specific index
		const void* destructor_ptr; // calls deallocators
		const void* hash_test_ptr; // compares hashes?
	};

	struct ddl_type_info_ex_type_12 {
		uint32_t count;
		uint32_t unknown1;
		intptr_t unknown2;
		intptr_t unknown3;
		uint32_t *values;
		const char **names;
		uint32_t *ids;
	};

	struct ddl_type_ex_select_info {
		uint32_t type_id;
		uint32_t count;
		intptr_t unknown1;
		intptr_t unknown2;
		uint32_t *ids;
		const char **names;
		const char **descriptions;
		const char **labels;
	};

	struct ddl_type_info_ex_type_11 {
		const ddl_type_ex_select_info *select_info;
	};

	struct ddl_type_descriptor;

	struct ddl_type_descriptor {
		intptr_t **vtable;
		const char *name;
		uint32_t type_id;
		uint32_t index;
		const ddl_type_descriptor **parent;
	};

	struct ddl_hash_map {
		intptr_t *buckets;
		const ddl_type_info **values;
		uint32_t count;
		uint32_t capacity;
	};

	struct ddl_runtime_str {
		const char* value;
		int32_t length;
		uint32_t hash;
	};

	struct ddl_runtime_file {
		const char* value;
		int32_t length;
		uint64_t asset_id;
	};

#pragma pack(pop)
} // namespace rivet_hook::ddl
