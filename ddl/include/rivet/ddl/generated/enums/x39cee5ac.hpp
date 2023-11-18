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
	constexpr static std::string_view x39cee5ac_type_name = "x39cee5ac";
	constexpr static rivet::rivet_type_id x39cee5ac_type_id = 0x39cee5ac;

	constexpr static std::array<std::string_view, 3> x39cee5ac_values = {
		"kPlayOne",
		"kPlayAll",
		"kPlayForever", 
	};

	enum class x39cee5ac : uint64_t {
		Play_One,
		Play_All,
		Play_Forever, 
	};
} // namespace rivet::ddl::generated

// clang-format on
