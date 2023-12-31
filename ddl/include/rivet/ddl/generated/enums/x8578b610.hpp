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
	constexpr static std::string_view x8578b610_type_name = "x8578b610";
	constexpr static rivet::rivet_type_id x8578b610_type_id = 0x8578b610;

	constexpr static std::array<std::string_view, 3> x8578b610_values = {
		"Generic",
		"Objective",
		"Player", 
	};

	constexpr static std::array<std::string_view, 3> x8578b610_labels = {
		"NONE",
		"NONE",
		"NONE", 
	};

	enum class x8578b610 : uint64_t {
		Generic,
		Objective,
		Player, 
	};
} // namespace rivet::ddl::generated

// clang-format on
