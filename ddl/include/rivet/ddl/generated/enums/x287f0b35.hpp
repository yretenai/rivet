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
	constexpr static std::string_view x287f0b35_type_name = "x287f0b35";
	constexpr static rivet::rivet_type_id x287f0b35_type_id = 0x287f0b35;

	constexpr static std::array<std::string_view, 2> x287f0b35_values = {
		"kTiled",
		"kMonolithic", 
	};

	constexpr static std::array<std::string_view, 2> x287f0b35_labels = {
		"Unit tiles",
		"Monolithic", 
	};

	enum class x287f0b35 : uint64_t {
		Unit_tiles,
		Monolithic, 
	};
} // namespace rivet::ddl::generated

// clang-format on
