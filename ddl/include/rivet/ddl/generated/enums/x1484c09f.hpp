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
	constexpr static std::string_view x1484c09f_type_name = "x1484c09f";
	constexpr static rivet::rivet_type_id x1484c09f_type_id = 0x1484c09f;

	constexpr static std::array<std::string_view, 6> x1484c09f_values = {
		"kLocators",
		"kBox",
		"kSphere",
		"kSphere75pc",
		"kSphere50pc",
		"kSphere25pc", 
	};

	enum class x1484c09f : uint64_t {
		Locators,
		Bound_Box,
		Bound_Sphere,
		Sphere75pc,
		Sphere50pc,
		Sphere25pc, 
	};
} // namespace rivet::ddl::generated

// clang-format on
