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
	struct RIVET_DDL_SHARED ViewFlagsEngineItem : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "ViewFlagsEngineItem";
		constexpr static rivet::rivet_type_id type_id = 0x614e4a06;

		constexpr static std::string_view WorldAxesEnabled_type_name = "WorldAxesEnabled";
		constexpr static rivet::rivet_type_id WorldAxesEnabled_type_id = 0xe9dd3200;
		constexpr static std::string_view WorldGridEnabled_type_name = "WorldGridEnabled";
		constexpr static rivet::rivet_type_id WorldGridEnabled_type_id = 0x8600a3ac;
		constexpr static std::string_view KeyLightArrowEnabled_type_name = "KeyLightArrowEnabled";
		constexpr static rivet::rivet_type_id KeyLightArrowEnabled_type_id = 0xb995b074;
		constexpr static std::string_view UVMapEnabled_type_name = "UVMapEnabled";
		constexpr static rivet::rivet_type_id UVMapEnabled_type_id = 0x1a9dca6d;
		constexpr static std::string_view MotionBlurEnabled_type_name = "MotionBlurEnabled";
		constexpr static rivet::rivet_type_id MotionBlurEnabled_type_id = 0x3e5bcc0;
		constexpr static std::string_view TemporalAntiAliasingEnabled_type_name = "TemporalAntiAliasingEnabled";
		constexpr static rivet::rivet_type_id TemporalAntiAliasingEnabled_type_id = 0xd58f18d9;
		constexpr static std::string_view ScreenSpaceReflectionEnabled_type_name = "ScreenSpaceReflectionEnabled";
		constexpr static rivet::rivet_type_id ScreenSpaceReflectionEnabled_type_id = 0xccc42427;
		constexpr static std::string_view ScreenSpaceAmbientOcclusionEnabled_type_name = "ScreenSpaceAmbientOcclusionEnabled";
		constexpr static rivet::rivet_type_id ScreenSpaceAmbientOcclusionEnabled_type_id = 0xa3f27836;
		constexpr static std::string_view ColorCorrectionEnabled_type_name = "ColorCorrectionEnabled";
		constexpr static rivet::rivet_type_id ColorCorrectionEnabled_type_id = 0xb825d5d3;
		constexpr static std::string_view DepthOfFieldEnabled_type_name = "DepthOfFieldEnabled";
		constexpr static rivet::rivet_type_id DepthOfFieldEnabled_type_id = 0xb8180252;
		constexpr static std::string_view DepthOfFieldMarkerEnabled_type_name = "DepthOfFieldMarkerEnabled";
		constexpr static rivet::rivet_type_id DepthOfFieldMarkerEnabled_type_id = 0x21fc54a1;
		constexpr static std::string_view ChromaticAberrationEnabled_type_name = "ChromaticAberrationEnabled";
		constexpr static rivet::rivet_type_id ChromaticAberrationEnabled_type_id = 0xa5ff0014;
		constexpr static std::string_view WeatherEffectsEnabled_type_name = "WeatherEffectsEnabled";
		constexpr static rivet::rivet_type_id WeatherEffectsEnabled_type_id = 0xa1904bac;
		constexpr static std::string_view PostProcessEnabled_type_name = "PostProcessEnabled";
		constexpr static rivet::rivet_type_id PostProcessEnabled_type_id = 0x7192d2f4;
		constexpr static std::string_view ScreenFadeEnabled_type_name = "ScreenFadeEnabled";
		constexpr static rivet::rivet_type_id ScreenFadeEnabled_type_id = 0x4800bb28; 

		explicit ViewFlagsEngineItem() = default;
		explicit ViewFlagsEngineItem([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool WorldAxesEnabled {};
		bool WorldGridEnabled {};
		bool KeyLightArrowEnabled {};
		bool UVMapEnabled {};
		bool MotionBlurEnabled {};
		bool TemporalAntiAliasingEnabled {};
		bool ScreenSpaceReflectionEnabled {};
		bool ScreenSpaceAmbientOcclusionEnabled {};
		bool ColorCorrectionEnabled {};
		bool DepthOfFieldEnabled {};
		bool DepthOfFieldMarkerEnabled {};
		bool ChromaticAberrationEnabled {};
		bool WeatherEffectsEnabled {};
		bool PostProcessEnabled {};
		bool ScreenFadeEnabled {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ViewFlagsEngineItem>;
	};
} // namespace rivet::ddl::generated

// clang-format on
