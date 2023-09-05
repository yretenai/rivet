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
	constexpr const static std::string_view x73a6f97a_type_name = "x73a6f97a";
	constexpr const static rivet::rivet_type_id x73a6f97a_type_id = 0x73a6f97a;

	constexpr const static std::array<std::string_view, 5> x73a6f97a_values = {
		"kTarget",
		"kSplinePlanar",
		"kSplineFull",
		"kSplinePlanarBack",
		"kSplineFullBack", 
	};

	enum class x73a6f97a : uint64_t {
		Target,
		Spline_Planar,
		Spline_Full,
		Spline_Planar_Back,
		Spline_Full_Back, 
	};
} // namespace rivet::ddl::generated

// clang-format on
