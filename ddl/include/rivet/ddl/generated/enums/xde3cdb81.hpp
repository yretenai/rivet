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
	constexpr static std::string_view xde3cdb81_type_name = "xde3cdb81";
	constexpr static rivet::rivet_type_id xde3cdb81_type_id = 0xde3cdb81;

	constexpr static std::array<std::string_view, 3> xde3cdb81_values = {
		"kOn",
		"kFast",
		"kOff", 
	};

	constexpr static std::array<std::string_view, 3> xde3cdb81_labels = {
		"On",
		"Fast",
		"Off", 
	};

	enum class xde3cdb81 : uint64_t {
		On,
		Fast,
		Off, 
	};
} // namespace rivet::ddl::generated

// clang-format on
