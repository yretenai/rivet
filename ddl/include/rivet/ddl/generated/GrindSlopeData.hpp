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
	struct RIVET_DDL_SHARED GrindSlopeData : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "GrindSlopeData";
		constexpr static rivet::rivet_type_id type_id = 0x181ea91e;

		constexpr static std::string_view Gravity_type_name = "Gravity";
		constexpr static rivet::rivet_type_id Gravity_type_id = 0x5bf7469f;
		constexpr static std::string_view UphillStartDegrees_type_name = "UphillStartDegrees";
		constexpr static rivet::rivet_type_id UphillStartDegrees_type_id = 0x92b96ec5;
		constexpr static std::string_view DownhillStartDegrees_type_name = "DownhillStartDegrees";
		constexpr static rivet::rivet_type_id DownhillStartDegrees_type_id = 0x67faded3;
		constexpr static std::string_view FlatAccel_type_name = "FlatAccel";
		constexpr static rivet::rivet_type_id FlatAccel_type_id = 0x2ba42002;
		constexpr static std::string_view FlatDecel_type_name = "FlatDecel";
		constexpr static rivet::rivet_type_id FlatDecel_type_id = 0xc62ff0ae;
		constexpr static std::string_view SpeedMin_type_name = "SpeedMin";
		constexpr static rivet::rivet_type_id SpeedMin_type_id = 0x8a4ca0e3;
		constexpr static std::string_view SpeedMax_type_name = "SpeedMax";
		constexpr static rivet::rivet_type_id SpeedMax_type_id = 0xb6419fba; 

		explicit GrindSlopeData() = default;
		explicit GrindSlopeData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float Gravity {};
		float UphillStartDegrees {};
		float DownhillStartDegrees {};
		float FlatAccel {};
		float FlatDecel {};
		float SpeedMin {};
		float SpeedMax {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GrindSlopeData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
