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
	constexpr static std::string_view xef932fba_type_name = "xef932fba";
	constexpr static rivet::rivet_type_id xef932fba_type_id = 0xef932fba;

	constexpr static std::array<std::string_view, 8> xef932fba_values = {
		"kNone",
		"kMeleeAttack1",
		"kMeleeAttack2",
		"kMeleeAttack3",
		"kMeleeSmashDescend",
		"kMeleeSmashSlam",
		"kMeleeOnGrind",
		"kMeleeHoverboot", 
	};

	constexpr static std::array<std::string_view, 8> xef932fba_labels = {
		"None",
		"Attack 1",
		"Attack 2",
		"Attack 3",
		"Smash Descend",
		"Smash Slam",
		"Melee On Grind",
		"Melee Hoverboot", 
	};

	enum class xef932fba : uint64_t {
		None,
		Attack_1,
		Attack_2,
		Attack_3,
		Smash_Descend,
		Smash_Slam,
		Melee_On_Grind,
		Melee_Hoverboot, 
	};
} // namespace rivet::ddl::generated

// clang-format on
