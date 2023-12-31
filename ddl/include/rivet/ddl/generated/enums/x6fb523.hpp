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
	constexpr static std::string_view x6fb523_type_name = "x6fb523";
	constexpr static rivet::rivet_type_id x6fb523_type_id = 0x6fb523;

	constexpr static std::array<std::string_view, 2> x6fb523_values = {
		"kTypeGlobal",
		"kTypeLocal", 
	};

	constexpr static std::array<std::string_view, 2> x6fb523_labels = {
		"All",
		"Self", 
	};

	enum class x6fb523 : uint64_t {
		All,
		Self, 
	};
} // namespace rivet::ddl::generated

// clang-format on
