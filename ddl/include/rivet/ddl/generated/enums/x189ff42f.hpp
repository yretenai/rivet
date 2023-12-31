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
	constexpr static std::string_view x189ff42f_type_name = "x189ff42f";
	constexpr static rivet::rivet_type_id x189ff42f_type_id = 0x189ff42f;

	constexpr static std::array<std::string_view, 3> x189ff42f_values = {
		"kWeapons",
		"kArmor",
		"kGear", 
	};

	constexpr static std::array<std::string_view, 3> x189ff42f_labels = {
		"Weapons",
		"Armor",
		"Gear", 
	};

	enum class x189ff42f : uint64_t {
		Weapons,
		Armor,
		Gear, 
	};
} // namespace rivet::ddl::generated

// clang-format on
