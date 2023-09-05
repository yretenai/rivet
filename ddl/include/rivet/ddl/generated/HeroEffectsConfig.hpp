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
	struct WaterImpulseGeneratorPrius;
	struct HeroSpeedVFXKeyFrameModifierData;
	struct HeroWetnessConfig;
	struct HeroWaterSplashSpeedData;
	struct HeroMaterialGlobal;
	struct HeroForceFieldSource;
	struct HeroDecalShadowData; 

	struct RIVET_DDL_SHARED HeroEffectsConfig : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "HeroEffectsConfig";
		constexpr const static rivet::rivet_type_id type_id = 0x3844d7d3;

		constexpr const static std::string_view WetToDryTime_type_name = "WetToDryTime";
		constexpr const static rivet::rivet_type_id WetToDryTime_type_id = 0xfc53bc18;
		constexpr const static std::string_view InAirHeight_type_name = "InAirHeight";
		constexpr const static rivet::rivet_type_id InAirHeight_type_id = 0x3c755005;
		constexpr const static std::string_view InWaterDepth_type_name = "InWaterDepth";
		constexpr const static rivet::rivet_type_id InWaterDepth_type_id = 0x55ec890c;
		constexpr const static std::string_view SpeedVFXKeyFrameModifiers_type_name = "SpeedVFXKeyFrameModifiers";
		constexpr const static rivet::rivet_type_id SpeedVFXKeyFrameModifiers_type_id = 0xde4cfb07;
		constexpr const static std::string_view WaterSplashSpeeds_type_name = "WaterSplashSpeeds";
		constexpr const static rivet::rivet_type_id WaterSplashSpeeds_type_id = 0x5b02c8bf;
		constexpr const static std::string_view MaterialGlobals_type_name = "MaterialGlobals";
		constexpr const static rivet::rivet_type_id MaterialGlobals_type_id = 0xcb009db3;
		constexpr const static std::string_view ForceFieldSources_type_name = "ForceFieldSources";
		constexpr const static rivet::rivet_type_id ForceFieldSources_type_id = 0x37b5c3a;
		constexpr const static std::string_view WaterImpulseGeneratorPrius_type_name = "WaterImpulseGeneratorPrius";
		constexpr const static rivet::rivet_type_id WaterImpulseGeneratorPrius_type_id = 0xaa4bf9ee;
		constexpr const static std::string_view DecalShadow_type_name = "DecalShadow";
		constexpr const static rivet::rivet_type_id DecalShadow_type_id = 0xc739d7d4;
		constexpr const static std::string_view WetnessConfig_type_name = "WetnessConfig";
		constexpr const static rivet::rivet_type_id WetnessConfig_type_id = 0x4de1c3a6; 

		explicit HeroEffectsConfig() = default;
		explicit HeroEffectsConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float WetToDryTime {};
		float InAirHeight {};
		float InWaterDepth {};
		std::vector<std::shared_ptr<rivet::ddl::generated::HeroSpeedVFXKeyFrameModifierData>> SpeedVFXKeyFrameModifiers {};
		std::shared_ptr<rivet::ddl::generated::HeroWaterSplashSpeedData> WaterSplashSpeeds {};
		std::vector<std::shared_ptr<rivet::ddl::generated::HeroMaterialGlobal>> MaterialGlobals {};
		std::vector<std::shared_ptr<rivet::ddl::generated::HeroForceFieldSource>> ForceFieldSources {};
		std::shared_ptr<rivet::ddl::generated::WaterImpulseGeneratorPrius> WaterImpulseGeneratorPrius {};
		std::shared_ptr<rivet::ddl::generated::HeroDecalShadowData> DecalShadow {};
		std::shared_ptr<rivet::ddl::generated::HeroWetnessConfig> WetnessConfig {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroEffectsConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
