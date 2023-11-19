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
	constexpr static std::string_view x77402cb9_type_name = "x77402cb9";
	constexpr static rivet::rivet_type_id x77402cb9_type_id = 0x77402cb9;

	constexpr static std::array<std::string_view, 2> x77402cb9_values = {
		"kParentMode",
		"kFollowMode", 
	};

	constexpr static std::array<std::string_view, 2> x77402cb9_labels = {
		"Parent",
		"Follow", 
	};

	enum class x77402cb9 : uint64_t {
		Parent,
		Follow, 
	};
} // namespace rivet::ddl::generated

// clang-format on