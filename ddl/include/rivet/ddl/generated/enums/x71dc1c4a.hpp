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
	constexpr static std::string_view x71dc1c4a_type_name = "x71dc1c4a";
	constexpr static rivet::rivet_type_id x71dc1c4a_type_id = 0x71dc1c4a;

	constexpr static std::array<std::string_view, 3> x71dc1c4a_values = {
		"PromptReloadMissionState",
		"AutoReloadMissionState",
		"RemoveFromMissionList", 
	};

	constexpr static std::array<std::string_view, 3> x71dc1c4a_labels = {
		"NONE",
		"NONE",
		"NONE", 
	};

	enum class x71dc1c4a : uint64_t {
		PromptReloadMissionState,
		AutoReloadMissionState,
		RemoveFromMissionList, 
	};
} // namespace rivet::ddl::generated

// clang-format on
