// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

#include <cstdint>

namespace rivet_hook::ddl {
#pragma pack(push, 1)

	struct ddl_type_info {
		const char *name;
		const uint32_t type_id;
		const uint32_t function_id;
		const uint32_t parent_id;
		const uint32_t allocation_size;
		const int16_t field_count;
		const uint8_t unknowns[38];
		const void **field_ex;
		const uint32_t *field_ids;
		const char **field_names;
		const uint8_t *field_types;
		const uint8_t *field_array_types;
		const uint8_t *field_tag_types;
		const uint8_t *field_mutable_flags;
		const uint32_t *field_offsets;
		const uint32_t *field_type_ids;
		const char **field_descriptions;
		const char **field_labels;
		const char **field_names2;
	};

	struct ddl_type_info_ex_type_12 {
		const uint32_t count;
		const uint32_t unknown1;
		const intptr_t unknown2;
		const intptr_t unknown3;
		const uint32_t *values;
		const char **names;
		const uint32_t *ids;
	};

	struct ddl_type_ex_select_info {
		const uint32_t type_id;
		const uint32_t count;
		const intptr_t unknown1;
		const intptr_t unknown2;
		const uint32_t *ids;
		const char **names;
		const char **descriptions;
		const char **labels;
	};

	struct ddl_type_info_ex_type_11 {
		const ddl_type_ex_select_info *select_info;
	};

	struct ddl_type_descriptor;

	struct ddl_type_descriptor {
		const intptr_t **vtable;
		const char *name;
		const uint32_t type_id;
		const uint32_t index;
		const ddl_type_descriptor **parent;
	};

	struct ddl_hash_map {
		const intptr_t *buckets;
		const ddl_type_info **values;
		const uint32_t count;
		const uint32_t capacity;
	};

#pragma pack(pop)
} // namespace rivet_hook::ddl
