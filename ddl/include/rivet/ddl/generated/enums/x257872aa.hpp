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
	constexpr static std::string_view x257872aa_type_name = "x257872aa";
	constexpr static rivet::rivet_type_id x257872aa_type_id = 0x257872aa;

	constexpr static std::array<std::string_view, 8> x257872aa_values = {
		"kNone",
		"kConditionSnared",
		"kConditionFear",
		"kConditionDaze",
		"kConditionTakedown",
		"kConditionChoke",
		"kConditionPounce",
		"kConditionGrab", 
	};

	enum class x257872aa : uint64_t {
		None,
		ConditionSnared,
		ConditionFear,
		ConditionDaze,
		ConditionTakedown,
		ConditionChoke,
		ConditionPounce,
		ConditionGrab, 
	};
} // namespace rivet::ddl::generated

// clang-format on
