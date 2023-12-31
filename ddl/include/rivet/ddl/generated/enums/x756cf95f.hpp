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
	constexpr static std::string_view x756cf95f_type_name = "x756cf95f";
	constexpr static rivet::rivet_type_id x756cf95f_type_id = 0x756cf95f;

	constexpr static std::array<std::string_view, 14> x756cf95f_values = {
		"kCampaignEasyDifficulty",
		"kCampaignEasyDifficulty2Players",
		"kCampaignNormalDifficulty",
		"kCampaignNormalDifficulty2Players",
		"kCampaignHardDifficulty",
		"kCampaignHardDifficulty2Players",
		"kChallengeMode",
		"k2Deaths",
		"k3Deaths",
		"k4Deaths",
		"k5Deaths",
		"kAny",
		"kCampaignHardestDifficulty",
		"kCampaignHardestDifficulty2Players", 
	};

	constexpr static std::array<std::string_view, 14> x756cf95f_labels = {
		"Campaign Easy Difficulty 1 or more Players",
		"Campaign Easy Difficulty 2 or more Players",
		"Campaign Normal Difficulty 1 or more Players",
		"Campaign Normal Difficulty 2 or more Players",
		"Campaign Hard Difficulty 1 or more Players",
		"Campaign Hard Difficulty 2 or more Players",
		"Challenge Mode mods",
		"Died 2+ times",
		"Died 3+ times",
		"Died 4+ times",
		"Died 5+ times",
		"Always used",
		"Campaign Hardest Difficulty 1 or more Players",
		"Campaign Hardest Difficulty 2 or more Players", 
	};

	enum class x756cf95f : uint64_t {
		Campaign_Easy_Difficulty_1_or_more_Players,
		Campaign_Easy_Difficulty_2_or_more_Players,
		Campaign_Normal_Difficulty_1_or_more_Players,
		Campaign_Normal_Difficulty_2_or_more_Players,
		Campaign_Hard_Difficulty_1_or_more_Players,
		Campaign_Hard_Difficulty_2_or_more_Players,
		Challenge_Mode_mods,
		k2Deaths,
		k3Deaths,
		k4Deaths,
		k5Deaths,
		Always_used,
		Campaign_Hardest_Difficulty_1_or_more_Players,
		Campaign_Hardest_Difficulty_2_or_more_Players, 
	};
} // namespace rivet::ddl::generated

// clang-format on
