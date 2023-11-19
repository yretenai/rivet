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
	constexpr static std::string_view x3234dd4a_type_name = "x3234dd4a";
	constexpr static rivet::rivet_type_id x3234dd4a_type_id = 0x3234dd4a;

	constexpr static std::array<std::string_view, 2> x3234dd4a_values = {
		"kGridNodeTypeDefault",
		"kGridNodeTypeCombineAdditive", 
	};

	constexpr static std::array<std::string_view, 2> x3234dd4a_labels = {
		"Default",
		"Combine-additive", 
	};

	enum class x3234dd4a : uint64_t {
		Default,
		GridNodeTypeCombineAdditive, 
	};
} // namespace rivet::ddl::generated

// clang-format on