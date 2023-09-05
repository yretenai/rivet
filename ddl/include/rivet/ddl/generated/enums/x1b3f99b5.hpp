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
	constexpr const static std::string_view x1b3f99b5_type_name = "x1b3f99b5";
	constexpr const static rivet::rivet_type_id x1b3f99b5_type_id = 0x1b3f99b5;

	constexpr const static std::array<std::string_view, 13> x1b3f99b5_values = {
		"kSlotHeadActor",
		"kSlotColor",
		"kSlotFeet",
		"kSlotLegLower",
		"kSlotLegUpper",
		"kSlotTorsoLower",
		"kSlotTorsoUpper",
		"kSlotArmLower",
		"kSlotArmUpper",
		"kSlotHands",
		"kSlotHead",
		"kSlotHat",
		"kSlotHair", 
	};

	enum class x1b3f99b5 : uint64_t {
		Head_actor_or_variant,
		SlotColor,
		Feet,
		Leg_Lower,
		Leg_Upper,
		Torso_Lower,
		Torso_Upper,
		Arm_Lower,
		Arm_Upper,
		Hands,
		Head_and_Face,
		Hats_and_Helmets,
		Hair, 
	};
} // namespace rivet::ddl::generated

// clang-format on
