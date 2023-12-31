// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

// clang-format off

#include <cstdint>
#include <memory>
#include <string_view>
#include <vector>

#include <rivet/hash/type_id.hpp>
#include <rivet/rivet_array.hpp>
#include <rivet/rivet_keywords.hpp>
#include <rivet/structures/rivet_serialization.hpp>

namespace rivet::ddl::generated {
	struct DDLVector3; 

	struct RIVET_DDL_SHARED EnvLightingDef : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "EnvLightingDef";
		constexpr static rivet::rivet_type_id type_id = 0x2b4ba83;

		constexpr static std::string_view Enabled_type_name = "Enabled";
		constexpr static rivet::rivet_type_id Enabled_type_id = 0x5113d8bc;
		constexpr static std::string_view KeyLightColor_type_name = "KeyLightColor";
		constexpr static rivet::rivet_type_id KeyLightColor_type_id = 0xb9e1252;
		constexpr static std::string_view KeyLightIntensity_type_name = "KeyLightIntensity";
		constexpr static rivet::rivet_type_id KeyLightIntensity_type_id = 0x538e45d0;
		constexpr static std::string_view KeyLightAzimuth_type_name = "KeyLightAzimuth";
		constexpr static rivet::rivet_type_id KeyLightAzimuth_type_id = 0xd02cc3e7;
		constexpr static std::string_view KeyLightElevation_type_name = "KeyLightElevation";
		constexpr static rivet::rivet_type_id KeyLightElevation_type_id = 0x8616b7c3;
		constexpr static std::string_view SunDiskOffsetAzimuth_type_name = "SunDiskOffsetAzimuth";
		constexpr static rivet::rivet_type_id SunDiskOffsetAzimuth_type_id = 0x67fec9c0;
		constexpr static std::string_view SunDiskOffsetElevation_type_name = "SunDiskOffsetElevation";
		constexpr static rivet::rivet_type_id SunDiskOffsetElevation_type_id = 0xbc065b6a;
		constexpr static std::string_view ShadowDrawDist_type_name = "ShadowDrawDist";
		constexpr static rivet::rivet_type_id ShadowDrawDist_type_id = 0xf8b96e12;
		constexpr static std::string_view CsmLodCount_type_name = "CsmLodCount";
		constexpr static rivet::rivet_type_id CsmLodCount_type_id = 0x8dac72ff;
		constexpr static std::string_view FarLodCaching_type_name = "FarLodCaching";
		constexpr static rivet::rivet_type_id FarLodCaching_type_id = 0x21ba4ecc;
		constexpr static std::string_view FarLodTransitionDist_type_name = "FarLodTransitionDist";
		constexpr static rivet::rivet_type_id FarLodTransitionDist_type_id = 0x1577d909;
		constexpr static std::string_view FarLodPerfModeOpts_type_name = "FarLodPerfModeOpts";
		constexpr static rivet::rivet_type_id FarLodPerfModeOpts_type_id = 0xc15d68ff;
		constexpr static std::string_view TimeOfDay_type_name = "TimeOfDay";
		constexpr static rivet::rivet_type_id TimeOfDay_type_id = 0x5205c002;
		constexpr static std::string_view SunDiameter_type_name = "SunDiameter";
		constexpr static rivet::rivet_type_id SunDiameter_type_id = 0xed282242;
		constexpr static std::string_view FillLightCubeMap_type_name = "FillLightCubeMap";
		constexpr static rivet::rivet_type_id FillLightCubeMap_type_id = 0xb6836f0b;
		constexpr static std::string_view LightGridIntensity_type_name = "LightGridIntensity";
		constexpr static rivet::rivet_type_id LightGridIntensity_type_id = 0xe2aa6891;
		constexpr static std::string_view LightGridSkyMultiplier_type_name = "LightGridSkyMultiplier";
		constexpr static rivet::rivet_type_id LightGridSkyMultiplier_type_id = 0x77193456;
		constexpr static std::string_view LightGridAORadius_type_name = "LightGridAORadius";
		constexpr static rivet::rivet_type_id LightGridAORadius_type_id = 0x8a57e2fa;
		constexpr static std::string_view LightGridModConfig_type_name = "LightGridModConfig";
		constexpr static rivet::rivet_type_id LightGridModConfig_type_id = 0x54ebf356;
		constexpr static std::string_view KeylightMaterial_type_name = "KeylightMaterial";
		constexpr static rivet::rivet_type_id KeylightMaterial_type_id = 0x2c6109b2;
		constexpr static std::string_view KeylightMaterialScale_type_name = "KeylightMaterialScale";
		constexpr static rivet::rivet_type_id KeylightMaterialScale_type_id = 0x8c8e23da;
		constexpr static std::string_view CasterRangeLower_type_name = "CasterRangeLower";
		constexpr static rivet::rivet_type_id CasterRangeLower_type_id = 0x90ca59ee;
		constexpr static std::string_view CasterRangeUpper_type_name = "CasterRangeUpper";
		constexpr static rivet::rivet_type_id CasterRangeUpper_type_id = 0xf00ffd51;
		constexpr static std::string_view VFXLightMultiplier_type_name = "VFXLightMultiplier";
		constexpr static rivet::rivet_type_id VFXLightMultiplier_type_id = 0xf7964af6;
		constexpr static std::string_view AmbientFillColor_type_name = "AmbientFillColor";
		constexpr static rivet::rivet_type_id AmbientFillColor_type_id = 0x1d373bc7;
		constexpr static std::string_view AmbientFillIntensity_type_name = "AmbientFillIntensity";
		constexpr static rivet::rivet_type_id AmbientFillIntensity_type_id = 0x659d9bd8; 

		explicit EnvLightingDef() = default;
		explicit EnvLightingDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool Enabled {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> KeyLightColor {};
		float KeyLightIntensity {};
		float KeyLightAzimuth {};
		float KeyLightElevation {};
		float SunDiskOffsetAzimuth {};
		float SunDiskOffsetElevation {};
		float ShadowDrawDist {};
		int8_t CsmLodCount {};
		bool FarLodCaching {};
		float FarLodTransitionDist {};
		bool FarLodPerfModeOpts {};
		float TimeOfDay {};
		float SunDiameter {};
		std::string_view FillLightCubeMap {};
		float LightGridIntensity {};
		float LightGridSkyMultiplier {};
		float LightGridAORadius {};
		std::string_view LightGridModConfig {};
		std::string_view KeylightMaterial {};
		float KeylightMaterialScale {};
		float CasterRangeLower {};
		float CasterRangeUpper {};
		float VFXLightMultiplier {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> AmbientFillColor {};
		float AmbientFillIntensity {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<EnvLightingDef>;
	};
} // namespace rivet::ddl::generated

// clang-format on
