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
	constexpr static std::string_view x69c22897_type_name = "x69c22897";
	constexpr static rivet::rivet_type_id x69c22897_type_id = 0x69c22897;

	constexpr static std::array<std::string_view, 3> x69c22897_values = {
		"kThruTarget",
		"kStartingFromTarget",
		"kEndAtTarget", 
	};

	constexpr static std::array<std::string_view, 3> x69c22897_labels = {
		"NONE",
		"NONE",
		"NONE", 
	};

	enum class x69c22897 : uint64_t {
		ThruTarget,
		StartingFromTarget,
		EndAtTarget, 
	};
} // namespace rivet::ddl::generated

// clang-format on