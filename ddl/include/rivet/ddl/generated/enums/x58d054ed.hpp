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
	constexpr const static std::string_view x58d054ed_type_name = "x58d054ed";
	constexpr const static rivet::rivet_type_id x58d054ed_type_id = 0x58d054ed;

	constexpr const static std::array<std::string_view, 10> x58d054ed_values = {
		"kInputFire",
		"kInputAltFire",
		"kInputReload",
		"kInputZoom",
		"kInputThrow",
		"kInputBlock",
		"kInputMoveX",
		"kInputMoveY",
		"kInputWebLine",
		"kNone", 
	};

	enum class x58d054ed : uint64_t {
		InputFire,
		InputAltFire,
		InputReload,
		InputZoom,
		InputThrow,
		InputBlock,
		InputMoveX,
		InputMoveY,
		InputWebLine,
		None, 
	};
} // namespace rivet::ddl::generated

// clang-format on
