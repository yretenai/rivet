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
	constexpr static std::string_view x59a8501f_type_name = "x59a8501f";
	constexpr static rivet::rivet_type_id x59a8501f_type_id = 0x59a8501f;

	constexpr static std::array<std::string_view, 2> x59a8501f_values = {
		"kFullLength",
		"kPerMeter", 
	};

	constexpr static std::array<std::string_view, 2> x59a8501f_labels = {
		"Full Length",
		"Per-Meter", 
	};

	enum class x59a8501f : uint64_t {
		Full_Length,
		PerMeter, 
	};
} // namespace rivet::ddl::generated

// clang-format on