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
	constexpr static std::string_view x1065ab66_type_name = "x1065ab66";
	constexpr static rivet::rivet_type_id x1065ab66_type_id = 0x1065ab66;

	constexpr static std::array<std::tuple<std::string_view, uint64_t>, 2> x1065ab66_values = {
		std::make_tuple("kFlag1", 0x1),
		std::make_tuple("kFlag2", 0x2), 
	};

	enum class x1065ab66 : uint64_t {
		Flag1 = 0x1,
		Flag2 = 0x2, 
	};
} // namespace rivet::ddl::generated

// clang-format on
