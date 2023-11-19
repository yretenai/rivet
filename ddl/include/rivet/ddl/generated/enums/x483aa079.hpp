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
	constexpr static std::string_view x483aa079_type_name = "x483aa079";
	constexpr static rivet::rivet_type_id x483aa079_type_id = 0x483aa079;

	constexpr static std::array<std::string_view, 5> x483aa079_values = {
		"None",
		"Up",
		"Down",
		"Left",
		"Right", 
	};

	constexpr static std::array<std::string_view, 5> x483aa079_labels = {
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE", 
	};

	enum class x483aa079 : uint64_t {
		None,
		Up,
		Down,
		Left,
		Right, 
	};
} // namespace rivet::ddl::generated

// clang-format on