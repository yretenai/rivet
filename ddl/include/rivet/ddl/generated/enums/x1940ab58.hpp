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
	constexpr static std::string_view x1940ab58_type_name = "x1940ab58";
	constexpr static rivet::rivet_type_id x1940ab58_type_id = 0x1940ab58;

	constexpr static std::array<std::string_view, 4> x1940ab58_values = {
		"kCollisionOn",
		"kCollisionOff",
		"kIgnoreCharacterMove",
		"kEnableCharacterMove", 
	};

	constexpr static std::array<std::string_view, 4> x1940ab58_labels = {
		"NONE",
		"NONE",
		"NONE",
		"NONE", 
	};

	enum class x1940ab58 : uint64_t {
		CollisionOn,
		CollisionOff,
		IgnoreCharacterMove,
		EnableCharacterMove, 
	};
} // namespace rivet::ddl::generated

// clang-format on
