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

#include <rivet/ddl/generated/enums/VolumeNodeShape.hpp> 

namespace rivet::ddl::generated {
	struct LightingConditionBitSet;
	struct WaterDef;
	struct AASettingsDef;
	struct AOSettingsDef;
	struct VolumetricCloudsDef;
	struct VolumeCameraClipDef;
	struct LightShaftsSettingsDef;
	struct FilmGrainSettingsDef;
	struct VaultMetaData;
	struct TranslucentShadowDef;
	struct VolumeNodeUsage;
	struct ProjectCustomDef;
	struct SkySettingsDef;
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

	struct RIVET_DDL_SHARED VolumeDef : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "VolumeDef";
		constexpr static rivet::rivet_type_id type_id = 0x5fedf357;

		constexpr static std::string_view VaultMetaData_type_name = "VaultMetaData";
		constexpr static rivet::rivet_type_id VaultMetaData_type_id = 0x37889aa;
		constexpr static std::string_view IconPath_type_name = "IconPath";
		constexpr static rivet::rivet_type_id IconPath_type_id = 0xbf5b007f;
		constexpr static std::string_view VolumeType_type_name = "VolumeType";
		constexpr static rivet::rivet_type_id VolumeType_type_id = 0x9135042f;
		constexpr static std::string_view CapsuleEndcapRadius_type_name = "CapsuleEndcapRadius";
		constexpr static rivet::rivet_type_id CapsuleEndcapRadius_type_id = 0xf5b8509e;
		constexpr static std::string_view Usage_type_name = "Usage";
		constexpr static rivet::rivet_type_id Usage_type_id = 0xc9b892b1;
		constexpr static std::string_view PostFxActive_type_name = "PostFxActive";
		constexpr static rivet::rivet_type_id PostFxActive_type_id = 0x2209bc16;
		constexpr static std::string_view PostEffectAtmosphere_type_name = "PostEffectAtmosphere";
		constexpr static rivet::rivet_type_id PostEffectAtmosphere_type_id = 0xb7c70257;
		constexpr static std::string_view PostDistanceFactor_type_name = "PostDistanceFactor";
		constexpr static rivet::rivet_type_id PostDistanceFactor_type_id = 0x7bb24b09;
		constexpr static std::string_view PostPriority_type_name = "PostPriority";
		constexpr static rivet::rivet_type_id PostPriority_type_id = 0x11fed0bf;
		constexpr static std::string_view PostInfluence_type_name = "PostInfluence";
		constexpr static rivet::rivet_type_id PostInfluence_type_id = 0x64d6a8c6;
		constexpr static std::string_view SkipLightCapture_type_name = "SkipLightCapture";
		constexpr static rivet::rivet_type_id SkipLightCapture_type_id = 0x64ede99a;
		constexpr static std::string_view OnlyLightCapture_type_name = "OnlyLightCapture";
		constexpr static rivet::rivet_type_id OnlyLightCapture_type_id = 0x1559dec2;
		constexpr static std::string_view SkySettings_type_name = "SkySettings";
		constexpr static rivet::rivet_type_id SkySettings_type_id = 0x8d8d4336;
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
		constexpr static std::string_view VolumetricCloudsSettings_type_name = "VolumetricCloudsSettings";
		constexpr static rivet::rivet_type_id VolumetricCloudsSettings_type_id = 0x2a217b07;
		constexpr static std::string_view Water_type_name = "Water";
		constexpr static rivet::rivet_type_id Water_type_id = 0xe260d81b;
		constexpr static std::string_view TranslucentShadow_type_name = "TranslucentShadow";
		constexpr static rivet::rivet_type_id TranslucentShadow_type_id = 0xe4583bfc;
		constexpr static std::string_view LightingConditions_type_name = "LightingConditions";
		constexpr static rivet::rivet_type_id LightingConditions_type_id = 0xfda14c35; 

		explicit VolumeDef() = default;
		explicit VolumeDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::VaultMetaData> VaultMetaData {};
		std::string_view IconPath {};
		rivet::ddl::generated::VolumeNodeShape VolumeType {};
		float CapsuleEndcapRadius {};
		std::shared_ptr<rivet::ddl::generated::VolumeNodeUsage> Usage {};
		bool PostFxActive {};
		std::string_view PostEffectAtmosphere {};
		float PostDistanceFactor {};
		int32_t PostPriority {};
		float PostInfluence {};
		bool SkipLightCapture {};
		bool OnlyLightCapture {};
		std::shared_ptr<rivet::ddl::generated::SkySettingsDef> SkySettings {};
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
		std::shared_ptr<rivet::ddl::generated::LightShaftsSettingsDef> LightShaftsSettings {};
		std::shared_ptr<rivet::ddl::generated::VolumeCameraClipDef> ClipSettings {};
		std::shared_ptr<rivet::ddl::generated::ProjectCustomDef> ProjectCustomData {};
		std::shared_ptr<rivet::ddl::generated::AOSettingsDef> AOSettings {};
		std::shared_ptr<rivet::ddl::generated::AASettingsDef> AASettings {};
		std::shared_ptr<rivet::ddl::generated::SSRSettingsDef> SSRSettings {};
		std::shared_ptr<rivet::ddl::generated::WeatherDef> Weather {};
		std::shared_ptr<rivet::ddl::generated::VolumetricCloudsDef> VolumetricCloudsSettings {};
		std::shared_ptr<rivet::ddl::generated::WaterDef> Water {};
		std::shared_ptr<rivet::ddl::generated::TranslucentShadowDef> TranslucentShadow {};
		std::shared_ptr<rivet::ddl::generated::LightingConditionBitSet> LightingConditions {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VolumeDef>;
	};
} // namespace rivet::ddl::generated

// clang-format on