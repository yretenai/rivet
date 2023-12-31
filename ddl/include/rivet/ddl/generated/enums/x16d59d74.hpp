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
	constexpr static std::string_view x16d59d74_type_name = "x16d59d74";
	constexpr static rivet::rivet_type_id x16d59d74_type_id = 0x16d59d74;

	constexpr static std::array<std::string_view, 2> x16d59d74_values = {
		"kNone",
		"kAnnosoftSmoothing", 
	};

	constexpr static std::array<std::string_view, 2> x16d59d74_labels = {
		"None",
		"Annosoft Smoothing", 
	};

	enum class x16d59d74 : uint64_t {
		None,
		Annosoft_Smoothing, 
	};
} // namespace rivet::ddl::generated

// clang-format on
