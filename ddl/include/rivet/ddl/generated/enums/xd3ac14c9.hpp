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
	constexpr static std::string_view xd3ac14c9_type_name = "xd3ac14c9";
	constexpr static rivet::rivet_type_id xd3ac14c9_type_id = 0xd3ac14c9;

	constexpr static std::array<std::string_view, 2> xd3ac14c9_values = {
		"kRandom",
		"kSequential", 
	};

	constexpr static std::array<std::string_view, 2> xd3ac14c9_labels = {
		"Random",
		"Sequential", 
	};

	enum class xd3ac14c9 : uint64_t {
		Random,
		Sequential, 
	};
} // namespace rivet::ddl::generated

// clang-format on
