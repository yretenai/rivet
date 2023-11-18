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
	constexpr static std::string_view x8f9b9ab2_type_name = "x8f9b9ab2";
	constexpr static rivet::rivet_type_id x8f9b9ab2_type_id = 0x8f9b9ab2;

	constexpr static std::array<std::string_view, 3> x8f9b9ab2_values = {
		"kExperiential",
		"kFunctional",
		"kOff", 
	};

	enum class x8f9b9ab2 : uint64_t {
		Experiential,
		Functional,
		Off, 
	};
} // namespace rivet::ddl::generated

// clang-format on
