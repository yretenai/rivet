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
	constexpr static std::string_view GamepadEnableMode_type_name = "GamepadEnableMode";
	constexpr static rivet::rivet_type_id GamepadEnableMode_type_id = 0xcfd4e774;

	constexpr static std::array<std::string_view, 4> GamepadEnableMode_values = {
		"kNever",
		"kAlways",
		"kApplicationFocus",
		"k3DViewFocus", 
	};

	enum class GamepadEnableMode : uint64_t {
		Never,
		Always,
		ApplicationFocus,
		k3DViewFocus, 
	};
} // namespace rivet::ddl::generated

// clang-format on
