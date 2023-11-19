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
	constexpr static std::string_view x34a3a095_type_name = "x34a3a095";
	constexpr static rivet::rivet_type_id x34a3a095_type_id = 0x34a3a095;

	constexpr static std::array<std::string_view, 7> x34a3a095_values = {
		"kCurrent",
		"k256s",
		"k512s",
		"k1080",
		"k1440",
		"k2160",
		"k4320", 
	};

	constexpr static std::array<std::string_view, 7> x34a3a095_labels = {
		"Current",
		"256 Square",
		"512 Square",
		"1080P",
		"1440P",
		"4K",
		"8K", 
	};

	enum class x34a3a095 : uint64_t {
		Current,
		k256s,
		k512s,
		k1080,
		k1440,
		k2160,
		k4320, 
	};
} // namespace rivet::ddl::generated

// clang-format on