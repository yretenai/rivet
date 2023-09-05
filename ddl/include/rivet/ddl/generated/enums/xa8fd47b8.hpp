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
	constexpr const static std::string_view xa8fd47b8_type_name = "xa8fd47b8";
	constexpr const static rivet::rivet_type_id xa8fd47b8_type_id = 0xa8fd47b8;

	constexpr const static std::array<std::string_view, 8> xa8fd47b8_values = {
		"kNone",
		"kXAxis",
		"kYAxis",
		"kZAxis",
		"kOrbit",
		"kSphere",
		"kRotation",
		"kLast", 
	};

	enum class xa8fd47b8 : uint64_t {
		None,
		XAxis,
		YAxis,
		ZAxis,
		Orbit,
		Sphere,
		Rotation,
		Last, 
	};
} // namespace rivet::ddl::generated

// clang-format on
