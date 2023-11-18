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
	constexpr static std::string_view x53914cb6_type_name = "x53914cb6";
	constexpr static rivet::rivet_type_id x53914cb6_type_id = 0x53914cb6;

	constexpr static std::array<std::string_view, 4> x53914cb6_values = {
		"kSmoothingLinear",
		"kSmoothingEaseIn",
		"kSmoothingEaseOut",
		"kSmoothingEaseInOut", 
	};

	enum class x53914cb6 : uint64_t {
		Linear,
		Ease_In,
		Ease_Out,
		SmoothingEaseInOut, 
	};
} // namespace rivet::ddl::generated

// clang-format on
