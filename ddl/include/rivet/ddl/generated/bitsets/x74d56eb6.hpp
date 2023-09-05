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
	constexpr const static std::string_view x74d56eb6_type_name = "x74d56eb6";
	constexpr const static rivet::rivet_type_id x74d56eb6_type_id = 0x74d56eb6;

	constexpr const static std::array<std::tuple<std::string_view, uint64_t>, 2> x74d56eb6_values = {
		std::make_tuple("kPC", 0x1),
		std::make_tuple("kPS5", 0x2), 
	};

	enum class x74d56eb6 : uint64_t {
		PC = 0x1,
		PS5 = 0x2, 
	};
} // namespace rivet::ddl::generated

// clang-format on
