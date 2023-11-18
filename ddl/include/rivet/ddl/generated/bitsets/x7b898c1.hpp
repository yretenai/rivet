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
	constexpr static std::string_view x7b898c1_type_name = "x7b898c1";
	constexpr static rivet::rivet_type_id x7b898c1_type_id = 0x7b898c1;

	constexpr static std::array<std::tuple<std::string_view, uint64_t>, 4> x7b898c1_values = {
		std::make_tuple("kNull", 0x0),
		std::make_tuple("kInvulnerable", 0x1),
		std::make_tuple("kImmortal", 0x2),
		std::make_tuple("kInjuryAllow", 0x4), 
	};

	enum class x7b898c1 : uint64_t {
		Null = 0x0,
		Invulnerable = 0x1,
		Immortal = 0x2,
		InjuryAllow = 0x4, 
	};
} // namespace rivet::ddl::generated

// clang-format on
