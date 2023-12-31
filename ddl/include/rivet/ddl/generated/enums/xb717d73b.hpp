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
	constexpr static std::string_view xb717d73b_type_name = "xb717d73b";
	constexpr static rivet::rivet_type_id xb717d73b_type_id = 0xb717d73b;

	constexpr static std::array<std::string_view, 4> xb717d73b_values = {
		"kRandomValidNav",
		"kMiddle",
		"kRandomXZ",
		"kRandomXYZ", 
	};

	constexpr static std::array<std::string_view, 4> xb717d73b_labels = {
		"NONE",
		"NONE",
		"NONE",
		"NONE", 
	};

	enum class xb717d73b : uint64_t {
		RandomValidNav,
		Middle,
		RandomXZ,
		RandomXYZ, 
	};
} // namespace rivet::ddl::generated

// clang-format on
