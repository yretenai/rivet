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
	constexpr static std::string_view x2c44a864_type_name = "x2c44a864";
	constexpr static rivet::rivet_type_id x2c44a864_type_id = 0x2c44a864;

	constexpr static std::array<std::string_view, 12> x2c44a864_values = {
		"kNone",
		"kLowLight",
		"kLowMedium",
		"kLowHeavy",
		"kMediumLight",
		"kMediumMedium",
		"kMediumHeavy",
		"kHighLight",
		"kHighMedium",
		"kHighHeavy",
		"kMassive",
		"kMassiveHeavy", 
	};

	enum class x2c44a864 : uint64_t {
		None,
		LowLight,
		LowMedium,
		LowHeavy,
		MediumLight,
		MediumMedium,
		MediumHeavy,
		HighLight,
		HighMedium,
		HighHeavy,
		Massive,
		MassiveHeavy, 
	};
} // namespace rivet::ddl::generated

// clang-format on
