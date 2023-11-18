// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#define RIVET_USE_NLOHMANN

#include "../gltf_helper.hpp"
#include <fx/gltf.h>

#include <rivet/data/asset_bundle.hpp>
#include <rivet/gfx/model.hpp>
#include <rivet/hash/type_id_registry.hpp>
#include <rivet/structures/gfx/rivet_model.hpp>
#include <rivet/structures/gfx/rivet_model_vert.hpp>

using namespace rivet::data;
using namespace rivet::structures::gfx;
using namespace rivet::type_id;

namespace rivet::gfx {
	model::model(const rivet::data::asset_bundle &bundle, const rivet::rivet_size index) {
		const auto dat1_stream = bundle.get_entry(index);
		if (dat1_stream == nullptr) {
			throw invalid_operation("model::model: invalid model stream");
		}

		init(dat1_stream, bundle.get_entry(index + 1));
	}

	void
	model::init(const std::shared_ptr<rivet_data_array> &dat1_stream, const std::shared_ptr<rivet_data_array> &resident) {
		data = dat1(dat1_stream, resident);
		if (data.type_name != "Model Built File") {
			throw invalid_operation("model::model: invalid model stream");
		}

		auto uv1_stream = data.get_section<rivet_texcoord_vert>(model_uv1_vert_type_id);
		auto tex_stream = data.get_section<rivet_texcoord_vert>(model_tex_vert_type_id);
		auto vert_stream = data.get_section<rivet_standard_vert>(model_standard_vert_type_id);
		auto index_stream = data.get_section<rivet_index>(model_index_type_id);
		auto color_stream = data.get_section<rivet_color_vert>(model_color_vert_type_id);

		if (vert_stream == nullptr) {
			throw invalid_operation("model::model: invalid Std Vert stream");
		}

		auto subset_data = data.get_section<model_subset>(model_subset_type_id);
		auto header_data = data.get_section<model_header>(model_built_type_id);
		auto lod_look = data.get_section<model_look>(model_look_type_id);
		auto built_look = data.get_section_data(model_look_built_type_id);

		if (header_data == nullptr) {
			throw invalid_operation("model::model: invalid Model Header stream");
		}

		if (subset_data == nullptr) {
			throw invalid_operation("model::model: invalid Model Subset stream");
		}

		for (const auto &subset_info : *subset_data) {
			// todo: subsets
		}

		// note: As far as I can tell the vertex data is the same for all 4 types, only anim has index data. Rift Apart only uses Anim Morph. Ziva is for muscles, and only exists in Miles Morales?
		if (auto anim_morph_data = data.get_section_data(model_anim_morph_type_id); anim_morph_data != nullptr) {
			auto anim_morph_index_stream = data.get_section_data(model_anim_morph_index_type_id);
			auto anim_morph_vert_stream = data.get_section_data(model_anim_morph_vert_type_id);
			if (anim_morph_vert_stream == nullptr) {
				throw invalid_operation("model::model: invalid Model Anim Morph stream");
			}

			// todo: anim morph
		}

		if (auto anim_geom_data = data.get_section_data(model_anim_geom_type_id); anim_geom_data != nullptr) {
			auto anim_geom_vert_stream = data.get_section_data(model_anim_geom_vfx_type_id);
			if (anim_geom_vert_stream == nullptr) {
				throw invalid_operation("model::model: invalid Model Geom stream");
			}

			// todo: anim geom
		}

		if (auto anim_ziva_data = data.get_section_data(model_anim_ziva_type_id); anim_ziva_data != nullptr) {
			auto anim_ziva_vert_stream = data.get_section_data(model_anim_ziva_vert_type_id);
			if (anim_ziva_vert_stream == nullptr) {
				throw invalid_operation("model::model: invalid Model Ziva stream");
			}

			// todo: anim ziva
		}

		// very old? not sure if this is used anymore
		if (auto morph_data = data.get_section_data(model_morph_type_id); morph_data != nullptr) {
			auto morph_vert_stream = data.get_section_data(model_morph_vert_type_id);
			if (morph_vert_stream == nullptr) {
				throw invalid_operation("model::model: invalid Model Morph stream");
			}

			// todo: morph
		}

		if (auto material_data = data.get_section_data(model_material_type_id); material_data != nullptr) {
			auto override_data = data.get_section_data(model_tex_overrides_type_id);
			// todo: materials
		}

		if (auto joint_data = data.get_section_data(model_joint_type_id); joint_data != nullptr) {
			auto joint_remap = data.get_section_data(model_joint_remap_type_id);
			auto joint_hierarchy_data = data.get_section_data(model_joint_hierarchy_type_id);
			// todo: joints

			if (auto skin_data = data.get_section_data(model_skin_type_id); skin_data != nullptr) {
				auto bind_data = data.get_section_data(model_bind_type_id);
				auto skin_data_stream = data.get_section_data(model_skin_data_type_id);
				auto gpu_data_stream = data.get_section_data(model_gpu_vert_type_id);

				if (bind_data == nullptr) {
					throw invalid_operation("model::model: invalid Model Bind stream");
				}

				if (joint_data == nullptr) {
					throw invalid_operation("model::model: invalid Model Joint stream");
				}

				if (skin_data_stream == nullptr && gpu_data_stream == nullptr) { // either one is fine, but one must exist
					throw invalid_operation("model::model: invalid Model Skin stream");
				}

				// todo: skin
			}

			if (auto locator_data = data.get_section_data(model_locator_type_id); locator_data != nullptr) {
				// todo: locators
			}
		}

		if (auto spline_data = data.get_section_data(model_spline_type_id); spline_data != nullptr) {
			auto spline_subset_data = data.get_section_data(model_spline_subsets_type_id);

			if (spline_subset_data == nullptr) {
				throw invalid_operation("model::model: invalid Model Spline Subset stream");
			}

			// todo: spline

			if (auto spline_skin_data = data.get_section_data(model_spline_skin_type_id); spline_skin_data != nullptr) {
				auto spline_joint_data = data.get_section_data(model_spline_joint_type_id);
				auto spline_weight_data = data.get_section_data(model_spline_weight_type_id);

				if (spline_joint_data == nullptr) {
					throw invalid_operation("model::model: invalid Model Spline Joint stream");
				}

				if (spline_weight_data == nullptr) {
					throw invalid_operation("model::model: invalid Model Spline Weight stream");
				}

				// todo: spline skin
			}
		}
	}

