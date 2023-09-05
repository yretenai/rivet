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
	constexpr const static std::string_view x2512d89d_type_name = "x2512d89d";
	constexpr const static rivet::rivet_type_id x2512d89d_type_id = 0x2512d89d;

	constexpr const static std::array<std::string_view, 2> x2512d89d_values = {
		"kRetreat",
		"kDeath", 
	};

	enum class x2512d89d : uint64_t {
		Retreat,
		Death, 
	};
} // namespace rivet::ddl::generated

// clang-format on
