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
	constexpr static std::string_view x940d80bd_type_name = "x940d80bd";
	constexpr static rivet::rivet_type_id x940d80bd_type_id = 0x940d80bd;

	constexpr static std::array<std::string_view, 7> x940d80bd_values = {
		"String",
		"Actor",
		"Number",
		"Vector",
		"Bool",
		"Auto",
		"Composite", 
	};

	enum class x940d80bd : uint64_t {
		String,
		Actor,
		Number,
		Vector,
		Bool,
		Auto,
		Composite, 
	};
} // namespace rivet::ddl::generated

// clang-format on
