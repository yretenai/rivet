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
	constexpr static std::string_view xf20c2999_type_name = "xf20c2999";
	constexpr static rivet::rivet_type_id xf20c2999_type_id = 0xf20c2999;

	constexpr static std::array<std::string_view, 5> xf20c2999_values = {
		"kNone",
		"kListUIType",
		"kColorGridUIType",
		"kTextureGridUIType",
		"kModelDisplayUIType", 
	};

	enum class xf20c2999 : uint64_t {
		None,
		List_UI_Type,
		Color_Grid_UI_Type,
		Texture_Grid_UI_Type,
		Model_Display_UI_Type, 
	};
} // namespace rivet::ddl::generated

// clang-format on
