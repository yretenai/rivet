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
	constexpr static std::string_view x4d26e880_type_name = "x4d26e880";
	constexpr static rivet::rivet_type_id x4d26e880_type_id = 0x4d26e880;

	constexpr static std::array<std::string_view, 3> x4d26e880_values = {
		"kNone",
		"kLoop",
		"kLast", 
	};

	constexpr static std::array<std::string_view, 3> x4d26e880_labels = {
		"No More Signals",
		"Loop to First Signal",
		"Continue Last Signal", 
	};

	enum class x4d26e880 : uint64_t {
		No_More_Signals,
		Loop_to_First_Signal,
		Continue_Last_Signal, 
	};
} // namespace rivet::ddl::generated

// clang-format on
