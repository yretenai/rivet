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
	constexpr static std::string_view ActorFilterTypes_type_name = "ActorFilterTypes";
	constexpr static rivet::rivet_type_id ActorFilterTypes_type_id = 0x3b1d202a;

	constexpr static std::array<std::tuple<std::string_view, uint64_t>, 4> ActorFilterTypes_values = {
		std::make_tuple("kHero", 0x1),
		std::make_tuple("kLocalHero", 0x2),
		std::make_tuple("kBot", 0x4),
		std::make_tuple("kBreakable", 0x8), 
	};

	enum class ActorFilterTypes : uint64_t {
		Hero = 0x1,
		LocalHero = 0x2,
		Bot = 0x4,
		Breakable = 0x8, 
	};
} // namespace rivet::ddl::generated

// clang-format on
