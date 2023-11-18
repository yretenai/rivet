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
	constexpr static std::string_view x464e86be_type_name = "x464e86be";
	constexpr static rivet::rivet_type_id x464e86be_type_id = 0x464e86be;

	constexpr static std::array<std::string_view, 3> x464e86be_values = {
		"kBatchedStatic",
		"kDynamicProximty",
		"kDynamicNoProximity", 
	};

	enum class x464e86be : uint64_t {
		Batched_Static,
		Dynamic_Proximity,
		Dynamic_No_Proximity, 
	};
} // namespace rivet::ddl::generated

// clang-format on
