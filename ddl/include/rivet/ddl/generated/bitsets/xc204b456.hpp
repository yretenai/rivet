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
	constexpr static std::string_view xc204b456_type_name = "xc204b456";
	constexpr static rivet::rivet_type_id xc204b456_type_id = 0xc204b456;

	constexpr static std::array<std::tuple<std::string_view, uint64_t>, 6> xc204b456_values = {
		std::make_tuple("Bit0", 0x1),
		std::make_tuple("Bit1", 0x2),
		std::make_tuple("Bit2", 0x4),
		std::make_tuple("Bit3", 0x8),
		std::make_tuple("Bit4", 0x10),
		std::make_tuple("Bit5", 0x20), 
	};

	enum class xc204b456 : uint64_t {
		Bit0 = 0x1,
		Bit1 = 0x2,
		Bit2 = 0x4,
		Bit3 = 0x8,
		Bit4 = 0x10,
		Bit5 = 0x20, 
	};
} // namespace rivet::ddl::generated

// clang-format on
