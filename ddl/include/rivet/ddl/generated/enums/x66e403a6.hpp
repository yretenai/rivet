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
	constexpr static std::string_view x66e403a6_type_name = "x66e403a6";
	constexpr static rivet::rivet_type_id x66e403a6_type_id = 0x66e403a6;

	constexpr static std::array<std::string_view, 4> x66e403a6_values = {
		"kBolt",
		"kAmmo",
		"kHealth",
		"kNone", 
	};

	constexpr static std::array<std::string_view, 4> x66e403a6_labels = {
		"Bolt",
		"Ammo",
		"Health",
		"None", 
	};

	enum class x66e403a6 : uint64_t {
		Bolt,
		Ammo,
		Health,
		None, 
	};
} // namespace rivet::ddl::generated

// clang-format on