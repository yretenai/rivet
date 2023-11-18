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
	constexpr static std::string_view ToggleType_type_name = "ToggleType";
	constexpr static rivet::rivet_type_id ToggleType_type_id = 0xf3b79606;

	constexpr static std::array<std::string_view, 3> ToggleType_values = {
		"kTurnOn",
		"kTurnOff",
		"kToggle", 
	};

	enum class ToggleType : uint64_t {
		TurnOn,
		TurnOff,
		Toggle, 
	};
} // namespace rivet::ddl::generated

// clang-format on
