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
	constexpr static std::string_view xfb81cf7c_type_name = "xfb81cf7c";
	constexpr static rivet::rivet_type_id xfb81cf7c_type_id = 0xfb81cf7c;

	constexpr static std::array<std::string_view, 4> xfb81cf7c_values = {
		"bronze",
		"silver",
		"gold",
		"platinum", 
	};

	constexpr static std::array<std::string_view, 4> xfb81cf7c_labels = {
		"Bronze (15 pts)",
		"Silver (30 pts)",
		"Gold (90 pts)",
		"Platinum", 
	};

	enum class xfb81cf7c : uint64_t {
		bronze,
		silver,
		gold,
		Platinum, 
	};
} // namespace rivet::ddl::generated

// clang-format on
