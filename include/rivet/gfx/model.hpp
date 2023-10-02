// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

#include <tuple>
#include <vector>

#ifdef RIVET_USE_NLOHMANN
	#include <nlohmann/json.hpp>
#endif

#include <ankerl/unordered_dense.h>

#include <rivet/hash/type_id.hpp>

#include <rivet/data/dat1.hpp>
#include <rivet/rivet_array.hpp>
#include <rivet/rivet_keywords.hpp>
#include <rivet/rivet_vec.hpp>
#include <rivet/structures/gfx/rivet_model.hpp>
#include <rivet/structures/gfx/rivet_model_vert.hpp>

namespace rivet {
	namespace data {
		struct asset_bundle;
	} // namespace data

	namespace gfx {
		struct RIVET_SHARED model {
			constexpr const static rivet_type_id type_id = 0x9D2C0FA9;

			RIVET_DEFINE_TYPE_ID(model_anim_dyndef, "Model Anim Dynamics Def");
			RIVET_DEFINE_TYPE_ID(model_anim_geom, "Model Anim Geom Info");
			RIVET_DEFINE_TYPE_ID(model_anim_geom_vfx, "Model Anim Geom Particles");
			RIVET_DEFINE_TYPE_ID(model_anim_morph_vert, "Model Anim Morph Data");
			RIVET_DEFINE_TYPE_ID(model_anim_morph_index, "Model Anim Morph Indices");
			RIVET_DEFINE_TYPE_ID(model_anim_morph, "Model Anim Morph Info");
			RIVET_DEFINE_TYPE_ID(model_anim_ziva, "Model Anim Ziva Info");
			RIVET_DEFINE_TYPE_ID(model_anim_ziva_vert, "Model Anim Ziva Data");
			RIVET_DEFINE_TYPE_ID(model_bind, "Model Bind Pose");
			RIVET_DEFINE_TYPE_ID(model_built, "Model Built");
			RIVET_DEFINE_TYPE_ID(model_color_vert, "Model Col Vert");
			RIVET_DEFINE_TYPE_ID(model_collision_index, "Model Collision Index Data");
			RIVET_DEFINE_TYPE_ID(model_collision_vert, "Model Collision Vertex Data");
			RIVET_DEFINE_TYPE_ID(model_gpu_vert, "Model GPU Skin");
			RIVET_DEFINE_TYPE_ID(model_index, "Model Index");
			RIVET_DEFINE_TYPE_ID(model_joint, "Model Joint");
			RIVET_DEFINE_TYPE_ID(model_joint_bsph, "Model Joint Bspheres");
			RIVET_DEFINE_TYPE_ID(model_joint_hierarchy, "Model Joint Hierarchy");
			RIVET_DEFINE_TYPE_ID(model_joint_lookup, "Model Joint Lookup");
			RIVET_DEFINE_TYPE_ID(model_joint_leaf, "Model Leaf Ids");
			RIVET_DEFINE_TYPE_ID(model_locator, "Model Locator");
			RIVET_DEFINE_TYPE_ID(model_locator_lookup, "Model Locator Lookup");
			RIVET_DEFINE_TYPE_ID(model_look, "Model Look");
			RIVET_DEFINE_TYPE_ID(model_look_built, "Model Look Built");
			RIVET_DEFINE_TYPE_ID(model_lookgroup, "Model Look Group");
			RIVET_DEFINE_TYPE_ID(model_material, "Model Material");
			RIVET_DEFINE_TYPE_ID(model_mirror, "Model Mirror Ids");
			RIVET_DEFINE_TYPE_ID(model_morph_vert, "Model Morph Data");
			RIVET_DEFINE_TYPE_ID(model_morph, "Model Morph Info");
			RIVET_DEFINE_TYPE_ID(model_rt_param, "Model Ray-Tracing Parameters");
			RIVET_DEFINE_TYPE_ID(model_phys, "Model Physics Data"); // havok physics data
			RIVET_DEFINE_TYPE_ID(model_overrides, "Model Render Overrides");
			RIVET_DEFINE_TYPE_ID(model_skin, "Model Skin Batch");
			RIVET_DEFINE_TYPE_ID(model_skin_data, "Model Skin Data");
			RIVET_DEFINE_TYPE_ID(model_joint_remap, "Model Skin Joint Remap");
			RIVET_DEFINE_TYPE_ID(model_spline, "Model Splines");
			RIVET_DEFINE_TYPE_ID(model_spline_subsets, "Model Spline Subsets");
			RIVET_DEFINE_TYPE_ID(model_spline_skin, "Model Spline Skin Binding");
			RIVET_DEFINE_TYPE_ID(model_spline_joint, "Model Spline Joint Binding");
			RIVET_DEFINE_TYPE_ID(model_spline_weight, "Model Spline Joint Weights");
			RIVET_DEFINE_TYPE_ID(model_standard_vert, "Model Std Vert");
			RIVET_DEFINE_TYPE_ID(model_subset, "Model Subset");
			RIVET_DEFINE_TYPE_ID(model_tex_vert, "Model Tex Vert");
			RIVET_DEFINE_TYPE_ID(model_tex_overrides, "Model Texture Overrides");
			RIVET_DEFINE_TYPE_ID(model_uv1_vert, "Model UV1 Vert");

			RIVET_DEFINE_FAKE_TYPE_ID(model_5a39fab7, "Model Unknown 5a39fab7", 0x5a39fab7);
			RIVET_DEFINE_FAKE_TYPE_ID(model_665da362, "Model Unknown 665da362", 0x665da362);
			RIVET_DEFINE_FAKE_TYPE_ID(model_707f1b58, "Model Unknown 707f1b58", 0x707f1b58); // probably inverse kinematics, relates to joints.
			RIVET_DEFINE_FAKE_TYPE_ID(model_7ca37da0, "Model Unknown 7ca37da0", 0x7ca37da0);
			RIVET_DEFINE_FAKE_TYPE_ID(model_855275d7, "Model Unknown 855275d7", 0x855275d7);
			RIVET_DEFINE_FAKE_TYPE_ID(model_8a84e4d6, "Model Unknown 8a84e4d6", 0x8a84e4d6);
			RIVET_DEFINE_FAKE_TYPE_ID(model_9a434b29, "Model Unknown 9a434b29", 0x9a434b29);
			RIVET_DEFINE_FAKE_TYPE_ID(model_b25b3163, "Model Unknown b25b3163", 0xb25b3163);
			RIVET_DEFINE_FAKE_TYPE_ID(model_df9fdf12, "Model Unknown df9fdf12", 0xdf9fdf12);

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
