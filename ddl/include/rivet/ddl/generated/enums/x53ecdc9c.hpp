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
	constexpr static std::string_view x53ecdc9c_type_name = "x53ecdc9c";
	constexpr static rivet::rivet_type_id x53ecdc9c_type_id = 0x53ecdc9c;

	constexpr static std::array<std::string_view, 6> x53ecdc9c_values = {
		"kNone",
		"kSwarmer",
		"kMelee",
		"kShooter",
		"kHeavy",
		"kSpecial", 
	};

	constexpr static std::array<std::string_view, 6> x53ecdc9c_labels = {
		"None",
		"Swarmer",
		"Melee",
		"Shooter",
		"Heavy",
		"Special", 
	};

	enum class x53ecdc9c : uint64_t {
		None,
		Swarmer,
		Melee,
		Shooter,
		Heavy,
		Special, 
	};
} // namespace rivet::ddl::generated

// clang-format on
