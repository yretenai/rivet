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
	constexpr const static std::string_view x9e94da32_type_name = "x9e94da32";
	constexpr const static rivet::rivet_type_id x9e94da32_type_id = 0x9e94da32;

	constexpr const static std::array<std::string_view, 3> x9e94da32_values = {
		"kDefault",
		"kAlways",
		"kNever", 
	};

	enum class x9e94da32 : uint64_t {
		Default,
		Always,
		Never, 
	};
} // namespace rivet::ddl::generated

// clang-format on
