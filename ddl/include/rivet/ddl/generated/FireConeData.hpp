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
	struct RIVET_DDL_SHARED FireConeData : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "FireConeData";
		constexpr static rivet::rivet_type_id type_id = 0x25a0e2a0;

		constexpr static std::string_view SizeMin_type_name = "SizeMin";
		constexpr static rivet::rivet_type_id SizeMin_type_id = 0xb710551f;
		constexpr static std::string_view SizeMax_type_name = "SizeMax";
		constexpr static rivet::rivet_type_id SizeMax_type_id = 0x8b1d6a46;
		constexpr static std::string_view MinShotsToBump_type_name = "MinShotsToBump";
		constexpr static rivet::rivet_type_id MinShotsToBump_type_id = 0xcae1081f;
		constexpr static std::string_view ShotBumpAngle_type_name = "ShotBumpAngle";
		constexpr static rivet::rivet_type_id ShotBumpAngle_type_id = 0xd716e036;
		constexpr static std::string_view ShotBumpSpeed_type_name = "ShotBumpSpeed";
		constexpr static rivet::rivet_type_id ShotBumpSpeed_type_id = 0xd8b15bc9;
		constexpr static std::string_view ShotBumpAccel_type_name = "ShotBumpAccel";
		constexpr static rivet::rivet_type_id ShotBumpAccel_type_id = 0x8a6b93da;
		constexpr static std::string_view ShotBumpDecel_type_name = "ShotBumpDecel";
		constexpr static rivet::rivet_type_id ShotBumpDecel_type_id = 0x67e04376;
		constexpr static std::string_view SettleDelay_type_name = "SettleDelay";
		constexpr static rivet::rivet_type_id SettleDelay_type_id = 0x9256f6b8;
		constexpr static std::string_view SettleSpeed_type_name = "SettleSpeed";
		constexpr static rivet::rivet_type_id SettleSpeed_type_id = 0x2fea88d5;
		constexpr static std::string_view SettleAccel_type_name = "SettleAccel";
		constexpr static rivet::rivet_type_id SettleAccel_type_id = 0x7d3040c6;
		constexpr static std::string_view SettleDecel_type_name = "SettleDecel";
		constexpr static rivet::rivet_type_id SettleDecel_type_id = 0x90bb906a;
		constexpr static std::string_view AutoHitAngle_type_name = "AutoHitAngle";
		constexpr static rivet::rivet_type_id AutoHitAngle_type_id = 0x8b264907;
		constexpr static std::string_view AutoHitRange_type_name = "AutoHitRange";
		constexpr static rivet::rivet_type_id AutoHitRange_type_id = 0x18205647; 

		explicit FireConeData() = default;
		explicit FireConeData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float SizeMin {};
		float SizeMax {};
		float MinShotsToBump {};
		float ShotBumpAngle {};
		float ShotBumpSpeed {};
		float ShotBumpAccel {};
		float ShotBumpDecel {};
		float SettleDelay {};
		float SettleSpeed {};
		float SettleAccel {};
		float SettleDecel {};
		float AutoHitAngle {};
		float AutoHitRange {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FireConeData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
