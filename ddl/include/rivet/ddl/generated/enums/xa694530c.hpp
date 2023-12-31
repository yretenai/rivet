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
	constexpr static std::string_view xa694530c_type_name = "xa694530c";
	constexpr static rivet::rivet_type_id xa694530c_type_id = 0xa694530c;

	constexpr static std::array<std::string_view, 3> xa694530c_values = {
		"kDisabled",
		"kLow",
		"kHigh", 
	};

	constexpr static std::array<std::string_view, 3> xa694530c_labels = {
		"Disabled",
		"Low",
		"High", 
	};

	enum class xa694530c : uint64_t {
		Disabled,
		Low,
		High, 
	};
} // namespace rivet::ddl::generated

// clang-format on
