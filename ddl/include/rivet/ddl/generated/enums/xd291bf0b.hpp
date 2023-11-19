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
	constexpr static std::string_view xd291bf0b_type_name = "xd291bf0b";
	constexpr static rivet::rivet_type_id xd291bf0b_type_id = 0xd291bf0b;

	constexpr static std::array<std::string_view, 5> xd291bf0b_values = {
		"kOverrideOcean",
		"kLocalWater",
		"kOcean",
		"kHole",
		"kRiver", 
	};

	constexpr static std::array<std::string_view, 5> xd291bf0b_labels = {
		"Override Ocean",
		"Local Water",
		"Ocean",
		"Hole",
		"River", 
	};

	enum class xd291bf0b : uint64_t {
		Override_Ocean,
		Local_Water,
		Ocean,
		Hole,
		River, 
	};
} // namespace rivet::ddl::generated

// clang-format on