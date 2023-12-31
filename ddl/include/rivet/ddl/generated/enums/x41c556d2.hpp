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
	constexpr static std::string_view x41c556d2_type_name = "x41c556d2";
	constexpr static rivet::rivet_type_id x41c556d2_type_id = 0x41c556d2;

	constexpr static std::array<std::string_view, 3> x41c556d2_values = {
		"kWiredOverlay",
		"kFilled",
		"kWireframe", 
	};

	constexpr static std::array<std::string_view, 3> x41c556d2_labels = {
		"NONE",
		"NONE",
		"NONE", 
	};

	enum class x41c556d2 : uint64_t {
		WiredOverlay,
		Filled,
		Wireframe, 
	};
} // namespace rivet::ddl::generated

// clang-format on
