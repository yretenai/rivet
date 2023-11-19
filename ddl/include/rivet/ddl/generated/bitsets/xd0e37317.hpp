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
	constexpr static std::string_view xd0e37317_type_name = "xd0e37317";
	constexpr static rivet::rivet_type_id xd0e37317_type_id = 0xd0e37317;

	constexpr static std::array<std::tuple<std::string_view, uint64_t>, 3> xd0e37317_values = {
		std::make_tuple("kAllBots", 0x1),
		std::make_tuple("kShallowWater", 0x2),
		std::make_tuple("kDeepWater", 0x4), 
	};

	enum class xd0e37317 : uint64_t {
		AllBots = 0x1,
		ShallowWater = 0x2,
		DeepWater = 0x4, 
	};
} // namespace rivet::ddl::generated

// clang-format on