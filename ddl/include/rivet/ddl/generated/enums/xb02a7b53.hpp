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
	constexpr static std::string_view xb02a7b53_type_name = "xb02a7b53";
	constexpr static rivet::rivet_type_id xb02a7b53_type_id = 0xb02a7b53;

	constexpr static std::array<std::string_view, 3> xb02a7b53_values = {
		"kIntroCurveBroken",
		"kIntroCurveFixed",
		"kBlendCurves", 
	};

	constexpr static std::array<std::string_view, 3> xb02a7b53_labels = {
		"Intro Curve",
		"Intro Curve Fixed",
		"Blend Curves", 
	};

	enum class xb02a7b53 : uint64_t {
		Intro_Curve,
		Intro_Curve_Fixed,
		Blend_Curves, 
	};
} // namespace rivet::ddl::generated

// clang-format on