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
	constexpr static std::string_view x8b42b541_type_name = "x8b42b541";
	constexpr static rivet::rivet_type_id x8b42b541_type_id = 0x8b42b541;

	constexpr static std::array<std::string_view, 2> x8b42b541_values = {
		"kSlow",
		"kFast", 
	};

	constexpr static std::array<std::string_view, 2> x8b42b541_labels = {
		"Slow",
		"Fast", 
	};

	enum class x8b42b541 : uint64_t {
		Slow,
		Fast, 
	};
} // namespace rivet::ddl::generated

// clang-format on
