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
	struct RIVET_DDL_SHARED PathHazardPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "PathHazardPrius";
		constexpr static rivet::rivet_type_id type_id = 0x713263ff;

		constexpr static std::string_view TrackingDistance_type_name = "TrackingDistance";
		constexpr static rivet::rivet_type_id TrackingDistance_type_id = 0xaf666352;
		constexpr static std::string_view TrackingSpeed_type_name = "TrackingSpeed";
		constexpr static rivet::rivet_type_id TrackingSpeed_type_id = 0xfe94d1b9;
		constexpr static std::string_view TrackingAccel_type_name = "TrackingAccel";
		constexpr static rivet::rivet_type_id TrackingAccel_type_id = 0xac4e19aa;
		constexpr static std::string_view TrackingDecel_type_name = "TrackingDecel";
		constexpr static rivet::rivet_type_id TrackingDecel_type_id = 0x41c5c906;
		constexpr static std::string_view TelegraphTime_type_name = "TelegraphTime";
		constexpr static rivet::rivet_type_id TelegraphTime_type_id = 0x2085862d;
		constexpr static std::string_view RetreatTime_type_name = "RetreatTime";
		constexpr static rivet::rivet_type_id RetreatTime_type_id = 0xcc77d1d0;
		constexpr static std::string_view MovementCurve_type_name = "MovementCurve";
		constexpr static rivet::rivet_type_id MovementCurve_type_id = 0x2c2a8f27;
		constexpr static std::string_view CurveYPosOffset_type_name = "CurveYPosOffset";
		constexpr static rivet::rivet_type_id CurveYPosOffset_type_id = 0xd5970c69;
		constexpr static std::string_view IdleSpeed_type_name = "IdleSpeed";
		constexpr static rivet::rivet_type_id IdleSpeed_type_id = 0xdc7f8c8b;
		constexpr static std::string_view IdleAccel_type_name = "IdleAccel";
		constexpr static rivet::rivet_type_id IdleAccel_type_id = 0x8ea54498;
		constexpr static std::string_view IdleDecel_type_name = "IdleDecel";
		constexpr static rivet::rivet_type_id IdleDecel_type_id = 0x632e9434; 

		explicit PathHazardPrius() = default;
		explicit PathHazardPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float TrackingDistance {};
		float TrackingSpeed {};
		float TrackingAccel {};
		float TrackingDecel {};
		float TelegraphTime {};
		float RetreatTime {};
		uint64_t MovementCurve {};
		float CurveYPosOffset {};
		float IdleSpeed {};
		float IdleAccel {};
		float IdleDecel {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PathHazardPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
