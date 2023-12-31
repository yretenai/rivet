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
	constexpr static std::string_view x18f892a3_type_name = "x18f892a3";
	constexpr static rivet::rivet_type_id x18f892a3_type_id = 0x18f892a3;

	constexpr static std::array<std::string_view, 3> x18f892a3_values = {
		"kConstant",
		"kColor",
		"kTexture", 
	};

	constexpr static std::array<std::string_view, 3> x18f892a3_labels = {
		"NONE",
		"NONE",
		"NONE", 
	};

	enum class x18f892a3 : uint64_t {
		Constant,
		Color,
		Texture, 
	};
} // namespace rivet::ddl::generated

// clang-format on
