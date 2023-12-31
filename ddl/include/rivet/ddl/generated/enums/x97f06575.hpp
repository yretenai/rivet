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
	constexpr static std::string_view x97f06575_type_name = "x97f06575";
	constexpr static rivet::rivet_type_id x97f06575_type_id = 0x97f06575;

	constexpr static std::array<std::string_view, 3> x97f06575_values = {
		"Unresponded",
		"Continue",
		"Stop", 
	};

	constexpr static std::array<std::string_view, 3> x97f06575_labels = {
		"Unresponded Systems",
		"Continue All",
		"Stop All", 
	};

	enum class x97f06575 : uint64_t {
		Unresponded_Systems,
		Continue_All,
		Stop_All, 
	};
} // namespace rivet::ddl::generated

// clang-format on
