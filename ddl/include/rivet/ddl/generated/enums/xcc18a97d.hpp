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
	constexpr const static std::string_view xcc18a97d_type_name = "xcc18a97d";
	constexpr const static rivet::rivet_type_id xcc18a97d_type_id = 0xcc18a97d;

	constexpr const static std::array<std::string_view, 3> xcc18a97d_values = {
		"kNone",
		"kLeftBias",
		"kRightBias", 
	};

	enum class xcc18a97d : uint64_t {
		None,
		Left_Bias,
		Right_Bias, 
	};
} // namespace rivet::ddl::generated

// clang-format on
