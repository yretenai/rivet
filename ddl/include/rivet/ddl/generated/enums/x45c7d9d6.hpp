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
	constexpr static std::string_view x45c7d9d6_type_name = "x45c7d9d6";
	constexpr static rivet::rivet_type_id x45c7d9d6_type_id = 0x45c7d9d6;

	constexpr static std::array<std::string_view, 6> x45c7d9d6_values = {
		"kNone",
		"kSATA300",
		"kFastHDD",
		"kHDD",
		"kSlowHDD",
		"kOptical", 
	};

	constexpr static std::array<std::string_view, 6> x45c7d9d6_labels = {
		"None",
		"SATA300",
		"Fast HDD",
		"Regular HDD",
		"Slow HDD",
		"Optical drive", 
	};

	enum class x45c7d9d6 : uint64_t {
		None,
		SATA300,
		Fast_HDD,
		Regular_HDD,
		Slow_HDD,
		Optical_drive, 
	};
} // namespace rivet::ddl::generated

// clang-format on
