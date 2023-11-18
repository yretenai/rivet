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
	constexpr static std::string_view SoundLogChannels_type_name = "SoundLogChannels";
	constexpr static rivet::rivet_type_id SoundLogChannels_type_id = 0x57da0a80;

	constexpr static std::array<std::string_view, 3> SoundLogChannels_values = {
		"kSoundLogChannelWwise",
		"kSoundLogChannelEngine",
		"kSoundLogChannelAll", 
	};

	enum class SoundLogChannels : uint64_t {
		SoundLogChannelWwise,
		SoundLogChannelEngine,
		SoundLogChannelAll, 
	};
} // namespace rivet::ddl::generated

// clang-format on
