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
	constexpr static std::string_view x7ffe9612_type_name = "x7ffe9612";
	constexpr static rivet::rivet_type_id x7ffe9612_type_id = 0x7ffe9612;

	constexpr static std::array<std::string_view, 3> x7ffe9612_values = {
		"kOn",
		"kToggle",
		"kOff", 
	};

	constexpr static std::array<std::string_view, 3> x7ffe9612_labels = {
		"On",
		"Toggle",
		"Off", 
	};

	enum class x7ffe9612 : uint64_t {
		On,
		Toggle,
		Off, 
	};
} // namespace rivet::ddl::generated

// clang-format on
