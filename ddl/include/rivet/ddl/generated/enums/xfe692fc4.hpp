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
	constexpr static std::string_view xfe692fc4_type_name = "xfe692fc4";
	constexpr static rivet::rivet_type_id xfe692fc4_type_id = 0xfe692fc4;

	constexpr static std::array<std::string_view, 3> xfe692fc4_values = {
		"kHitNormal",
		"kInverseFacing",
		"kLocatorFacing", 
	};

	constexpr static std::array<std::string_view, 3> xfe692fc4_labels = {
		"Hit Normal",
		"Inverse Facing",
		"Locator Facing", 
	};

	enum class xfe692fc4 : uint64_t {
		Hit_Normal,
		Inverse_Facing,
		Locator_Facing, 
	};
} // namespace rivet::ddl::generated

// clang-format on
