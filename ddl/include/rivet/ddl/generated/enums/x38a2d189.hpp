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
	constexpr static std::string_view x38a2d189_type_name = "x38a2d189";
	constexpr static rivet::rivet_type_id x38a2d189_type_id = 0x38a2d189;

	constexpr static std::array<std::string_view, 3> x38a2d189_values = {
		"kFlagsNone",
		"kFlagsPerformanceHead",
		"kFlagsPerformanceBody", 
	};

	constexpr static std::array<std::string_view, 3> x38a2d189_labels = {
		"NONE",
		"NONE",
		"NONE", 
	};

	enum class x38a2d189 : uint64_t {
		FlagsNone,
		FlagsPerformanceHead,
		FlagsPerformanceBody, 
	};
} // namespace rivet::ddl::generated

// clang-format on