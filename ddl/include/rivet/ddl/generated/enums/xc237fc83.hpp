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
	constexpr const static std::string_view xc237fc83_type_name = "xc237fc83";
	constexpr const static rivet::rivet_type_id xc237fc83_type_id = 0xc237fc83;

	constexpr const static std::array<std::string_view, 2> xc237fc83_values = {
		"kNone",
		"kNoSpawnOnEnd", 
	};

	enum class xc237fc83 : uint64_t {
		None,
		Dont_Spawn_when_starting_in_End_mode, 
	};
} // namespace rivet::ddl::generated

// clang-format on
