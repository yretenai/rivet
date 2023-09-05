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
	constexpr const static std::string_view x38ca42_type_name = "x38ca42";
	constexpr const static rivet::rivet_type_id x38ca42_type_id = 0x38ca42;

	constexpr const static std::array<std::string_view, 5> x38ca42_values = {
		"kTrigger",
		"kEnvironment",
		"kParameter",
		"kSwitch",
		"kState", 
	};

	enum class x38ca42 : uint64_t {
		Trigger,
		AuxSend,
		Parameter,
		Switch,
		State, 
	};
} // namespace rivet::ddl::generated

// clang-format on