	auto
	model::to_nlohmann_json() const -> nlohmann::json {
		auto obj = nlohmann::json();
		auto look_array = obj["looks"] = nlohmann::json::array();

		for (const auto &[name, subsets] : looks) {
			auto look = look_array.emplace_back();
			look["name"] = name;
			auto subset_array = look["subsets"] = nlohmann::json::array();
			for (const auto &subset : subsets) {
				auto lod = subset_array.emplace_back(nlohmann::json::array());
				for (const auto &subset_id : subset) {
					lod.emplace_back(subset_id);
				}
			}
		}

		auto material_array = obj["materials"] = nlohmann::json::array();
		for (const auto &[id, hash, path, name, flags] : materials) {
			auto material = material_array.emplace_back();
			material["id"] = id;
			material["hash"] = hash;
			material["path"] = path;
			material["name"] = name;
			material["flags"] = flags;
		}

		auto subset_array = obj["subsets"] = nlohmann::json::array();
		for (const auto &[vertices, normals, uv0, uv1, color, blend_indices, blend_weights, faces, morphs, center_of_mass, extent, flags, material_id] : subsets) {
			auto subset = subset_array.emplace_back();
			subset["center_of_mass"] = center_of_mass;
			subset["extent"] = extent;
			subset["flags"] = static_cast<uint32_t>(flags);
			subset["material"] = material_id;

			auto morph_array = subset["morphs"] = nlohmann::json::array();
			for (const auto &[name, indices, vertices] : morphs) {
				morph_array.emplace_back(name);
			}
		}

		auto bone_array = obj["bones"] = nlohmann::json::array();
		for (const auto &[name, position, rotation, scale, parent] : bones) {
			auto bone = bone_array.emplace_back();
			bone["name"] = name;
			bone["position"] = position;
			bone["rotation"] = rotation;
			bone["scale"] = scale;
			bone["parent"] = parent;
		}

		auto locator_array = obj["locators"] = nlohmann::json::array();
		for (const auto &[name, transform, parent] : locators) {
			auto locator = locator_array.emplace_back();
			locator["name"] = name;
			locator["transform"] = transform;
			locator["parent"] = parent;
		}

		return obj;
	}

	void
	model::to_gltf(const std::filesystem::path &path, const std::string &name, int lod) const {
		auto gltf = fx::gltf::Document();
		gltf.asset.version = "2.0";
		gltf.asset.generator = "rivet";

		auto [scene, _scene_id] = rivet::gltf::create_scene(gltf);
		auto [root_node, root_id] = rivet::gltf::create_node(gltf);
		scene.nodes.push_back(root_id);

		auto [mesh, mesh_id] = rivet::gltf::create_mesh(gltf);
		root_node.name = name;
		root_node.mesh = mesh_id;

		// todo: get subset and make primitives
		// todo: build skin, materials, joints, locators
		// todo: what is splines?
	}
} // namespace rivet::gfx
