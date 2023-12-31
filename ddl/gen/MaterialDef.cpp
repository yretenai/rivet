// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ShaderSampler.hpp>
#include <rivet/ddl/generated/WaterProperties.hpp>
#include <rivet/ddl/generated/FurProperties.hpp>
#include <rivet/ddl/generated/ShaderConstant.hpp>
#include <rivet/ddl/generated/MaterialAlpha.hpp>
#include <rivet/ddl/generated/MaterialNotes.hpp>
#include <rivet/ddl/generated/PreviewModelContainer.hpp>
#include <rivet/ddl/generated/DDLVector3.hpp>
#include <rivet/ddl/generated/VaultMetaData.hpp> 

#include <rivet/ddl/generated/MaterialDef.hpp>

namespace rivet::ddl::generated {
	MaterialDef::MaterialDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		VaultMetaData = serialized->unwrap_into<rivet::ddl::generated::VaultMetaData>(VaultMetaData_type_id);
		IconPath = serialized->get_string(IconPath_type_id);
		HierarchicalAssetParent = serialized->get_string(HierarchicalAssetParent_type_id);
		ApprovedMaterialGraph = serialized->get_string(ApprovedMaterialGraph_type_id);
		TemplatePath = serialized->get_string(TemplatePath_type_id);
		OverlapType = serialized->get_enum<rivet::ddl::generated::OverlapType>(OverlapType_type_id, rivet::ddl::generated::OverlapType_values);
		MotionBlur = serialized->get_enum<rivet::ddl::generated::MotionBlur>(MotionBlur_type_id, rivet::ddl::generated::MotionBlur_values);
		AVMaterial = serialized->get_string(AVMaterial_type_id);
		AudioMaterial = serialized->get_string(AudioMaterial_type_id);
		BuiltIn = serialized->get_enum<rivet::ddl::generated::x92dd42a2>(BuiltIn_type_id, rivet::ddl::generated::x92dd42a2_values);
		SSReflection = serialized->get_enum<rivet::ddl::generated::x3afd25fe>(SSReflection_type_id, rivet::ddl::generated::x3afd25fe_values);
		LodDist = serialized->get_float(LodDist_type_id);
		DoubleSided = serialized->get_bool(DoubleSided_type_id);
		SkipShadowCast = serialized->get_bool(SkipShadowCast_type_id);
		ShadowCastOnly = serialized->get_bool(ShadowCastOnly_type_id);
		CastOpaqueShadow = serialized->get_bool(CastOpaqueShadow_type_id);
		SkipEmbeddedTest = serialized->get_bool(SkipEmbeddedTest_type_id);
		SkipLightCapture = serialized->get_bool(SkipLightCapture_type_id);
		SkipRayTracedShadows = serialized->get_bool(SkipRayTracedShadows_type_id);
		UseAoOnDecals = serialized->get_bool(UseAoOnDecals_type_id);
		HasAnimatedTexture = serialized->get_bool(HasAnimatedTexture_type_id);
		LensFlareOcclusion = serialized->get_bool(LensFlareOcclusion_type_id);
		SortTriangles = serialized->get_bool(SortTriangles_type_id);
		SkipImpostorPojection = serialized->get_bool(SkipImpostorPojection_type_id);
		VoxelizationOrderBias = serialized->get_int8(VoxelizationOrderBias_type_id);
		WorldMapColor = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(WorldMapColor_type_id);
		ModelSlotExclusion = serialized->get_strings(ModelSlotExclusion_type_id);
		PreviewModel = serialized->unwrap_into<rivet::ddl::generated::PreviewModelContainer>(PreviewModel_type_id);
		Notes = serialized->unwrap_into<rivet::ddl::generated::MaterialNotes>(Notes_type_id);
		AlphaProperties = serialized->unwrap_into<rivet::ddl::generated::MaterialAlpha>(AlphaProperties_type_id);
		FurProperties = serialized->unwrap_into<rivet::ddl::generated::FurProperties>(FurProperties_type_id);
		WaterProperties = serialized->unwrap_into<rivet::ddl::generated::WaterProperties>(WaterProperties_type_id);
		Variations = serialized->unwrap_into_many<rivet::ddl::generated::ShaderConstant>(Variations_type_id);
		Constants = serialized->unwrap_into_many<rivet::ddl::generated::ShaderConstant>(Constants_type_id);
		Textures = serialized->unwrap_into_many<rivet::ddl::generated::ShaderSampler>(Textures_type_id); 
	}

	[[nodiscard]] auto
	MaterialDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MaterialDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MaterialDef> {
		if (incoming_type_id == MaterialDef::type_id) {
			return std::make_shared<MaterialDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
