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
	constexpr static std::string_view x9833bb27_type_name = "x9833bb27";
	constexpr static rivet::rivet_type_id x9833bb27_type_id = 0x9833bb27;

	constexpr static std::array<std::string_view, 3> x9833bb27_values = {
		"kDoNotWarn",
		"kDynamicObjects",
		"kAllObjects", 
	};

	enum class x9833bb27 : uint64_t {
		Do_not_warn_for_excessive_collision,
		DynamicObjects,
		AllObjects, 
	};
} // namespace rivet::ddl::generated

// clang-format on
