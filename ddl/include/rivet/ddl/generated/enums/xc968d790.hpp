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
	constexpr static std::string_view xc968d790_type_name = "xc968d790";
	constexpr static rivet::rivet_type_id xc968d790_type_id = 0xc968d790;

	constexpr static std::array<std::string_view, 5> xc968d790_values = {
		"kNone",
		"kHip",
		"kWrist",
		"kBackLeft",
		"kBackRight", 
	};

	constexpr static std::array<std::string_view, 5> xc968d790_labels = {
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE", 
	};

	enum class xc968d790 : uint64_t {
		None,
		Hip,
		Wrist,
		BackLeft,
		BackRight, 
	};
} // namespace rivet::ddl::generated

// clang-format on
