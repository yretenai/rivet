// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <tuple>
#include <vector>

#include <ankerl/unordered_dense.h>

#include <rivet/rivet_vec.hpp>
#include <rivet/rivet_keywords.hpp>
#include <rivet/structures/gfx/rivet_model_vert.hpp>

namespace rivet::gfx {
	struct RIVET_SHARED model {
		struct morph_info {
			rivet_vec3f position;
			rivet_vec3f normal;
			rivet_vec3f unknown;
			rivet_vec3f unknown2;
		};

		struct subset_info {
			std::vector<rivet_vec3f> vertices;
			std::vector<rivet_vec3f> normals;
			std::vector<rivet_vec2f> uv0;
			std::vector<rivet_vec2f> uv1;
			std::vector<rivet_vec4f> color;
			std::vector<rivet_vec4f> blend_indices;
			std::vector<rivet_vec4f> blend_weights;
			std::vector<rivet_vec3i> faces;
			ankerl::unordered_dense::map<std::uint32_t, std::tuple<uint32_t, std::vector<morph_info>>> morphs;
		};

		// todo: looksets, materials, a lot of other things.
		std::vector<subset_info> subsets;
		ankerl::unordered_dense::map<std::uint32_t, std::string_view> bone_names;
		ankerl::unordered_dense::map<std::uint32_t, std::string_view> morph_names;
	};
} // namespace rivet::gfx
