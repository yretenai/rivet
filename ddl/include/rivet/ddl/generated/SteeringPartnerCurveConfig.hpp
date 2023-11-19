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
	struct RIVET_DDL_SHARED SteeringPartnerCurveConfig : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "SteeringPartnerCurveConfig";
		constexpr static rivet::rivet_type_id type_id = 0x75fa7dfb;

		constexpr static std::string_view PersonalSpaceRadius_type_name = "PersonalSpaceRadius";
		constexpr static rivet::rivet_type_id PersonalSpaceRadius_type_id = 0x8994bcec;
		constexpr static std::string_view MinRateOfAcceleration_type_name = "MinRateOfAcceleration";
		constexpr static rivet::rivet_type_id MinRateOfAcceleration_type_id = 0x846a2206;
		constexpr static std::string_view MaxRateOfAcceleration_type_name = "MaxRateOfAcceleration";
		constexpr static rivet::rivet_type_id MaxRateOfAcceleration_type_id = 0x972fc4ad;
		constexpr static std::string_view MinRateOfDeceleration_type_name = "MinRateOfDeceleration";
		constexpr static rivet::rivet_type_id MinRateOfDeceleration_type_id = 0xf47c9f55;
		constexpr static std::string_view MaxRateOfDeceleration_type_name = "MaxRateOfDeceleration";
		constexpr static rivet::rivet_type_id MaxRateOfDeceleration_type_id = 0xe73979fe;
		constexpr static std::string_view IdleAccelDecel_type_name = "IdleAccelDecel";
		constexpr static rivet::rivet_type_id IdleAccelDecel_type_id = 0x3827b7a5;
		constexpr static std::string_view SpeedUpDistance_type_name = "SpeedUpDistance";
		constexpr static rivet::rivet_type_id SpeedUpDistance_type_id = 0x450eee72;
		constexpr static std::string_view SlowDownDistance_type_name = "SlowDownDistance";
		constexpr static rivet::rivet_type_id SlowDownDistance_type_id = 0xb1a31762;
		constexpr static std::string_view MaxSpeedVariance_type_name = "MaxSpeedVariance";
		constexpr static rivet::rivet_type_id MaxSpeedVariance_type_id = 0xe6186c87;
		constexpr static std::string_view MaxTurningVariance_type_name = "MaxTurningVariance";
		constexpr static rivet::rivet_type_id MaxTurningVariance_type_id = 0xf8cd526a;
		constexpr static std::string_view MinTimeTillReachDestAccel_type_name = "MinTimeTillReachDestAccel";
		constexpr static rivet::rivet_type_id MinTimeTillReachDestAccel_type_id = 0xa58d6564;
		constexpr static std::string_view MaxTimeTillReachDestAccel_type_name = "MaxTimeTillReachDestAccel";
		constexpr static rivet::rivet_type_id MaxTimeTillReachDestAccel_type_id = 0x9b38adec;
		constexpr static std::string_view MinTimeTillReachDestDecel_type_name = "MinTimeTillReachDestDecel";
		constexpr static rivet::rivet_type_id MinTimeTillReachDestDecel_type_id = 0x4806b5c8;
		constexpr static std::string_view MaxTimeTillReachDestDecel_type_name = "MaxTimeTillReachDestDecel";
		constexpr static rivet::rivet_type_id MaxTimeTillReachDestDecel_type_id = 0x76b37d40;
		constexpr static std::string_view UseCurvePathing_type_name = "UseCurvePathing";
		constexpr static rivet::rivet_type_id UseCurvePathing_type_id = 0x38a47cdc;
		constexpr static std::string_view MaxDistanceFromPath_type_name = "MaxDistanceFromPath";
		constexpr static rivet::rivet_type_id MaxDistanceFromPath_type_id = 0xa2f9b2ed;
		constexpr static std::string_view PartnerSwitchDistance_type_name = "PartnerSwitchDistance";
		constexpr static rivet::rivet_type_id PartnerSwitchDistance_type_id = 0x9172fd37;
		constexpr static std::string_view CurveSwitchDistance_type_name = "CurveSwitchDistance";
		constexpr static rivet::rivet_type_id CurveSwitchDistance_type_id = 0xdfbbf820; 

		explicit SteeringPartnerCurveConfig() = default;
		explicit SteeringPartnerCurveConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float PersonalSpaceRadius {};
		float MinRateOfAcceleration {};
		float MaxRateOfAcceleration {};
		float MinRateOfDeceleration {};
		float MaxRateOfDeceleration {};
		float IdleAccelDecel {};
		float SpeedUpDistance {};
		float SlowDownDistance {};
		float MaxSpeedVariance {};
		float MaxTurningVariance {};
		float MinTimeTillReachDestAccel {};
		float MaxTimeTillReachDestAccel {};
		float MinTimeTillReachDestDecel {};
		float MaxTimeTillReachDestDecel {};
		bool UseCurvePathing {};
		float MaxDistanceFromPath {};
		float PartnerSwitchDistance {};
		float CurveSwitchDistance {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SteeringPartnerCurveConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on