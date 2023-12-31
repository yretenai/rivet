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
	struct RIVET_DDL_SHARED RadTelemetrySetings : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "RadTelemetrySetings";
		constexpr static rivet::rivet_type_id type_id = 0x35492c52;

		constexpr static std::string_view ZoneThreshold_type_name = "ZoneThreshold";
		constexpr static rivet::rivet_type_id ZoneThreshold_type_id = 0x508e835d;
		constexpr static std::string_view UseLogging_type_name = "UseLogging";
		constexpr static rivet::rivet_type_id UseLogging_type_id = 0xe1bdad44;
		constexpr static std::string_view UsePrintf_type_name = "UsePrintf";
		constexpr static rivet::rivet_type_id UsePrintf_type_id = 0x41e8656d;
		constexpr static std::string_view UseProfiling_type_name = "UseProfiling";
		constexpr static rivet::rivet_type_id UseProfiling_type_id = 0xe1b4ebe7;
		constexpr static std::string_view Host_type_name = "Host";
		constexpr static rivet::rivet_type_id Host_type_id = 0xffb7d34d;
		constexpr static std::string_view EnableCaptureContextSwitches_type_name = "EnableCaptureContextSwitches";
		constexpr static rivet::rivet_type_id EnableCaptureContextSwitches_type_id = 0x74e102e2; 

		explicit RadTelemetrySetings() = default;
		explicit RadTelemetrySetings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint32_t ZoneThreshold {};
		bool UseLogging {};
		bool UsePrintf {};
		bool UseProfiling {};
		std::string_view Host {};
		bool EnableCaptureContextSwitches {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RadTelemetrySetings>;
	};
} // namespace rivet::ddl::generated

// clang-format on
