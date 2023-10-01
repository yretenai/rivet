// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/data/asset_bundle.hpp>
#include <rivet/data/dat1.hpp>
#include <rivet/gfx/model.hpp>
#include <rivet/structures/gfx/rivet_model.hpp>
#include <rivet/structures/gfx/rivet_model_vert.hpp>

using namespace rivet::data;
using namespace rivet::structures::gfx;

rivet::gfx::model::model(const rivet::data::asset_bundle &bundle, rivet::rivet_size index) {
	auto dat1_stream = bundle.get_entry(index);
	if (dat1_stream == nullptr) {
		throw invalid_operation("model::model: invalid model stream");
	}

	init(dat1_stream, bundle.get_entry(index + 1));
}

void
rivet::gfx::model::init(const std::shared_ptr<rivet_data_array> &dat1_stream, const std::shared_ptr<rivet_data_array> &resident) {
	auto data = dat1(dat1_stream, resident);
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
	auto anim_morph_data = data.get_section_data(model_anim_morph_type_id);
	if (anim_morph_data != nullptr) {
		auto anim_morph_index_stream = data.get_section_data(model_anim_morph_index_type_id);
		auto anim_morph_vert_stream = data.get_section_data(model_anim_morph_vert_type_id);
		if (anim_morph_vert_stream == nullptr) {
			throw invalid_operation("model::model: invalid Model Anim Morph stream");
		}

		// todo: anim morph
	}

	auto anim_geom_data = data.get_section_data(model_anim_geom_type_id);
	if (anim_geom_data != nullptr) {
		auto anim_geom_vert_stream = data.get_section_data(model_anim_geom_vfx_type_id);
		if (anim_geom_vert_stream == nullptr) {
			throw invalid_operation("model::model: invalid Model Geom stream");
		}

		// todo: anim geom
	}

	auto anim_ziva_data = data.get_section_data(model_anim_ziva_type_id);
	if (anim_ziva_data != nullptr) {
		auto anim_ziva_vert_stream = data.get_section_data(model_anim_ziva_vert_type_id);
		if (anim_ziva_vert_stream == nullptr) {
			throw invalid_operation("model::model: invalid Model Ziva stream");
		}

		// todo: anim ziva
	}

	// very old? not sure if this is used anymore
	auto morph_data = data.get_section_data(model_morph_type_id);
	if (morph_data != nullptr) {
		auto morph_vert_stream = data.get_section_data(model_morph_vert_type_id);
		if (morph_vert_stream == nullptr) {
			throw invalid_operation("model::model: invalid Model Morph stream");
		}

		// todo: morph
	}

	auto material_data = data.get_section_data(model_material_type_id);
	if (material_data != nullptr) {
		auto override_data = data.get_section_data(model_tex_overrides_type_id);
		// todo: materials
	}

	auto joint_data = data.get_section_data(model_joint_type_id);
	if (joint_data != nullptr) {
		auto joint_remap = data.get_section_data(model_joint_remap_type_id);
		auto joint_hierarchy_data = data.get_section_data(model_joint_hierarchy_type_id);
		// todo: joints

		auto skin_data = data.get_section_data(model_skin_type_id);
		if (skin_data != nullptr) {
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

		auto locator_data = data.get_section_data(model_locator_type_id);
		if (locator_data != nullptr) {
			// todo: locators
		}
	}

	auto spline_data = data.get_section_data(model_spline_type_id);
	if (spline_data != nullptr) {
		auto spline_subset_data = data.get_section_data(model_spline_subsets_type_id);

		if (spline_subset_data == nullptr) {
			throw invalid_operation("model::model: invalid Model Spline Subset stream");
		}

		// todo: spline

		auto spline_skin_data = data.get_section_data(model_spline_skin_type_id);
		if (spline_skin_data != nullptr) {
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
