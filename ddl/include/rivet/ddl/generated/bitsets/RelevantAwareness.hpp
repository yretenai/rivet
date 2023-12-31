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
	constexpr static std::string_view RelevantAwareness_type_name = "RelevantAwareness";
	constexpr static rivet::rivet_type_id RelevantAwareness_type_id = 0x2575d3dc;

	constexpr static std::array<std::tuple<std::string_view, uint64_t>, 3> RelevantAwareness_values = {
		std::make_tuple("Passive", 0x1),
		std::make_tuple("Searching", 0x2),
		std::make_tuple("Engaged", 0x4), 
	};

	enum class RelevantAwareness : uint64_t {
		Passive = 0x1,
		Searching = 0x2,
		Engaged = 0x4, 
	};
} // namespace rivet::ddl::generated

// clang-format on
