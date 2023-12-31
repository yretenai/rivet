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
	constexpr static std::string_view x2a6b461b_type_name = "x2a6b461b";
	constexpr static rivet::rivet_type_id x2a6b461b_type_id = 0x2a6b461b;

	constexpr static std::array<std::string_view, 4> x2a6b461b_values = {
		"kGoldBolt",
		"kRynoPlan",
		"kRuinToken",
		"kVanity", 
	};

	constexpr static std::array<std::string_view, 4> x2a6b461b_labels = {
		"NONE",
		"NONE",
		"NONE",
		"NONE", 
	};

	enum class x2a6b461b : uint64_t {
		GoldBolt,
		RynoPlan,
		RuinToken,
		Vanity, 
	};
} // namespace rivet::ddl::generated

// clang-format on
