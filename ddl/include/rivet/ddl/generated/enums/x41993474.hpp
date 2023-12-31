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
	constexpr static std::string_view x41993474_type_name = "x41993474";
	constexpr static rivet::rivet_type_id x41993474_type_id = 0x41993474;

	constexpr static std::array<std::string_view, 3> x41993474_values = {
		"kNormal",
		"kHidden",
		"kInherited", 
	};

	constexpr static std::array<std::string_view, 3> x41993474_labels = {
		"Normal",
		"Hidden",
		"Inherited from Parent", 
	};

	enum class x41993474 : uint64_t {
		Normal,
		Hidden,
		Inherited_from_Parent, 
	};
} // namespace rivet::ddl::generated

// clang-format on
