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
	constexpr static std::string_view x87e08126_type_name = "x87e08126";
	constexpr static rivet::rivet_type_id x87e08126_type_id = 0x87e08126;

	constexpr static std::array<std::tuple<std::string_view, uint64_t>, 3> x87e08126_values = {
		std::make_tuple("kNone", 0x0),
		std::make_tuple("kImmortal", 0x1),
		std::make_tuple("kInvulnerable", 0x2), 
	};

	enum class x87e08126 : uint64_t {
		None = 0x0,
		Immortal = 0x1,
		Invulnerable = 0x2, 
	};
} // namespace rivet::ddl::generated

// clang-format on
