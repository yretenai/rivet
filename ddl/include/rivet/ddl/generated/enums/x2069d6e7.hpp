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
	constexpr static std::string_view x2069d6e7_type_name = "x2069d6e7";
	constexpr static rivet::rivet_type_id x2069d6e7_type_id = 0x2069d6e7;

	constexpr static std::array<std::string_view, 6> x2069d6e7_values = {
		"kInstanceCollection",
		"kInstanceUnit",
		"kOpenCollection",
		"kOpenUnit",
		"kOpenLod",
		"kMission", 
	};

	constexpr static std::array<std::string_view, 6> x2069d6e7_labels = {
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE", 
	};

	enum class x2069d6e7 : uint64_t {
		InstanceCollection,
		InstanceUnit,
		OpenCollection,
		OpenUnit,
		OpenLod,
		Mission, 
	};
} // namespace rivet::ddl::generated

// clang-format on
