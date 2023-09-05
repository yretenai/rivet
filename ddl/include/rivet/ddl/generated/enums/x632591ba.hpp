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
	constexpr const static std::string_view x632591ba_type_name = "x632591ba";
	constexpr const static rivet::rivet_type_id x632591ba_type_id = 0x632591ba;

	constexpr const static std::array<std::string_view, 2> x632591ba_values = {
		"kCycleShots",
		"kAllShots", 
	};

	enum class x632591ba : uint64_t {
		CycleShots,
		AllShots, 
	};
} // namespace rivet::ddl::generated

// clang-format on
