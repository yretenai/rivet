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
	constexpr static std::string_view BitsB_type_name = "BitsB";
	constexpr static rivet::rivet_type_id BitsB_type_id = 0xb5956d7d;

	constexpr static std::array<std::tuple<std::string_view, uint64_t>, 2> BitsB_values = {
		std::make_tuple("kJ", 0x1),
		std::make_tuple("kM", 0x2), 
	};

	enum class BitsB : uint64_t {
		J = 0x1,
		M = 0x2, 
	};
} // namespace rivet::ddl::generated

// clang-format on
