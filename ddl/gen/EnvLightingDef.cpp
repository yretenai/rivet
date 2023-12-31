// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/EnvLightingDef.hpp>

namespace rivet::ddl::generated {
	EnvLightingDef::EnvLightingDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Enabled = serialized->get_bool(Enabled_type_id);
		KeyLightColor = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(KeyLightColor_type_id);
		KeyLightIntensity = serialized->get_float(KeyLightIntensity_type_id);
		KeyLightAzimuth = serialized->get_float(KeyLightAzimuth_type_id);
		KeyLightElevation = serialized->get_float(KeyLightElevation_type_id);
		SunDiskOffsetAzimuth = serialized->get_float(SunDiskOffsetAzimuth_type_id);
		SunDiskOffsetElevation = serialized->get_float(SunDiskOffsetElevation_type_id);
		ShadowDrawDist = serialized->get_float(ShadowDrawDist_type_id);
		CsmLodCount = serialized->get_int8(CsmLodCount_type_id);
		FarLodCaching = serialized->get_bool(FarLodCaching_type_id);
		FarLodTransitionDist = serialized->get_float(FarLodTransitionDist_type_id);
		FarLodPerfModeOpts = serialized->get_bool(FarLodPerfModeOpts_type_id);
		TimeOfDay = serialized->get_float(TimeOfDay_type_id);
		SunDiameter = serialized->get_float(SunDiameter_type_id);
		FillLightCubeMap = serialized->get_string(FillLightCubeMap_type_id);
		LightGridIntensity = serialized->get_float(LightGridIntensity_type_id);
		LightGridSkyMultiplier = serialized->get_float(LightGridSkyMultiplier_type_id);
		LightGridAORadius = serialized->get_float(LightGridAORadius_type_id);
		LightGridModConfig = serialized->get_string(LightGridModConfig_type_id);
		KeylightMaterial = serialized->get_string(KeylightMaterial_type_id);
		KeylightMaterialScale = serialized->get_float(KeylightMaterialScale_type_id);
		CasterRangeLower = serialized->get_float(CasterRangeLower_type_id);
		CasterRangeUpper = serialized->get_float(CasterRangeUpper_type_id);
		VFXLightMultiplier = serialized->get_float(VFXLightMultiplier_type_id);
		AmbientFillColor = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(AmbientFillColor_type_id);
		AmbientFillIntensity = serialized->get_float(AmbientFillIntensity_type_id); 
	}

	[[nodiscard]] auto
	EnvLightingDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	EnvLightingDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<EnvLightingDef> {
		if (incoming_type_id == EnvLightingDef::type_id) {
			return std::make_shared<EnvLightingDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
