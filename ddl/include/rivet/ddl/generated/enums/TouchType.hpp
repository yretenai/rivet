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
	constexpr static std::string_view TouchType_type_name = "TouchType";
	constexpr static rivet::rivet_type_id TouchType_type_id = 0x54aa3293;

	constexpr static std::array<std::string_view, 2> TouchType_values = {
		"kTouched",
		"kUntouched", 
	};

	enum class TouchType : uint64_t {
		Touched,
		Untouched, 
	};
} // namespace rivet::ddl::generated

// clang-format on
