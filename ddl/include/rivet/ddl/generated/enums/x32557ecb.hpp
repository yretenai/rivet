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
	constexpr const static std::string_view x32557ecb_type_name = "x32557ecb";
	constexpr const static rivet::rivet_type_id x32557ecb_type_id = 0x32557ecb;

	constexpr const static std::array<std::string_view, 3> x32557ecb_values = {
		"Small",
		"Medium",
		"Large", 
	};

	enum class x32557ecb : uint64_t {
		Small,
		Medium,
		Large, 
	};
} // namespace rivet::ddl::generated

// clang-format on
