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
	struct VolumetricCloudsDef;
	struct AASettingsDef;
	struct AOSettingsDef;
	struct CameraClipDef;
	struct LightShaftsSettingsDef;
	struct ScatteringSettingsDef;
	struct FilmGrainSettingsDef;
	struct VaultMetaData;
	struct ProjectCustomDef;
	struct SkySettingsDef;
	struct OceanDef;
	struct AssetSwap;
	struct EnvLightingDef;
	struct WeatherDef;
	struct VignetteSettingsDef;
	struct ToneMapSettingsDef;
	struct BloomSettingsDef;
	struct FogSettingsDef;
	struct ColorCorrectionSettingsDef;
	struct ChromaticAbSettingsDef;
	struct SSRSettingsDef;
	struct MotionBlurSettingsDef;
	struct VolumetricFogSettingsDef;
	struct DepthOfFieldSettingsDef; 

	struct RIVET_DDL_SHARED AtmosphereDef : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "AtmosphereDef";
		constexpr static rivet::rivet_type_id type_id = 0xbeb4a163;

		constexpr static std::string_view VaultMetaData_type_name = "VaultMetaData";
		constexpr static rivet::rivet_type_id VaultMetaData_type_id = 0x37889aa;
		constexpr static std::string_view IconPath_type_name = "IconPath";
		constexpr static rivet::rivet_type_id IconPath_type_id = 0xbf5b007f;
		constexpr static std::string_view PreviewModel_type_name = "PreviewModel";
		constexpr static rivet::rivet_type_id PreviewModel_type_id = 0x5e53ae29;
		constexpr static std::string_view LightGridAtmosphere_type_name = "LightGridAtmosphere";
		constexpr static rivet::rivet_type_id LightGridAtmosphere_type_id = 0xe9cb7d44;
		constexpr static std::string_view LightGridSharedDir_type_name = "LightGridSharedDir";
		constexpr static rivet::rivet_type_id LightGridSharedDir_type_id = 0xd42b16a3;
		constexpr static std::string_view LightGridSharedFilter_type_name = "LightGridSharedFilter";
		constexpr static rivet::rivet_type_id LightGridSharedFilter_type_id = 0x636d61a3;
		constexpr static std::string_view SkySettings_type_name = "SkySettings";
		constexpr static rivet::rivet_type_id SkySettings_type_id = 0x8d8d4336;
		constexpr static std::string_view AssetSwap_type_name = "AssetSwap";
		constexpr static rivet::rivet_type_id AssetSwap_type_id = 0x203d6f25;
		constexpr static std::string_view EnvLighting_type_name = "EnvLighting";
		constexpr static rivet::rivet_type_id EnvLighting_type_id = 0xdc13fc9d;
		constexpr static std::string_view ToneMapSettings_type_name = "ToneMapSettings";
		constexpr static rivet::rivet_type_id ToneMapSettings_type_id = 0x6cfe7f05;
		constexpr static std::string_view BloomSettings_type_name = "BloomSettings";
		constexpr static rivet::rivet_type_id BloomSettings_type_id = 0x4407ac81;
		constexpr static std::string_view ColorCorrectionSettings_type_name = "ColorCorrectionSettings";
		constexpr static rivet::rivet_type_id ColorCorrectionSettings_type_id = 0xc2a05771;
		constexpr static std::string_view VignetteSettings_type_name = "VignetteSettings";
		constexpr static rivet::rivet_type_id VignetteSettings_type_id = 0x66400d79;
		constexpr static std::string_view ChromaticAbSettings_type_name = "ChromaticAbSettings";
		constexpr static rivet::rivet_type_id ChromaticAbSettings_type_id = 0xa188c9bc;
		constexpr static std::string_view FogSettings_type_name = "FogSettings";
		constexpr static rivet::rivet_type_id FogSettings_type_id = 0x3fc51226;
		constexpr static std::string_view VolumetricFogSettings_type_name = "VolumetricFogSettings";
		constexpr static rivet::rivet_type_id VolumetricFogSettings_type_id = 0xdf539bfe;
		constexpr static std::string_view MotionBlurSettings_type_name = "MotionBlurSettings";
		constexpr static rivet::rivet_type_id MotionBlurSettings_type_id = 0x46a5d6c6;
		constexpr static std::string_view DepthOfFieldSettings_type_name = "DepthOfFieldSettings";
		constexpr static rivet::rivet_type_id DepthOfFieldSettings_type_id = 0x581fd910;
		constexpr static std::string_view FilmGrainSettings_type_name = "FilmGrainSettings";
		constexpr static rivet::rivet_type_id FilmGrainSettings_type_id = 0xd5580d47;
		constexpr static std::string_view ScatteringSettings_type_name = "ScatteringSettings";
		constexpr static rivet::rivet_type_id ScatteringSettings_type_id = 0x5205a188;
		constexpr static std::string_view LightShaftsSettings_type_name = "LightShaftsSettings";
		constexpr static rivet::rivet_type_id LightShaftsSettings_type_id = 0x76cb6fd;
		constexpr static std::string_view ClipSettings_type_name = "ClipSettings";
		constexpr static rivet::rivet_type_id ClipSettings_type_id = 0x1919b57d;
		constexpr static std::string_view ProjectCustomData_type_name = "ProjectCustomData";
		constexpr static rivet::rivet_type_id ProjectCustomData_type_id = 0xb7c97c3a;
		constexpr static std::string_view AOSettings_type_name = "AOSettings";
		constexpr static rivet::rivet_type_id AOSettings_type_id = 0x7ea3882d;
		constexpr static std::string_view AASettings_type_name = "AASettings";
		constexpr static rivet::rivet_type_id AASettings_type_id = 0xb66153bf;
		constexpr static std::string_view SSRSettings_type_name = "SSRSettings";
		constexpr static rivet::rivet_type_id SSRSettings_type_id = 0xf60d9d84;
		constexpr static std::string_view Weather_type_name = "Weather";
		constexpr static rivet::rivet_type_id Weather_type_id = 0x4d3ab056;
		constexpr static std::string_view Ocean_type_name = "Ocean";
		constexpr static rivet::rivet_type_id Ocean_type_id = 0x75709cdf;
		constexpr static std::string_view VolumetricClouds_type_name = "VolumetricClouds";
		constexpr static rivet::rivet_type_id VolumetricClouds_type_id = 0xd99e6805; 

		explicit AtmosphereDef() = default;
		explicit AtmosphereDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::VaultMetaData> VaultMetaData {};
		std::string_view IconPath {};
		std::string_view PreviewModel {};
		std::string_view LightGridAtmosphere {};
		std::string_view LightGridSharedDir {};
		std::string_view LightGridSharedFilter {};
		std::shared_ptr<rivet::ddl::generated::SkySettingsDef> SkySettings {};
		std::shared_ptr<rivet::ddl::generated::AssetSwap> AssetSwap {};
		std::shared_ptr<rivet::ddl::generated::EnvLightingDef> EnvLighting {};
		std::shared_ptr<rivet::ddl::generated::ToneMapSettingsDef> ToneMapSettings {};
		std::shared_ptr<rivet::ddl::generated::BloomSettingsDef> BloomSettings {};
		std::shared_ptr<rivet::ddl::generated::ColorCorrectionSettingsDef> ColorCorrectionSettings {};
		std::shared_ptr<rivet::ddl::generated::VignetteSettingsDef> VignetteSettings {};
		std::shared_ptr<rivet::ddl::generated::ChromaticAbSettingsDef> ChromaticAbSettings {};
		std::shared_ptr<rivet::ddl::generated::FogSettingsDef> FogSettings {};
		std::shared_ptr<rivet::ddl::generated::VolumetricFogSettingsDef> VolumetricFogSettings {};
		std::shared_ptr<rivet::ddl::generated::MotionBlurSettingsDef> MotionBlurSettings {};
		std::shared_ptr<rivet::ddl::generated::DepthOfFieldSettingsDef> DepthOfFieldSettings {};
		std::shared_ptr<rivet::ddl::generated::FilmGrainSettingsDef> FilmGrainSettings {};
		std::shared_ptr<rivet::ddl::generated::ScatteringSettingsDef> ScatteringSettings {};
		std::shared_ptr<rivet::ddl::generated::LightShaftsSettingsDef> LightShaftsSettings {};
		std::shared_ptr<rivet::ddl::generated::CameraClipDef> ClipSettings {};
		std::shared_ptr<rivet::ddl::generated::ProjectCustomDef> ProjectCustomData {};
		std::shared_ptr<rivet::ddl::generated::AOSettingsDef> AOSettings {};
		std::shared_ptr<rivet::ddl::generated::AASettingsDef> AASettings {};
		std::shared_ptr<rivet::ddl::generated::SSRSettingsDef> SSRSettings {};
		std::shared_ptr<rivet::ddl::generated::WeatherDef> Weather {};
		std::shared_ptr<rivet::ddl::generated::OceanDef> Ocean {};
		std::shared_ptr<rivet::ddl::generated::VolumetricCloudsDef> VolumetricClouds {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AtmosphereDef>;
	};
} // namespace rivet::ddl::generated

// clang-format on