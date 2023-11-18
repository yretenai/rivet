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
	constexpr static std::string_view SwipeScale_type_name = "SwipeScale";
	constexpr static rivet::rivet_type_id SwipeScale_type_id = 0x2150ae07;

	constexpr static std::array<std::string_view, 2> SwipeScale_values = {
		"kOrigin",
		"kCenter", 
	};

	enum class SwipeScale : uint64_t {
		Origin,
		Center, 
	};
} // namespace rivet::ddl::generated

// clang-format on
