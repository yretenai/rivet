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
	constexpr static std::string_view x6569d94c_type_name = "x6569d94c";
	constexpr static rivet::rivet_type_id x6569d94c_type_id = 0x6569d94c;

	constexpr static std::array<std::tuple<std::string_view, uint64_t>, 2> x6569d94c_values = {
		std::make_tuple("kVfxReview", 0x1),
		std::make_tuple("kAudioReview", 0x2), 
	};

	enum class x6569d94c : uint64_t {
		VfxReview = 0x1,
		AudioReview = 0x2, 
	};
} // namespace rivet::ddl::generated

// clang-format on