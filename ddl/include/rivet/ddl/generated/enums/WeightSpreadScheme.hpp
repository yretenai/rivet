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
	constexpr const static std::string_view WeightSpreadScheme_type_name = "WeightSpreadScheme";
	constexpr const static rivet::rivet_type_id WeightSpreadScheme_type_id = 0xab2ca92f;

	constexpr const static std::array<std::string_view, 3> WeightSpreadScheme_values = {
		"kEvenSpread",
		"kFavorBaseOfChain",
		"kFavorEndOfChain", 
	};

	enum class WeightSpreadScheme : uint64_t {
		EvenSpread,
		FavorBaseOfChain,
		FavorEndOfChain, 
	};
} // namespace rivet::ddl::generated

// clang-format on
