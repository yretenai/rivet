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
	constexpr static std::string_view x9a2e0494_type_name = "x9a2e0494";
	constexpr static rivet::rivet_type_id x9a2e0494_type_id = 0x9a2e0494;

	constexpr static std::array<std::string_view, 2> x9a2e0494_values = {
		"kOffscreenHalf",
		"kOffscreenFull", 
	};

	constexpr static std::array<std::string_view, 2> x9a2e0494_labels = {
		"Offscreen Half",
		"Offscreen Full", 
	};

	enum class x9a2e0494 : uint64_t {
		Offscreen_Half,
		Offscreen_Full, 
	};
} // namespace rivet::ddl::generated

// clang-format on
