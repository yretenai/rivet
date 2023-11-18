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
	constexpr static std::string_view x84053194_type_name = "x84053194";
	constexpr static rivet::rivet_type_id x84053194_type_id = 0x84053194;

	constexpr static std::array<std::string_view, 6> x84053194_values = {
		"kNone",
		"kOne",
		"kTwo",
		"kThree",
		"kFour",
		"kFive", 
	};

	enum class x84053194 : uint64_t {
		None,
		One,
		Two,
		Three,
		Four,
		Five, 
	};
} // namespace rivet::ddl::generated

// clang-format on
