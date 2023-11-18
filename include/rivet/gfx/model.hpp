// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

#include <vector>

#ifdef RIVET_USE_NLOHMANN
	#include <nlohmann/json.hpp>
#endif

#include <ankerl/unordered_dense.h>

#include <rivet/data/dat1.hpp>
#include <rivet/rivet_array.hpp>
#include <rivet/rivet_keywords.hpp>
#include <rivet/rivet_vec.hpp>
#include <rivet/structures/gfx/rivet_model.hpp>

namespace rivet {
	namespace data {
		struct asset_bundle;
	} // namespace data

	namespace gfx {
		struct RIVET_SHARED model {
			constexpr const static rivet_type_id type_id = 0x9D2C0FA9;

			struct morph_vertex {
				rivet_vec3f position;
				rivet_vec3f normal;
				rivet_vec3f unknown;
				rivet_vec3f unknown2;
			};

			struct morph_info {
				std::string_view name;
				std::vector<uint32_t> indices;
				// todo: this should be indices and the vertices/indices should be unpacked once. reused buffers may be a problem for memory.
				std::vector<morph_vertex> vertices;
			};

			struct subset_info {
				// todo: this should be indices and the vertices/indices should be unpacked once. reused buffers may be a problem for memory.
				std::vector<rivet_vec3f> vertices;
				std::vector<rivet_vec3f> normals;
				std::vector<rivet_vec2f> uv0;
				std::vector<rivet_vec2f> uv1;
				std::vector<rivet_vec4f> color;
				std::vector<rivet_vec4f> blend_indices;
				std::vector<rivet_vec4f> blend_weights;
				std::vector<rivet_vec3i> faces;
				std::vector<morph_info> morphs;

				rivet::rivet_vec3f center_of_mass {};
				rivet::rivet_vec2f extent {};
				rivet::structures::gfx::model_subset_flags flags {};
				int32_t material_id;
			};

			struct bone_info {
				std::string_view name;
				rivet_vec3f position;
				rivet_vec4f rotation;
				rivet_vec3f scale;
				std::uint32_t parent;
			};

			struct locator_info {
				std::string_view name;
				rivet_mat34 transform;
				std::uint32_t parent;
			};

			struct material_info {
				rivet_asset_id id;
				rivet_hash hash;
				std::string_view path;
				std::string_view name;
				uint32_t flags;
			};

			struct look_info {
				std::string_view name;
				std::array<std::vector<uint32_t>, 8> subsets;
			};

			std::vector<subset_info> subsets;
			std::vector<bone_info> bones;
			std::vector<locator_info> locators;
			std::vector<material_info> materials;
			std::vector<look_info> looks;

			explicit model(const rivet::data::asset_bundle &bundle, rivet_size index = 0);

			model(const std::shared_ptr<rivet_data_array> &dat1_stream, const std::shared_ptr<rivet_data_array> &resident) { init(dat1_stream, resident); }

#ifdef RIVET_USE_NLOHMANN
			[[nodiscard]] auto
			to_nlohmann_json() const -> nlohmann::json;
#endif

			auto
			to_gltf(const std::filesystem::path &path, const std::string &name, int lod = 0) const -> void;

		private:
			rivet::data::dat1 data;

			void
			init(const std::shared_ptr<rivet_data_array> &dat1_stream, const std::shared_ptr<rivet_data_array> &resident);
		};
	} // namespace gfx
} // namespace rivet
