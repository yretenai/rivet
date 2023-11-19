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
	constexpr static std::string_view x5753f3c8_type_name = "x5753f3c8";
	constexpr static rivet::rivet_type_id x5753f3c8_type_id = 0x5753f3c8;

	constexpr static std::array<std::tuple<std::string_view, uint64_t>, 4> x5753f3c8_values = {
		std::make_tuple("kWindows", 0x1),
		std::make_tuple("kOrbis", 0x2),
		std::make_tuple("kProspero", 0x4),
		std::make_tuple("kAll", 0x7), 
	};

	enum class x5753f3c8 : uint64_t {
		Windows = 0x1,
		Orbis = 0x2,
		Prospero = 0x4,
		All = 0x7, 
	};
} // namespace rivet::ddl::generated

// clang-format on