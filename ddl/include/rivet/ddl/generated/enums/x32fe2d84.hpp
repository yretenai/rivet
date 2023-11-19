// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

// clang-format off

#include <cstdint>
#include <string_view>
#include <array>

#include <rivet/hash/type_id.hpp>
#include <rivet/rivet_keywords.hpp>

namespace rivet::ddl::generated {
	constexpr static std::string_view x32fe2d84_type_name = "x32fe2d84";
	constexpr static rivet::rivet_type_id x32fe2d84_type_id = 0x32fe2d84;

	constexpr static std::array<std::string_view, 3> x32fe2d84_values = {
		"kCycleAntiClockwise",
		"kCycleClockwise",
		"kPingPong", 
	};

	constexpr static std::array<std::string_view, 3> x32fe2d84_labels = {
		"Cycle anti-clockwise",
		"Cycle clockwise",
		"PingPong", 
	};

	enum class x32fe2d84 : uint64_t {
		CycleAntiClockwise,
		Cycle_clockwise,
		PingPong, 
	};
} // namespace rivet::ddl::generated

// clang-format on