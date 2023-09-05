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
	constexpr const static std::string_view xf12451bd_type_name = "xf12451bd";
	constexpr const static rivet::rivet_type_id xf12451bd_type_id = 0xf12451bd;

	constexpr const static std::array<std::string_view, 3> xf12451bd_values = {
		"kOffset",
		"kOrigin",
		"kRatio", 
	};

	enum class xf12451bd : uint64_t {
		Offset,
		Origin,
		Ratio, 
	};
} // namespace rivet::ddl::generated

// clang-format on
