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
	constexpr const static std::string_view xb8f8f0e5_type_name = "xb8f8f0e5";
	constexpr const static rivet::rivet_type_id xb8f8f0e5_type_id = 0xb8f8f0e5;

	constexpr const static std::array<std::string_view, 3> xb8f8f0e5_values = {
		"kStart",
		"kEnd",
		"kClosest", 
	};

	enum class xb8f8f0e5 : uint64_t {
		Start,
		End,
		Closest, 
	};
} // namespace rivet::ddl::generated

// clang-format on
