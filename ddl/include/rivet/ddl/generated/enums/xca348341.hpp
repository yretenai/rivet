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
	constexpr static std::string_view xca348341_type_name = "xca348341";
	constexpr static rivet::rivet_type_id xca348341_type_id = 0xca348341;

	constexpr static std::array<std::string_view, 9> xca348341_values = {
		"kNone",
		"kBodyMenu",
		"kCategoryMenu",
		"kHeadMenu",
		"kTorsoMenu",
		"kLegsMenu",
		"kMeleeMenu",
		"kSetsMenu",
		"kFaceMenu", 
	};

	constexpr static std::array<std::string_view, 9> xca348341_labels = {
		"None",
		"Body Menu",
		"Category Menu",
		"Head Menu",
		"Torso Menu",
		"Legs Menu",
		"Melee Weapons Menu",
		"Sets Menu",
		"Face Menu", 
	};

	enum class xca348341 : uint64_t {
		None,
		Body_Menu,
		Category_Menu,
		Head_Menu,
		Torso_Menu,
		Legs_Menu,
		Melee_Weapons_Menu,
		Sets_Menu,
		Face_Menu, 
	};
} // namespace rivet::ddl::generated

// clang-format on