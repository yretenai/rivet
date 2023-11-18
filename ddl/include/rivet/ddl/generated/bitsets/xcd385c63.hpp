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
	constexpr static std::string_view xcd385c63_type_name = "xcd385c63";
	constexpr static rivet::rivet_type_id xcd385c63_type_id = 0xcd385c63;

	constexpr static std::array<std::tuple<std::string_view, uint64_t>, 5> xcd385c63_values = {
		std::make_tuple("InitNumber", 0x1),
		std::make_tuple("InitString", 0x2),
		std::make_tuple("InitActor", 0x4),
		std::make_tuple("InitVector", 0x8),
		std::make_tuple("InitBoolean", 0x10), 
	};

	enum class xcd385c63 : uint64_t {
		InitNumber = 0x1,
		InitString = 0x2,
		InitActor = 0x4,
		InitVector = 0x8,
		InitBoolean = 0x10, 
	};
} // namespace rivet::ddl::generated

// clang-format on
