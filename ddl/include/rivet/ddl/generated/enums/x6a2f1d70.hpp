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
	constexpr static std::string_view x6a2f1d70_type_name = "x6a2f1d70";
	constexpr static rivet::rivet_type_id x6a2f1d70_type_id = 0x6a2f1d70;

	constexpr static std::array<std::string_view, 4> x6a2f1d70_values = {
		"kPlaybackTypeOneShot",
		"kPlaybackTypeLooping",
		"kPlaybackTypeMixed",
		"kPlaybackTypeUnknown", 
	};

	constexpr static std::array<std::string_view, 4> x6a2f1d70_labels = {
		"NONE",
		"NONE",
		"NONE",
		"NONE", 
	};

	enum class x6a2f1d70 : uint64_t {
		PlaybackTypeOneShot,
		PlaybackTypeLooping,
		PlaybackTypeMixed,
		PlaybackTypeUnknown, 
	};
} // namespace rivet::ddl::generated

// clang-format on
