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
	constexpr static std::string_view OptimizeUVMode_type_name = "OptimizeUVMode";
	constexpr static rivet::rivet_type_id OptimizeUVMode_type_id = 0x22e01f8d;

	constexpr static std::array<std::string_view, 4> OptimizeUVMode_values = {
		"kNone",
		"kUv0Only",
		"kUv1Only",
		"kUV0AndUV1", 
	};

	enum class OptimizeUVMode : uint64_t {
		None,
		UV0_Only,
		UV1_Only,
		UV0_And_UV1, 
	};
} // namespace rivet::ddl::generated

// clang-format on
