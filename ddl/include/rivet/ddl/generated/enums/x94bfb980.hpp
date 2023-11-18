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
	constexpr static std::string_view x94bfb980_type_name = "x94bfb980";
	constexpr static rivet::rivet_type_id x94bfb980_type_id = 0x94bfb980;

	constexpr static std::array<std::string_view, 15> x94bfb980_values = {
		"kEnemy",
		"kHero",
		"kFriendly",
		"kBase",
		"kObjective",
		"kSecurity",
		"kQuestGiver",
		"kAreaOfInterest",
		"kChallengeStart",
		"kRSCustom1",
		"kRSCustom2",
		"kRSCustom3",
		"kRSCustom4",
		"kRSCustom5",
		"kRSCustom6", 
	};

	enum class x94bfb980 : uint64_t {
		Enemy,
		Hero,
		Friendly,
		Base,
		Objective,
		Security,
		QuestGiver,
		AreaOfInterest,
		ChallengeStart,
		RSCustom1,
		RSCustom2,
		RSCustom3,
		RSCustom4,
		RSCustom5,
		RSCustom6, 
	};
} // namespace rivet::ddl::generated

// clang-format on
