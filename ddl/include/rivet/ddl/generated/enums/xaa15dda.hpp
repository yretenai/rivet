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
	constexpr static std::string_view xaa15dda_type_name = "xaa15dda";
	constexpr static rivet::rivet_type_id xaa15dda_type_id = 0xaa15dda;

	constexpr static std::array<std::string_view, 14> xaa15dda_values = {
		"kAny",
		"kOnlyBots",
		"kExcludeHeroes",
		"kOnlyHeroes",
		"kTargetable",
		"kCurve",
		"kOnlyModels",
		"kOnlySelectedCineActors",
		"kAnimComponent",
		"kConduitComponent",
		"kHasActivecloth",
		"kExcludeCameras",
		"kCameras",
		"kVolumes", 
	};

	enum class xaa15dda : uint64_t {
		Any,
		Only_Bots,
		Exclude_Heroes,
		Only_Heroes,
		Targetable,
		Curves,
		Only_Models,
		Only_Selected_Cine_Actors,
		Has_AnimComponent,
		Has_ConduitComponent,
		Has_Active_Cloth,
		Exclude_Cameras,
		Cameras,
		Volumes, 
	};
} // namespace rivet::ddl::generated

// clang-format on
