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
	struct RIVET_DDL_SHARED AimAssistTargetSelection : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "AimAssistTargetSelection";
		constexpr static rivet::rivet_type_id type_id = 0x6a7d116d;

		constexpr static std::string_view PersistenceZoneFactor_type_name = "PersistenceZoneFactor";
		constexpr static rivet::rivet_type_id PersistenceZoneFactor_type_id = 0x5b5ec948;
		constexpr static std::string_view PersistenceHoldTime_type_name = "PersistenceHoldTime";
		constexpr static rivet::rivet_type_id PersistenceHoldTime_type_id = 0x4c347bc7;
		constexpr static std::string_view PersistenceInnerTime_type_name = "PersistenceInnerTime";
		constexpr static rivet::rivet_type_id PersistenceInnerTime_type_id = 0x3c96f8e2;
		constexpr static std::string_view PersistenceInnerMod_type_name = "PersistenceInnerMod";
		constexpr static rivet::rivet_type_id PersistenceInnerMod_type_id = 0xa96db49c;
		constexpr static std::string_view SelectPersistScale_type_name = "SelectPersistScale";
		constexpr static rivet::rivet_type_id SelectPersistScale_type_id = 0x498182a0;
		constexpr static std::string_view SelectCameraOnScale_type_name = "SelectCameraOnScale";
		constexpr static rivet::rivet_type_id SelectCameraOnScale_type_id = 0x268bd042;
		constexpr static std::string_view SelectAngleWeight_type_name = "SelectAngleWeight";
		constexpr static rivet::rivet_type_id SelectAngleWeight_type_id = 0x60bd29a6;
		constexpr static std::string_view SelectDistanceWeight_type_name = "SelectDistanceWeight";
		constexpr static rivet::rivet_type_id SelectDistanceWeight_type_id = 0xad639a21;
		constexpr static std::string_view SelectRecentDamageScale_type_name = "SelectRecentDamageScale";
		constexpr static rivet::rivet_type_id SelectRecentDamageScale_type_id = 0x2d09435c;
		constexpr static std::string_view SelectRecentDamageTime_type_name = "SelectRecentDamageTime";
		constexpr static rivet::rivet_type_id SelectRecentDamageTime_type_id = 0x4e859b5d;
		constexpr static std::string_view TargetSearchAngle_type_name = "TargetSearchAngle";
		constexpr static rivet::rivet_type_id TargetSearchAngle_type_id = 0x59638d87;
		constexpr static std::string_view TargetSearchAnglePitch_type_name = "TargetSearchAnglePitch";
		constexpr static rivet::rivet_type_id TargetSearchAnglePitch_type_id = 0x1d61f7c0;
		constexpr static std::string_view UseSearchAngleFromUser_type_name = "UseSearchAngleFromUser";
		constexpr static rivet::rivet_type_id UseSearchAngleFromUser_type_id = 0xcfcece6a;
		constexpr static std::string_view UseSearchAngleSeparatePitch_type_name = "UseSearchAngleSeparatePitch";
		constexpr static rivet::rivet_type_id UseSearchAngleSeparatePitch_type_id = 0x43d15d8e;
		constexpr static std::string_view AutoTargetOuterRange_type_name = "AutoTargetOuterRange";
		constexpr static rivet::rivet_type_id AutoTargetOuterRange_type_id = 0xc4768e80;
		constexpr static std::string_view AutoTargetOuterAngle_type_name = "AutoTargetOuterAngle";
		constexpr static rivet::rivet_type_id AutoTargetOuterAngle_type_id = 0x577091c0;
		constexpr static std::string_view AutoTargetOuterRangeTrav_type_name = "AutoTargetOuterRangeTrav";
		constexpr static rivet::rivet_type_id AutoTargetOuterRangeTrav_type_id = 0x3504f24c;
		constexpr static std::string_view AutoTargetOuterAngleTrav_type_name = "AutoTargetOuterAngleTrav";
		constexpr static rivet::rivet_type_id AutoTargetOuterAngleTrav_type_id = 0x86362b44; 

		explicit AimAssistTargetSelection() = default;
		explicit AimAssistTargetSelection([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float PersistenceZoneFactor {};
		float PersistenceHoldTime {};
		float PersistenceInnerTime {};
		float PersistenceInnerMod {};
		float SelectPersistScale {};
		float SelectCameraOnScale {};
		float SelectAngleWeight {};
		float SelectDistanceWeight {};
		float SelectRecentDamageScale {};
		float SelectRecentDamageTime {};
		float TargetSearchAngle {};
		float TargetSearchAnglePitch {};
		bool UseSearchAngleFromUser {};
		bool UseSearchAngleSeparatePitch {};
		float AutoTargetOuterRange {};
		float AutoTargetOuterAngle {};
		float AutoTargetOuterRangeTrav {};
		float AutoTargetOuterAngleTrav {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AimAssistTargetSelection>;
	};
} // namespace rivet::ddl::generated

// clang-format on
