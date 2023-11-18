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
	constexpr static std::string_view xd7e26c97_type_name = "xd7e26c97";
	constexpr static rivet::rivet_type_id xd7e26c97_type_id = 0xd7e26c97;

	constexpr static std::array<std::string_view, 4> xd7e26c97_values = {
		"kNone",
		"kWindows",
		"kPS4",
		"kPS5", 
	};

	enum class xd7e26c97 : uint64_t {
		None,
		Windows,
		PS4,
		PS5, 
	};
} // namespace rivet::ddl::generated

// clang-format on
