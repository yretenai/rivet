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
	constexpr static std::string_view x5d051641_type_name = "x5d051641";
	constexpr static rivet::rivet_type_id x5d051641_type_id = 0x5d051641;

	constexpr static std::array<std::string_view, 3> x5d051641_values = {
		"kLoad",
		"kClearAll",
		"kScript", 
	};

	enum class x5d051641 : uint64_t {
		Load,
		ClearAll,
		Script, 
	};
} // namespace rivet::ddl::generated

// clang-format on
