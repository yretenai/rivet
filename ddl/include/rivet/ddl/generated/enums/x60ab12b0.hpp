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
	constexpr static std::string_view x60ab12b0_type_name = "x60ab12b0";
	constexpr static rivet::rivet_type_id x60ab12b0_type_id = 0x60ab12b0;

	constexpr static std::array<std::string_view, 3> x60ab12b0_values = {
		"kNone",
		"kDefaultWeaponAim",
		"kDefaultWeaponFire", 
	};

	constexpr static std::array<std::string_view, 3> x60ab12b0_labels = {
		"NONE",
		"NONE",
		"NONE", 
	};

	enum class x60ab12b0 : uint64_t {
		None,
		DefaultWeaponAim,
		DefaultWeaponFire, 
	};
} // namespace rivet::ddl::generated

// clang-format on