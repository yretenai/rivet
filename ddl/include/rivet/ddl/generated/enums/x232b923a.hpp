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
	constexpr static std::string_view x232b923a_type_name = "x232b923a";
	constexpr static rivet::rivet_type_id x232b923a_type_id = 0x232b923a;

	constexpr static std::array<std::string_view, 3> x232b923a_values = {
		"kLarge",
		"kMedium",
		"kSmall", 
	};

	constexpr static std::array<std::string_view, 3> x232b923a_labels = {
		"NONE",
		"NONE",
		"NONE", 
	};

	enum class x232b923a : uint64_t {
		Large,
		Medium,
		Small, 
	};
} // namespace rivet::ddl::generated

// clang-format on