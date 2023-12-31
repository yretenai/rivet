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
	constexpr static std::string_view x45f5c485_type_name = "x45f5c485";
	constexpr static rivet::rivet_type_id x45f5c485_type_id = 0x45f5c485;

	constexpr static std::array<std::string_view, 3> x45f5c485_values = {
		"kOff",
		"kLocal",
		"kWorld", 
	};

	constexpr static std::array<std::string_view, 3> x45f5c485_labels = {
		"Off",
		"Local",
		"World", 
	};

	enum class x45f5c485 : uint64_t {
		Off,
		Local,
		World, 
	};
} // namespace rivet::ddl::generated

// clang-format on
