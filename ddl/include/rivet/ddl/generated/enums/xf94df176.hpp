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
	constexpr static std::string_view xf94df176_type_name = "xf94df176";
	constexpr static rivet::rivet_type_id xf94df176_type_id = 0xf94df176;

	constexpr static std::array<std::string_view, 7> xf94df176_values = {
		"kFollower",
		"kPitchSettle",
		"kGrindFacing",
		"kUserLookAt",
		"kSprintForward",
		"kIdealFacing",
		"kDefault", 
	};

	constexpr static std::array<std::string_view, 7> xf94df176_labels = {
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE", 
	};

	enum class xf94df176 : uint64_t {
		Follower,
		PitchSettle,
		GrindFacing,
		UserLookAt,
		SprintForward,
		IdealFacing,
		Default, 
	};
} // namespace rivet::ddl::generated

// clang-format on