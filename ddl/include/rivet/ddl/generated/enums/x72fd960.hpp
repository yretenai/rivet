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
	constexpr static std::string_view x72fd960_type_name = "x72fd960";
	constexpr static rivet::rivet_type_id x72fd960_type_id = 0x72fd960;

	constexpr static std::array<std::string_view, 2> x72fd960_values = {
		"kJump",
		"kFire", 
	};

	enum class x72fd960 : uint64_t {
		Jump,
		Fire, 
	};
} // namespace rivet::ddl::generated

// clang-format on
