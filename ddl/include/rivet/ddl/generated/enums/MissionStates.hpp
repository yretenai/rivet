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
	constexpr static std::string_view MissionStates_type_name = "MissionStates";
	constexpr static rivet::rivet_type_id MissionStates_type_id = 0x13b9234f;

	constexpr static std::array<std::string_view, 6> MissionStates_values = {
		"kInactive",
		"kAvailable",
		"kActive",
		"kCompleteCleaning",
		"kCompleteFinished",
		"kFailed", 
	};

	enum class MissionStates : uint64_t {
		Inactive,
		Available,
		Active,
		Complete_Cleaning,
		Complete_Finished,
		Failed, 
	};
} // namespace rivet::ddl::generated

// clang-format on
