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
	constexpr const static std::string_view xd76165e_type_name = "xd76165e";
	constexpr const static rivet::rivet_type_id xd76165e_type_id = 0xd76165e;

	constexpr const static std::array<std::string_view, 4> xd76165e_values = {
		"kNo",
		"kLow",
		"kMedium",
		"kHigh", 
	};

	enum class xd76165e : uint64_t {
		No,
		Low,
		Medium,
		High, 
	};
} // namespace rivet::ddl::generated

// clang-format on
