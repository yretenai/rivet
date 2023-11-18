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
	constexpr static std::string_view x93b1b93c_type_name = "x93b1b93c";
	constexpr static rivet::rivet_type_id x93b1b93c_type_id = 0x93b1b93c;

	constexpr static std::array<std::string_view, 5> x93b1b93c_values = {
		"kNone",
		"kEaseIn",
		"kEaseInOut",
		"kEaseOut",
		"kLinear", 
	};

	enum class x93b1b93c : uint64_t {
		None,
		Ease_In,
		EaseInOut,
		Ease_Out,
		Linear, 
	};
} // namespace rivet::ddl::generated

// clang-format on
