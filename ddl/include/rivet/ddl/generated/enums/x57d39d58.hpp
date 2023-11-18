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
	constexpr static std::string_view x57d39d58_type_name = "x57d39d58";
	constexpr static rivet::rivet_type_id x57d39d58_type_id = 0x57d39d58;

	constexpr static std::array<std::string_view, 7> x57d39d58_values = {
		"kCompQualityHighest",
		"kCompQualityHigher",
		"kCompQualityHigh",
		"kCompQualityNormal",
		"kCompQualityLow",
		"kCompQualityLower",
		"kCompQualityLowest", 
	};

	enum class x57d39d58 : uint64_t {
		Highest,
		Higher,
		High,
		Normal,
		Low,
		Lower,
		Lowest, 
	};
} // namespace rivet::ddl::generated

// clang-format on
