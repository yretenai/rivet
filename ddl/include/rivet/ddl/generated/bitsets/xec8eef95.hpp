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
	constexpr static std::string_view xec8eef95_type_name = "xec8eef95";
	constexpr static rivet::rivet_type_id xec8eef95_type_id = 0xec8eef95;

	constexpr static std::array<std::tuple<std::string_view, uint64_t>, 6> xec8eef95_values = {
		std::make_tuple("LowOver", 0x1),
		std::make_tuple("LowLeft", 0x2),
		std::make_tuple("LowRight", 0x4),
		std::make_tuple("HighLeft", 0x8),
		std::make_tuple("HighRight", 0x10),
		std::make_tuple("NoCover", 0x20), 
	};

	enum class xec8eef95 : uint64_t {
		LowOver = 0x1,
		LowLeft = 0x2,
		LowRight = 0x4,
		HighLeft = 0x8,
		HighRight = 0x10,
		NoCover = 0x20, 
	};
} // namespace rivet::ddl::generated

// clang-format on
