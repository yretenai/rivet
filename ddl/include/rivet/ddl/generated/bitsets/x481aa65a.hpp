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
	constexpr static std::string_view x481aa65a_type_name = "x481aa65a";
	constexpr static rivet::rivet_type_id x481aa65a_type_id = 0x481aa65a;

	constexpr static std::array<std::tuple<std::string_view, uint64_t>, 1> x481aa65a_values = {
		std::make_tuple("kDriverTransitions", 0x1), 
	};

	enum class x481aa65a : uint64_t {
		DriverTransitions = 0x1, 
	};
} // namespace rivet::ddl::generated

// clang-format on
