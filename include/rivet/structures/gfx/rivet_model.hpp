// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <cstdint>

#include <rivet/rivet_keywords.hpp>

namespace rivet::structures::gfx {
#pragma pack(push, 1)

	struct model_aabb {
		rivet::rivet_vec3f min {};
		rivet::rivet_vec3f max {};
		rivet::rivet_vec3f center {};
	};

	struct model_header {
		uint32_t unknown1 {};
		model_aabb aabb {};
		uint16_t unknown2 {};
		uint16_t unknown3 {};
		float scale {};
		uint32_t lod_info_size {}; // check for 0x44
		std::array<float, 8> lod_points {};
		std::array<uint32_t, 8> lod_unknown4 {};
		uint32_t lod_unknown5 {};
	};

	struct model_lod_look {
		rivet_size16 subset_id_start {};
		rivet_size16 count {};
	};

	struct model_look {
		std::array<model_lod_look, 8> lods {};
	};

	struct model_look_header {
		// 99% certain these relate to lod swapping
		rivet_off64 ids_offset {};
		rivet_off64 ids2_offset {};
		rivet_off64 ids3_offset {};
		rivet_off64 ids4_offset {};
		rivet_off64 ids5_offset {};
		rivet_off64 unknown_array1_offset {}; // uint16_t * 6
		rivet_off64 unknown_array2_offset {}; // 0x100 * 6
		rivet_size16 ids1_count {};
		rivet_size16 ids2_count {};
		rivet_size16 ids3_count {};
		rivet_size16 ids4_count {};
		rivet_size16 ids5_count {};
		rivet_size16 padding {};
		rivet_hash hash_lowercase {};
		rivet_hash hash {};
		rivet_off name_offset {};
	};

	enum class model_subset_flags : uint16_t {
		relative_index = 0x10,
		use_gpu_skin = 0x100
	};

	struct model_subset {
		rivet::rivet_vec3f center_of_mass {};
		uint16_t unknown1 {};
		uint16_t unknown2 {};
		uint16_t unknown3 {};
		uint16_t unknown4 {};
		rivet_size vertex_index {};
		rivet_size index_index {};
		rivet_size index_count {};
		rivet_size16 vertex_count {};
		uint16_t unknown5 {};
		model_subset_flags flags {};
		uint16_t material_index {};
		rivet_size16 skin_index {};
		rivet_size16 skin_count {};
		rivet_size16 unknown_index {};
		rivet_size16 unknown_count {};
		rivet::rivet_vec2f extent {};
		rivet_size gpu_index {};
		uint32_t padding {};
	};

#pragma pack(pop)
} // namespace rivet::structures::gfx
