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
	struct FinaleLaserCurve; 

	struct RIVET_DDL_SHARED FinaleLaserSweepConfig : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "FinaleLaserSweepConfig";
		constexpr static rivet::rivet_type_id type_id = 0x56414d93;

		constexpr static std::string_view WeaponActorVol_type_name = "WeaponActorVol";
		constexpr static rivet::rivet_type_id WeaponActorVol_type_id = 0x3ddbd4ba;
		constexpr static std::string_view CurveActor_type_name = "CurveActor";
		constexpr static rivet::rivet_type_id CurveActor_type_id = 0xc23a6c53;
		constexpr static std::string_view GroundBlastTriggerVolume_type_name = "GroundBlastTriggerVolume";
		constexpr static rivet::rivet_type_id GroundBlastTriggerVolume_type_id = 0x391d6f9e;
		constexpr static std::string_view CurveList_type_name = "CurveList";
		constexpr static rivet::rivet_type_id CurveList_type_id = 0xd74af6ee;
		constexpr static std::string_view DelayTime_type_name = "DelayTime";
		constexpr static rivet::rivet_type_id DelayTime_type_id = 0x68ee6562;
		constexpr static std::string_view InitialSpeed_type_name = "InitialSpeed";
		constexpr static rivet::rivet_type_id InitialSpeed_type_id = 0x1a29bd24;
		constexpr static std::string_view GroundBlastAccel_type_name = "GroundBlastAccel";
		constexpr static rivet::rivet_type_id GroundBlastAccel_type_id = 0xb0586e2b;
		constexpr static std::string_view GroundBlastMaxSpeed_type_name = "GroundBlastMaxSpeed";
		constexpr static rivet::rivet_type_id GroundBlastMaxSpeed_type_id = 0x2b105609;
		constexpr static std::string_view GroundBlastRadius_type_name = "GroundBlastRadius";
		constexpr static rivet::rivet_type_id GroundBlastRadius_type_id = 0x954fca38; 

		explicit FinaleLaserSweepConfig() = default;
		explicit FinaleLaserSweepConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint64_t WeaponActorVol {};
		uint64_t CurveActor {};
		uint64_t GroundBlastTriggerVolume {};
		std::vector<std::shared_ptr<rivet::ddl::generated::FinaleLaserCurve>> CurveList {};
		float DelayTime {};
		float InitialSpeed {};
		float GroundBlastAccel {};
		float GroundBlastMaxSpeed {};
		float GroundBlastRadius {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FinaleLaserSweepConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
