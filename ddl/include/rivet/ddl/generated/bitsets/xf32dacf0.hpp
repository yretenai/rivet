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
	constexpr static std::string_view xf32dacf0_type_name = "xf32dacf0";
	constexpr static rivet::rivet_type_id xf32dacf0_type_id = 0xf32dacf0;

	constexpr static std::array<std::tuple<std::string_view, uint64_t>, 3> xf32dacf0_values = {
		std::make_tuple("kClank", 0x1),
		std::make_tuple("kBot", 0x2),
		std::make_tuple("kEnvironment", 0x4), 
	};

	enum class xf32dacf0 : uint64_t {
		Clank = 0x1,
		Bot = 0x2,
		Environment = 0x4, 
	};
} // namespace rivet::ddl::generated

// clang-format on
