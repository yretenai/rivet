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
	constexpr static std::string_view xb774530f_type_name = "xb774530f";
	constexpr static rivet::rivet_type_id xb774530f_type_id = 0xb774530f;

	constexpr static std::array<std::string_view, 4> xb774530f_values = {
		"kType1d",
		"kType2d",
		"kType3d",
		"kType4d", 
	};

	constexpr static std::array<std::string_view, 4> xb774530f_labels = {
		"1D",
		"2D",
		"3D",
		"4D", 
	};

	enum class xb774530f : uint64_t {
		Type1d,
		Type2d,
		Type3d,
		Type4d, 
	};
} // namespace rivet::ddl::generated

// clang-format on
