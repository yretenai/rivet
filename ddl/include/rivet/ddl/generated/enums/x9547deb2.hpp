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
	constexpr static std::string_view x9547deb2_type_name = "x9547deb2";
	constexpr static rivet::rivet_type_id x9547deb2_type_id = 0x9547deb2;

	constexpr static std::array<std::string_view, 2> x9547deb2_values = {
		"kCharacter",
		"kWorld", 
	};

	constexpr static std::array<std::string_view, 2> x9547deb2_labels = {
		"Write to speaking character's memory",
		"Write to world memory for all characters", 
	};

	enum class x9547deb2 : uint64_t {
		Character,
		Write_to_world_memory_for_all_characters, 
	};
} // namespace rivet::ddl::generated

// clang-format on
