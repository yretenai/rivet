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
	constexpr static std::string_view xaa9dd5a4_type_name = "xaa9dd5a4";
	constexpr static rivet::rivet_type_id xaa9dd5a4_type_id = 0xaa9dd5a4;

	constexpr static std::array<std::string_view, 2> xaa9dd5a4_values = {
		"kKeepItem",
		"kRemoveItem", 
	};

	enum class xaa9dd5a4 : uint64_t {
		Keep,
		Remove_from_Inventory, 
	};
} // namespace rivet::ddl::generated

// clang-format on
