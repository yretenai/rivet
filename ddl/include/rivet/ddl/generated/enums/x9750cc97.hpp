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
	constexpr static std::string_view x9750cc97_type_name = "x9750cc97";
	constexpr static rivet::rivet_type_id x9750cc97_type_id = 0x9750cc97;

	constexpr static std::array<std::string_view, 3> x9750cc97_values = {
		"kLoadAll",
		"kLoadNone",
		"kLoadMarked", 
	};

	enum class x9750cc97 : uint64_t {
		Load_All,
		Load_None,
		Load_Marked, 
	};
} // namespace rivet::ddl::generated

// clang-format on
