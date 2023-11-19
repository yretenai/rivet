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
	constexpr static std::string_view x565e978b_type_name = "x565e978b";
	constexpr static rivet::rivet_type_id x565e978b_type_id = 0x565e978b;

	constexpr static std::array<std::string_view, 9> x565e978b_values = {
		"ActorNone",
		"ActorA",
		"ActorB",
		"ActorC",
		"ActorD",
		"ActorE",
		"ActorF",
		"ActorG",
		"ActorH", 
	};

	constexpr static std::array<std::string_view, 9> x565e978b_labels = {
		"None",
		"Script Input A",
		"Script Input B",
		"Script Input C",
		"Script Input D",
		"Script Input E",
		"Script Input F",
		"Script Input G",
		"Script Input H", 
	};

	enum class x565e978b : uint64_t {
		None,
		Script_Input_A,
		Script_Input_B,
		Script_Input_C,
		Script_Input_D,
		Script_Input_E,
		Script_Input_F,
		Script_Input_G,
		Script_Input_H, 
	};
} // namespace rivet::ddl::generated

// clang-format on