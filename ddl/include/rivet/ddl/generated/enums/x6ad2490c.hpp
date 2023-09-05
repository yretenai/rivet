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
	constexpr const static std::string_view x6ad2490c_type_name = "x6ad2490c";
	constexpr const static rivet::rivet_type_id x6ad2490c_type_id = 0x6ad2490c;

	constexpr const static std::array<std::string_view, 2> x6ad2490c_values = {
		"kFixed",
		"kDownhill", 
	};

	enum class x6ad2490c : uint64_t {
		Fixed_angle,
		Face_downhill, 
	};
} // namespace rivet::ddl::generated

// clang-format on
