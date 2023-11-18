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
	constexpr static std::string_view x11d5b447_type_name = "x11d5b447";
	constexpr static rivet::rivet_type_id x11d5b447_type_id = 0x11d5b447;

	constexpr static std::array<std::string_view, 2> x11d5b447_values = {
		"kFixed",
		"kAlwaysFacing", 
	};

	enum class x11d5b447 : uint64_t {
		Fixed,
		Camera_facing, 
	};
} // namespace rivet::ddl::generated

// clang-format on
