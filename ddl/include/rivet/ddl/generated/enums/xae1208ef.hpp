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
	constexpr static std::string_view xae1208ef_type_name = "xae1208ef";
	constexpr static rivet::rivet_type_id xae1208ef_type_id = 0xae1208ef;

	constexpr static std::array<std::string_view, 10> xae1208ef_values = {
		"kNone",
		"kPointComposite",
		"kBicubic",
		"kCubic",
		"kSinc",
		"kBox",
		"kMitchell",
		"kTriangle",
		"kQuadratic",
		"kBSpline", 
	};

	constexpr static std::array<std::string_view, 10> xae1208ef_labels = {
		"NONE",
		"PointComposite (Sharp)",
		"Bicubic (Sharp)",
		"Cubic (Med Sharp)",
		"Sinc (Med Sharp)",
		"Box (Med Sharp)",
		"Mitchell (Med Smooth)",
		"Triangle (Med Smooth)",
		"Quadratic (Smooth)",
		"BSpline (Smooth)", 
	};

	enum class xae1208ef : uint64_t {
		None,
		PointComposite,
		Bicubic,
		Cubic,
		Sinc,
		Box,
		Mitchell,
		Triangle,
		Quadratic,
		BSpline, 
	};
} // namespace rivet::ddl::generated

// clang-format on
