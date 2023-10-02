// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

#include <rivet/hash/type_id.hpp>

namespace rivet::type_id {
	RIVET_DEFINE_TYPE_ID(archive_header, "Archive TOC Header");
	RIVET_DEFINE_TYPE_ID(archive_ids, "Archive TOC Asset IDs");
	RIVET_DEFINE_TYPE_ID(archive_assets, "Archive TOC Asset Metadata");
	RIVET_DEFINE_TYPE_ID(archive_archives, "Archive TOC File Metadata");
	RIVET_DEFINE_TYPE_ID(archive_texture_ids, "Archive TOC Texture Asset Ids");
	RIVET_DEFINE_TYPE_ID(archive_texture_meta, "Archive TOC Texture Meta");
	RIVET_DEFINE_TYPE_ID(archive_texture_header, "Archive TOC Texture Header");
	RIVET_DEFINE_TYPE_ID(archive_asset_headers, "Archive TOC Asset Header Data");
	RIVET_DEFINE_TYPE_ID(archive_key_asset_ids, "Archive TOC Key Asset IDs");
	RIVET_DEFINE_FAKE_TYPE_ID(archive_asset_offsets, "Archive TOC Asset Offsets", 0xDCD720B5); // todo: find real name

	RIVET_DEFINE_TYPE_ID(dependency_types, "Asset Types");
	RIVET_DEFINE_TYPE_ID(dependency_ids, "Asset Ids");
	RIVET_DEFINE_TYPE_ID(dependency_links, "Dependency Links");
	RIVET_DEFINE_TYPE_ID(dependency_names, "Asset Names");
	RIVET_DEFINE_TYPE_ID(dependency_heads, "Dependency Links Heads");
	RIVET_DEFINE_FAKE_TYPE_ID(graph, "Dependency Graph", 0xBFEC699F); // todo: find real name

	RIVET_DEFINE_TYPE_ID(localization_header, "Localization Header Built");
	RIVET_DEFINE_TYPE_ID(localization_flags, "Localization Flags Built");
	RIVET_DEFINE_TYPE_ID(localization_tags, "Localization Tags Built");
	RIVET_DEFINE_TYPE_ID(localization_text, "Localization Text Built");
	RIVET_DEFINE_TYPE_ID(localization_tags_offsets, "Localization TagOffsets Built");
	RIVET_DEFINE_TYPE_ID(localization_text_offsets, "Localization TextOffsets Built");
	RIVET_DEFINE_TYPE_ID(localization_indices, "Localization SortedIndexes Built");
	RIVET_DEFINE_TYPE_ID(localization_ids, "Localization SortedHashes Built");
	RIVET_DEFINE_FAKE_TYPE_ID(localization_hashes, "Localization Tag Hashes", 0x06a58050); // todo: find real name

	RIVET_DEFINE_TYPE_ID(config_refs, "Config Asset Refs");
	RIVET_DEFINE_TYPE_ID(config_type, "Config Type");
	RIVET_DEFINE_TYPE_ID(config_data, "Config Built");

	RIVET_DEFINE_TYPE_ID(texture_header, "Texture Header");

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
	RIVET_DEFINE_TYPE_ID(model_spline_cvs, "Model Splines CVs");
	RIVET_DEFINE_TYPE_ID(model_standard_vert, "Model Std Vert");
	RIVET_DEFINE_TYPE_ID(model_subset, "Model Subset");
	RIVET_DEFINE_TYPE_ID(model_tex_vert, "Model Tex Vert");
	RIVET_DEFINE_TYPE_ID(model_tex_overrides, "Model Texture Overrides");
	RIVET_DEFINE_TYPE_ID(model_uv1_vert, "Model UV1 Vert");
	RIVET_DEFINE_FAKE_TYPE_ID(model_5a39fab7, "Model Unknown 5a39fab7", 0x5a39fab7); // todo: find real name
	RIVET_DEFINE_FAKE_TYPE_ID(model_665da362, "Model Unknown 665da362", 0x665da362); // todo: find real name
	RIVET_DEFINE_FAKE_TYPE_ID(model_707f1b58, "Model Unknown 707f1b58", 0x707f1b58); // probably inverse kinematics, relates to joints. todo: find real name
	RIVET_DEFINE_FAKE_TYPE_ID(model_7ca37da0, "Model Unknown 7ca37da0", 0x7ca37da0); // todo: find real name
	RIVET_DEFINE_FAKE_TYPE_ID(model_855275d7, "Model Unknown 855275d7", 0x855275d7); // todo: find real name
	RIVET_DEFINE_FAKE_TYPE_ID(model_8a84e4d6, "Model Unknown 8a84e4d6", 0x8a84e4d6); // todo: find real name
	RIVET_DEFINE_FAKE_TYPE_ID(model_9a434b29, "Model Unknown 9a434b29", 0x9a434b29); // todo: find real name
	RIVET_DEFINE_FAKE_TYPE_ID(model_df9fdf12, "Model Unknown df9fdf12", 0xdf9fdf12); // todo: find real name
} // namespace rivet::type_id
