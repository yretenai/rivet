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
	constexpr static std::string_view QuadStyle_type_name = "QuadStyle";
	constexpr static rivet::rivet_type_id QuadStyle_type_id = 0xed66a9ae;

	constexpr static std::array<std::string_view, 2> QuadStyle_values = {
		"kQuad",
		"kBeam", 
	};

	enum class QuadStyle : uint64_t {
		Quad,
		Beam, 
	};
} // namespace rivet::ddl::generated

// clang-format on
