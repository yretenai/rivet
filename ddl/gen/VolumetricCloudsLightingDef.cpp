// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/VolumetricCloudsLightingDef.hpp>

namespace rivet::ddl::generated {
	VolumetricCloudsLightingDef::VolumetricCloudsLightingDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		CustomColor = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(CustomColor_type_id);
		CustomColorIntensity = serialized->get_float(CustomColorIntensity_type_id);
		CustomColorBlendFactor = serialized->get_float(CustomColorBlendFactor_type_id);
		Contrast = serialized->get_float(Contrast_type_id);
		TransStepSize = serialized->get_float(TransStepSize_type_id);
		BackgroundBlendFactor = serialized->get_float(BackgroundBlendFactor_type_id);
		Precipitation = serialized->get_float(Precipitation_type_id);
		SilverIntensity = serialized->get_float(SilverIntensity_type_id);
		SilverSpread = serialized->get_float(SilverSpread_type_id);
		Eccentricity = serialized->get_float(Eccentricity_type_id);
		CloudBrightness = serialized->get_float(CloudBrightness_type_id);
		FogBlendFactor = serialized->get_float(FogBlendFactor_type_id);
		BackgroundBlendCubemap = serialized->get_string(BackgroundBlendCubemap_type_id);
		LocalLight0_Enabled = serialized->get_bool(LocalLight0_Enabled_type_id);
		LocalLight0_Intensity = serialized->get_float(LocalLight0_Intensity_type_id);
		LocalLight0_Color = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(LocalLight0_Color_type_id);
		LocalLight0_PositionX = serialized->get_float(LocalLight0_PositionX_type_id);
		LocalLight0_PositionY = serialized->get_float(LocalLight0_PositionY_type_id);
		LocalLight0_PositionZ = serialized->get_float(LocalLight0_PositionZ_type_id);
		LocalLight0_AttenRadius = serialized->get_float(LocalLight0_AttenRadius_type_id);
		LocalLight1_Enabled = serialized->get_bool(LocalLight1_Enabled_type_id);
		LocalLight1_Intensity = serialized->get_float(LocalLight1_Intensity_type_id);
		LocalLight1_Color = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(LocalLight1_Color_type_id);
		LocalLight1_PositionX = serialized->get_float(LocalLight1_PositionX_type_id);
		LocalLight1_PositionY = serialized->get_float(LocalLight1_PositionY_type_id);
		LocalLight1_PositionZ = serialized->get_float(LocalLight1_PositionZ_type_id);
		LocalLight1_AttenRadius = serialized->get_float(LocalLight1_AttenRadius_type_id);
		LocalLight2_Enabled = serialized->get_bool(LocalLight2_Enabled_type_id);
		LocalLight2_Intensity = serialized->get_float(LocalLight2_Intensity_type_id);
		LocalLight2_Color = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(LocalLight2_Color_type_id);
		LocalLight2_PositionX = serialized->get_float(LocalLight2_PositionX_type_id);
		LocalLight2_PositionY = serialized->get_float(LocalLight2_PositionY_type_id);
		LocalLight2_PositionZ = serialized->get_float(LocalLight2_PositionZ_type_id);
		LocalLight2_AttenRadius = serialized->get_float(LocalLight2_AttenRadius_type_id);
		LocalLight3_Enabled = serialized->get_bool(LocalLight3_Enabled_type_id);
		LocalLight3_Intensity = serialized->get_float(LocalLight3_Intensity_type_id);
		LocalLight3_Color = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(LocalLight3_Color_type_id);
		LocalLight3_PositionX = serialized->get_float(LocalLight3_PositionX_type_id);
		LocalLight3_PositionY = serialized->get_float(LocalLight3_PositionY_type_id);
		LocalLight3_PositionZ = serialized->get_float(LocalLight3_PositionZ_type_id);
		LocalLight3_AttenRadius = serialized->get_float(LocalLight3_AttenRadius_type_id); 
	}

	[[nodiscard]] auto
	VolumetricCloudsLightingDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VolumetricCloudsLightingDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VolumetricCloudsLightingDef> {
		if (incoming_type_id == VolumetricCloudsLightingDef::type_id) {
			return std::make_shared<VolumetricCloudsLightingDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated