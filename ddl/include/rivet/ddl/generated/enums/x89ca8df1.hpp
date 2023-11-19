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
	constexpr static std::string_view x89ca8df1_type_name = "x89ca8df1";
	constexpr static rivet::rivet_type_id x89ca8df1_type_id = 0x89ca8df1;

	constexpr static std::array<std::string_view, 7> x89ca8df1_values = {
		"kFieldResponse",
		"kFieldStack",
		"kFieldConst",
		"kFieldEvent",
		"kFieldSender",
		"kFieldActor",
		"kFieldGlobal", 
	};

	constexpr static std::array<std::string_view, 7> x89ca8df1_labels = {
		"Effect Response",
		"Field Stack",
		"Constant",
		"Input Event",
		"Sending Actor",
		"Receiving Actor",
		"Global Value", 
	};

	enum class x89ca8df1 : uint64_t {
		Effect_Response,
		Field_Stack,
		Constant,
		Input_Event,
		Sending_Actor,
		Receiving_Actor,
		Global_Value, 
	};
} // namespace rivet::ddl::generated

// clang-format on