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
	constexpr static std::string_view x58cf7ca5_type_name = "x58cf7ca5";
	constexpr static rivet::rivet_type_id x58cf7ca5_type_id = 0x58cf7ca5;

	constexpr static std::array<std::string_view, 5> x58cf7ca5_values = {
		"k1D",
		"k2D",
		"k3D",
		"kCube",
		"k2DArray", 
	};

	constexpr static std::array<std::string_view, 5> x58cf7ca5_labels = {
		"1D",
		"2D",
		"3D",
		"Cube",
		"2D Array", 
	};

	enum class x58cf7ca5 : uint64_t {
		k1D,
		k2D,
		k3D,
		Cube,
		k2DArray, 
	};
} // namespace rivet::ddl::generated

// clang-format on