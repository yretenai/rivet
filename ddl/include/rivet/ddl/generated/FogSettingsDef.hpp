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

	struct RIVET_DDL_SHARED FogSettingsDef : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "FogSettingsDef";
		constexpr static rivet::rivet_type_id type_id = 0x64f20212;

		constexpr static std::string_view Enabled_type_name = "Enabled";
		constexpr static rivet::rivet_type_id Enabled_type_id = 0x5113d8bc;
		constexpr static std::string_view ColorMapAsset_type_name = "ColorMapAsset";
		constexpr static rivet::rivet_type_id ColorMapAsset_type_id = 0xecb24e46;
		constexpr static std::string_view AlphaMapAsset_type_name = "AlphaMapAsset";
		constexpr static rivet::rivet_type_id AlphaMapAsset_type_id = 0x280d1a3c;
		constexpr static std::string_view ColorMapDepthRange_type_name = "ColorMapDepthRange";
		constexpr static rivet::rivet_type_id ColorMapDepthRange_type_id = 0xecc34ef;
		constexpr static std::string_view ColorMapDepthScale_type_name = "ColorMapDepthScale";
		constexpr static rivet::rivet_type_id ColorMapDepthScale_type_id = 0x710d4b22;
		constexpr static std::string_view Color_type_name = "Color";
		constexpr static rivet::rivet_type_id Color_type_id = 0x7f058428;
		constexpr static std::string_view LuminanceScale_type_name = "LuminanceScale";
		constexpr static rivet::rivet_type_id LuminanceScale_type_id = 0x57e1ba0a;
		constexpr static std::string_view KeyLightInfluence_type_name = "KeyLightInfluence";
		constexpr static rivet::rivet_type_id KeyLightInfluence_type_id = 0xf24ff973;
		constexpr static std::string_view NearRadius_type_name = "NearRadius";
		constexpr static rivet::rivet_type_id NearRadius_type_id = 0xbc26d8f;
		constexpr static std::string_view Height0_type_name = "Height0";
		constexpr static rivet::rivet_type_id Height0_type_id = 0x657bec6d;
		constexpr static std::string_view Opacity0_type_name = "Opacity0";
		constexpr static rivet::rivet_type_id Opacity0_type_id = 0xaa485b51;
		constexpr static std::string_view Height1_type_name = "Height1";
		constexpr static rivet::rivet_type_id Height1_type_id = 0x127cdcfb;
		constexpr static std::string_view Opacity1_type_name = "Opacity1";
		constexpr static rivet::rivet_type_id Opacity1_type_id = 0xdd4f6bc7;
		constexpr static std::string_view Height2_type_name = "Height2";
		constexpr static rivet::rivet_type_id Height2_type_id = 0x8b758d41;
		constexpr static std::string_view Opacity2_type_name = "Opacity2";
		constexpr static rivet::rivet_type_id Opacity2_type_id = 0x44463a7d;
		constexpr static std::string_view Height3_type_name = "Height3";
		constexpr static rivet::rivet_type_id Height3_type_id = 0xfc72bdd7;
		constexpr static std::string_view Opacity3_type_name = "Opacity3";
		constexpr static rivet::rivet_type_id Opacity3_type_id = 0x33410aeb;
		constexpr static std::string_view Height4_type_name = "Height4";
		constexpr static rivet::rivet_type_id Height4_type_id = 0x62162874;
		constexpr static std::string_view Opacity4_type_name = "Opacity4";
		constexpr static rivet::rivet_type_id Opacity4_type_id = 0xad259f48;
		constexpr static std::string_view RemapStrength_type_name = "RemapStrength";
		constexpr static rivet::rivet_type_id RemapStrength_type_id = 0x457f5d83;
		constexpr static std::string_view RemapKeyOpacity_type_name = "RemapKeyOpacity";
		constexpr static rivet::rivet_type_id RemapKeyOpacity_type_id = 0xa40ba824; 

		explicit FogSettingsDef() = default;
		explicit FogSettingsDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool Enabled {};
		std::string_view ColorMapAsset {};
		std::string_view AlphaMapAsset {};
		float ColorMapDepthRange {};
		float ColorMapDepthScale {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> Color {};
		float LuminanceScale {};
		float KeyLightInfluence {};
		float NearRadius {};
		float Height0 {};
		float Opacity0 {};
		float Height1 {};
		float Opacity1 {};
		float Height2 {};
		float Opacity2 {};
		float Height3 {};
		float Opacity3 {};
		float Height4 {};
		float Opacity4 {};
		float RemapStrength {};
		float RemapKeyOpacity {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FogSettingsDef>;
	};
} // namespace rivet::ddl::generated

// clang-format on
