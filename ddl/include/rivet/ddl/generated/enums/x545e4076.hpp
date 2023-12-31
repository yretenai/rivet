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
	constexpr static std::string_view x545e4076_type_name = "x545e4076";
	constexpr static rivet::rivet_type_id x545e4076_type_id = 0x545e4076;

	constexpr static std::array<std::string_view, 3> x545e4076_values = {
		"kMajor",
		"kMinor",
		"kBoth", 
	};

	constexpr static std::array<std::string_view, 3> x545e4076_labels = {
		"Major",
		"Minor",
		"Both", 
	};

	enum class x545e4076 : uint64_t {
		Major,
		Minor,
		Both, 
	};
} // namespace rivet::ddl::generated

// clang-format on
