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
	constexpr static std::string_view xcef7a1a6_type_name = "xcef7a1a6";
	constexpr static rivet::rivet_type_id xcef7a1a6_type_id = 0xcef7a1a6;

	constexpr static std::array<std::string_view, 4> xcef7a1a6_values = {
		"kPartialRampNone",
		"kPartialRampOneStep",
		"kPartialRampTwoSteps",
		"kPartialRampThreeSteps", 
	};

	enum class xcef7a1a6 : uint64_t {
		Zero_Step,
		One_Step,
		Two_Step,
		Three_Step, 
	};
} // namespace rivet::ddl::generated

// clang-format on
