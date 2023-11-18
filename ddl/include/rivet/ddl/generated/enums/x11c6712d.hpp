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
	constexpr static std::string_view x11c6712d_type_name = "x11c6712d";
	constexpr static rivet::rivet_type_id x11c6712d_type_id = 0x11c6712d;

	constexpr static std::array<std::string_view, 8> x11c6712d_values = {
		"kStatic",
		"kStaticCanBeDisabled",
		"kKeyFramed",
		"kKeyFramedNonInteract",
		"kDynamic",
		"kDebris",
		"kDebrisFast",
		"kFluid", 
	};

	enum class x11c6712d : uint64_t {
		Static,
		StaticCanBeDisabled,
		KeyFramed,
		KeyFramedNonInteract,
		Dynamic,
		Debris,
		DebrisFast,
		Fluid, 
	};
} // namespace rivet::ddl::generated

// clang-format on
