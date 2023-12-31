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
	constexpr static std::string_view x10205e3_type_name = "x10205e3";
	constexpr static rivet::rivet_type_id x10205e3_type_id = 0x10205e3;

	constexpr static std::array<std::string_view, 2> x10205e3_values = {
		"kBeginningOfShot",
		"kEndOfShot", 
	};

	constexpr static std::array<std::string_view, 2> x10205e3_labels = {
		"Beginning Of Shot",
		"End Of Shot", 
	};

	enum class x10205e3 : uint64_t {
		Beginning_Of_Shot,
		End_Of_Shot, 
	};
} // namespace rivet::ddl::generated

// clang-format on
