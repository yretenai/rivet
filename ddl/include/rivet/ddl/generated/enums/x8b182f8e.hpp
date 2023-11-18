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
	constexpr static std::string_view x8b182f8e_type_name = "x8b182f8e";
	constexpr static rivet::rivet_type_id x8b182f8e_type_id = 0x8b182f8e;

	constexpr static std::array<std::string_view, 4> x8b182f8e_values = {
		"boot",
		"liveTile",
		"resume",
		"debugReboot", 
	};

	enum class x8b182f8e : uint64_t {
		boot,
		liveTile,
		resume,
		debugReboot, 
	};
} // namespace rivet::ddl::generated

// clang-format on
