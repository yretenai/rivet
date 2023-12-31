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
	constexpr static std::string_view x46ba7b62_type_name = "x46ba7b62";
	constexpr static rivet::rivet_type_id x46ba7b62_type_id = 0x46ba7b62;

	constexpr static std::array<std::string_view, 7> x46ba7b62_values = {
		"kNone",
		"kXPositive",
		"kXNegative",
		"kYPositive",
		"kYNegative",
		"kZPositive",
		"kZNegative", 
	};

	constexpr static std::array<std::string_view, 7> x46ba7b62_labels = {
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE", 
	};

	enum class x46ba7b62 : uint64_t {
		None,
		XPositive,
		XNegative,
		YPositive,
		YNegative,
		ZPositive,
		ZNegative, 
	};
} // namespace rivet::ddl::generated

// clang-format on
