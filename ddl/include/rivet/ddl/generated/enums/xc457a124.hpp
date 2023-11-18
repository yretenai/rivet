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
	constexpr static std::string_view xc457a124_type_name = "xc457a124";
	constexpr static rivet::rivet_type_id xc457a124_type_id = 0xc457a124;

	constexpr static std::array<std::string_view, 6> xc457a124_values = {
		"kNone",
		"kVanity",
		"kWeapon",
		"kGameplay",
		"kVendorSetVanity",
		"kAll", 
	};

	enum class xc457a124 : uint64_t {
		None,
		Vanity,
		Weapon,
		Gameplay,
		VendorSetVanity,
		All, 
	};
} // namespace rivet::ddl::generated

// clang-format on
