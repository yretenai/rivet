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
	constexpr static std::string_view xfcb30197_type_name = "xfcb30197";
	constexpr static rivet::rivet_type_id xfcb30197_type_id = 0xfcb30197;

	constexpr static std::array<std::string_view, 7> xfcb30197_values = {
		"POITypeNone",
		"POITypeObjective",
		"POITypeObjectiveOptional",
		"POITypeInteract",
		"POITypeMapIcon",
		"POITypeNest",
		"POITypePing", 
	};

	constexpr static std::array<std::string_view, 7> xfcb30197_labels = {
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE", 
	};

	enum class xfcb30197 : uint64_t {
		POITypeNone,
		POITypeObjective,
		POITypeObjectiveOptional,
		POITypeInteract,
		POITypeMapIcon,
		POITypeNest,
		POITypePing, 
	};
} // namespace rivet::ddl::generated

// clang-format on
