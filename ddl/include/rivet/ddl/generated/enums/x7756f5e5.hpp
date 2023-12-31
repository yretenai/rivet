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
	constexpr static std::string_view x7756f5e5_type_name = "x7756f5e5";
	constexpr static rivet::rivet_type_id x7756f5e5_type_id = 0x7756f5e5;

	constexpr static std::array<std::string_view, 10> x7756f5e5_values = {
		"kActivateTracks",
		"kLoad",
		"kMuteTracks",
		"kPause",
		"kPlay",
		"kSetCinematic2Options",
		"kSetTime",
		"kSetTransform",
		"kSoloTracks",
		"kUpdateCinematic2Def", 
	};

	constexpr static std::array<std::string_view, 10> x7756f5e5_labels = {
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE", 
	};

	enum class x7756f5e5 : uint64_t {
		ActivateTracks,
		Load,
		MuteTracks,
		Pause,
		Play,
		SetCinematic2Options,
		SetTime,
		SetTransform,
		SoloTracks,
		UpdateCinematic2Def, 
	};
} // namespace rivet::ddl::generated

// clang-format on
