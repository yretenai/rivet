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
	constexpr static std::string_view xd00d73b0_type_name = "xd00d73b0";
	constexpr static rivet::rivet_type_id xd00d73b0_type_id = 0xd00d73b0;

	constexpr static std::array<std::tuple<std::string_view, uint64_t>, 7> xd00d73b0_values = {
		std::make_tuple("kFlagDefaultLoadoutApplied", 0x1),
		std::make_tuple("kFlagInitialCharacterPicked", 0x2),
		std::make_tuple("kFlagInitialVanityApplied", 0x4),
		std::make_tuple("kFlagVulgarityWarningShown", 0x8),
		std::make_tuple("kFlagUnlockedMultiplayer", 0x10),
		std::make_tuple("kFlagHasDLC1", 0x20),
		std::make_tuple("kFlagHasDLC2", 0x40), 
	};

	enum class xd00d73b0 : uint64_t {
		FlagDefaultLoadoutApplied = 0x1,
		FlagInitialCharacterPicked = 0x2,
		FlagInitialVanityApplied = 0x4,
		FlagVulgarityWarningShown = 0x8,
		FlagUnlockedMultiplayer = 0x10,
		FlagHasDLC1 = 0x20,
		FlagHasDLC2 = 0x40, 
	};
} // namespace rivet::ddl::generated

// clang-format on
