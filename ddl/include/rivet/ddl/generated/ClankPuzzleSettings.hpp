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
	struct RIVET_DDL_SHARED ClankPuzzleSettings : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "ClankPuzzleSettings";
		constexpr static rivet::rivet_type_id type_id = 0xf9c9c58c;

		constexpr static std::string_view SpawnVolumeOnAim_type_name = "SpawnVolumeOnAim";
		constexpr static rivet::rivet_type_id SpawnVolumeOnAim_type_id = 0xe111b501;
		constexpr static std::string_view CanSlapBots_type_name = "CanSlapBots";
		constexpr static rivet::rivet_type_id CanSlapBots_type_id = 0xd8e54b2d;
		constexpr static std::string_view SlapBotsTurn90_type_name = "SlapBotsTurn90";
		constexpr static rivet::rivet_type_id SlapBotsTurn90_type_id = 0x2d71d58d;
		constexpr static std::string_view CharactersWorldSpeed_type_name = "CharactersWorldSpeed";
		constexpr static rivet::rivet_type_id CharactersWorldSpeed_type_id = 0x18cb925e;
		constexpr static std::string_view PortalSpeedStack_type_name = "PortalSpeedStack";
		constexpr static rivet::rivet_type_id PortalSpeedStack_type_id = 0xca3d1dac;
		constexpr static std::string_view WireRideSpeed_type_name = "WireRideSpeed";
		constexpr static rivet::rivet_type_id WireRideSpeed_type_id = 0x6ff4aec4;
		constexpr static std::string_view CanRecallShots_type_name = "CanRecallShots";
		constexpr static rivet::rivet_type_id CanRecallShots_type_id = 0x7c3fbbe7;
		constexpr static std::string_view CanTargetsAbsorb_type_name = "CanTargetsAbsorb";
		constexpr static rivet::rivet_type_id CanTargetsAbsorb_type_id = 0xae24b045;
		constexpr static std::string_view DeathOnBigMove_type_name = "DeathOnBigMove";
		constexpr static rivet::rivet_type_id DeathOnBigMove_type_id = 0x470d0c14;
		constexpr static std::string_view ShowDebugDraw_type_name = "ShowDebugDraw";
		constexpr static rivet::rivet_type_id ShowDebugDraw_type_id = 0x48f109ae;
		constexpr static std::string_view Logging_type_name = "Logging";
		constexpr static rivet::rivet_type_id Logging_type_id = 0xcb7f01c2;
		constexpr static std::string_view ShowLockOnScores_type_name = "ShowLockOnScores";
		constexpr static rivet::rivet_type_id ShowLockOnScores_type_id = 0x43cd33ae; 

		explicit ClankPuzzleSettings() = default;
		explicit ClankPuzzleSettings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool SpawnVolumeOnAim {};
		bool CanSlapBots {};
		bool SlapBotsTurn90 {};
		bool CharactersWorldSpeed {};
		bool PortalSpeedStack {};
		int32_t WireRideSpeed {};
		bool CanRecallShots {};
		bool CanTargetsAbsorb {};
		bool DeathOnBigMove {};
		bool ShowDebugDraw {};
		bool Logging {};
		bool ShowLockOnScores {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ClankPuzzleSettings>;
	};
} // namespace rivet::ddl::generated

// clang-format on
