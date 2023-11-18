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

#include <rivet/ddl/generated/bitsets/xf32dacf0.hpp>
#include <rivet/ddl/generated/ConfigBase.hpp> 

namespace rivet::ddl::generated {
	struct ClankPuzzleTargetColorData;
	struct ClankPuzzleTimeData; 

	struct RIVET_DDL_SHARED ClankPuzzleTargetBaseConfig : ConfigBase {
		constexpr static std::string_view type_name = "ClankPuzzleTargetBaseConfig";
		constexpr static rivet::rivet_type_id type_id = 0x945c4c28;

		constexpr static std::string_view TargetType_type_name = "TargetType";
		constexpr static rivet::rivet_type_id TargetType_type_id = 0x75a19d21;
		constexpr static std::string_view CanAbsorb_type_name = "CanAbsorb";
		constexpr static rivet::rivet_type_id CanAbsorb_type_id = 0x6590c4d5;
		constexpr static std::string_view SpeedUpTime_type_name = "SpeedUpTime";
		constexpr static rivet::rivet_type_id SpeedUpTime_type_id = 0xcda7c273;
		constexpr static std::string_view SlowDownTime_type_name = "SlowDownTime";
		constexpr static rivet::rivet_type_id SlowDownTime_type_id = 0xb81b4dc;
		constexpr static std::string_view GravityTime_type_name = "GravityTime";
		constexpr static rivet::rivet_type_id GravityTime_type_id = 0xd89217e1;
		constexpr static std::string_view EnergyTime_type_name = "EnergyTime";
		constexpr static rivet::rivet_type_id EnergyTime_type_id = 0x77fe99ab;
		constexpr static std::string_view SpeedUpMaterial_type_name = "SpeedUpMaterial";
		constexpr static rivet::rivet_type_id SpeedUpMaterial_type_id = 0x25220166;
		constexpr static std::string_view SlowDownMaterial_type_name = "SlowDownMaterial";
		constexpr static rivet::rivet_type_id SlowDownMaterial_type_id = 0xd18ff876;
		constexpr static std::string_view GravityMaterial_type_name = "GravityMaterial";
		constexpr static rivet::rivet_type_id GravityMaterial_type_id = 0x76c5f9cf;
		constexpr static std::string_view EnergyMaterial_type_name = "EnergyMaterial";
		constexpr static rivet::rivet_type_id EnergyMaterial_type_id = 0xe6e6edce;
		constexpr static std::string_view MaterialGraphColoring_type_name = "MaterialGraphColoring";
		constexpr static rivet::rivet_type_id MaterialGraphColoring_type_id = 0x5a718a26; 

		explicit ClankPuzzleTargetBaseConfig() = default;
		explicit ClankPuzzleTargetBaseConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::xf32dacf0 TargetType {};
		bool CanAbsorb {};
		std::shared_ptr<rivet::ddl::generated::ClankPuzzleTimeData> SpeedUpTime {};
		std::shared_ptr<rivet::ddl::generated::ClankPuzzleTimeData> SlowDownTime {};
		std::shared_ptr<rivet::ddl::generated::ClankPuzzleTimeData> GravityTime {};
		std::shared_ptr<rivet::ddl::generated::ClankPuzzleTimeData> EnergyTime {};
		std::string_view SpeedUpMaterial {};
		std::string_view SlowDownMaterial {};
		std::string_view GravityMaterial {};
		std::string_view EnergyMaterial {};
		std::shared_ptr<rivet::ddl::generated::ClankPuzzleTargetColorData> MaterialGraphColoring {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ClankPuzzleTargetBaseConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
