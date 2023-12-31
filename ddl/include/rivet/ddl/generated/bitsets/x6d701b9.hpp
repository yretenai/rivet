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
	constexpr static std::string_view x6d701b9_type_name = "x6d701b9";
	constexpr static rivet::rivet_type_id x6d701b9_type_id = 0x6d701b9;

	constexpr static std::array<std::tuple<std::string_view, uint64_t>, 2> x6d701b9_values = {
		std::make_tuple("kClipNodeFlagsIsAdditive", 0x1),
		std::make_tuple("kClipNodeFlagsUseLocalTime", 0x2), 
	};

	enum class x6d701b9 : uint64_t {
		ClipNodeFlagsIsAdditive = 0x1,
		ClipNodeFlagsUseLocalTime = 0x2, 
	};
} // namespace rivet::ddl::generated

// clang-format on
