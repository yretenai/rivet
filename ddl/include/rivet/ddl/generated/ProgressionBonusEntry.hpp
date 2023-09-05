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

#include <rivet/ddl/generated/enums/x3f2aac2e.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED ProgressionBonusEntry : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "ProgressionBonusEntry";
		constexpr const static rivet::rivet_type_id type_id = 0xbb7fa5d4;

		constexpr const static std::string_view Variable_type_name = "Variable";
		constexpr const static rivet::rivet_type_id Variable_type_id = 0x364c3afd;
		constexpr const static std::string_view MidEarlyStartMission_type_name = "MidEarlyStartMission";
		constexpr const static rivet::rivet_type_id MidEarlyStartMission_type_id = 0xec2613b0;
		constexpr const static std::string_view MidEarlyStartObjective_type_name = "MidEarlyStartObjective";
		constexpr const static rivet::rivet_type_id MidEarlyStartObjective_type_id = 0xb8749a16;
		constexpr const static std::string_view MidEarlyValue_type_name = "MidEarlyValue";
		constexpr const static rivet::rivet_type_id MidEarlyValue_type_id = 0x8b75984f;
		constexpr const static std::string_view MidLateStartMission_type_name = "MidLateStartMission";
		constexpr const static rivet::rivet_type_id MidLateStartMission_type_id = 0x93b3d449;
		constexpr const static std::string_view MidLateStartObjective_type_name = "MidLateStartObjective";
		constexpr const static rivet::rivet_type_id MidLateStartObjective_type_id = 0x780ae864;
		constexpr const static std::string_view MidLateValue_type_name = "MidLateValue";
		constexpr const static rivet::rivet_type_id MidLateValue_type_id = 0x835e2574;
		constexpr const static std::string_view LateStartMission_type_name = "LateStartMission";
		constexpr const static rivet::rivet_type_id LateStartMission_type_id = 0x27c883e6;
		constexpr const static std::string_view LateStartObjective_type_name = "LateStartObjective";
		constexpr const static rivet::rivet_type_id LateStartObjective_type_id = 0xa49a386e;
		constexpr const static std::string_view LateValue_type_name = "LateValue";
		constexpr const static rivet::rivet_type_id LateValue_type_id = 0x9868b3cb;
		constexpr const static std::string_view EasyMultiplier_type_name = "EasyMultiplier";
		constexpr const static rivet::rivet_type_id EasyMultiplier_type_id = 0x860e9773;
		constexpr const static std::string_view MediumMultiplier_type_name = "MediumMultiplier";
		constexpr const static rivet::rivet_type_id MediumMultiplier_type_id = 0xdff2bb81;
		constexpr const static std::string_view HardMultiplier_type_name = "HardMultiplier";
		constexpr const static rivet::rivet_type_id HardMultiplier_type_id = 0xcf33228b;
		constexpr const static std::string_view HardestMultiplier_type_name = "HardestMultiplier";
		constexpr const static rivet::rivet_type_id HardestMultiplier_type_id = 0xbf016237;
		constexpr const static std::string_view ThreeDeathsMultiplier_type_name = "ThreeDeathsMultiplier";
		constexpr const static rivet::rivet_type_id ThreeDeathsMultiplier_type_id = 0x79745c95;
		constexpr const static std::string_view FiveDeathsMultiplier_type_name = "FiveDeathsMultiplier";
		constexpr const static rivet::rivet_type_id FiveDeathsMultiplier_type_id = 0xd742e16f;
		constexpr const static std::string_view ChallengeModeMultiplier_type_name = "ChallengeModeMultiplier";
		constexpr const static rivet::rivet_type_id ChallengeModeMultiplier_type_id = 0x172b41fd; 

		explicit ProgressionBonusEntry() = default;
		explicit ProgressionBonusEntry([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x3f2aac2e Variable {};
		std::string_view MidEarlyStartMission {};
		std::string_view MidEarlyStartObjective {};
		float MidEarlyValue {};
		std::string_view MidLateStartMission {};
		std::string_view MidLateStartObjective {};
		float MidLateValue {};
		std::string_view LateStartMission {};
		std::string_view LateStartObjective {};
		float LateValue {};
		float EasyMultiplier {};
		float MediumMultiplier {};
		float HardMultiplier {};
		float HardestMultiplier {};
		float ThreeDeathsMultiplier {};
		float FiveDeathsMultiplier {};
		float ChallengeModeMultiplier {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ProgressionBonusEntry>;
	};
} // namespace rivet::ddl::generated

// clang-format on
