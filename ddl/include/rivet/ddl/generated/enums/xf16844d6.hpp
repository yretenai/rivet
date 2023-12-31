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
	constexpr static std::string_view xf16844d6_type_name = "xf16844d6";
	constexpr static rivet::rivet_type_id xf16844d6_type_id = 0xf16844d6;

	constexpr static std::array<std::string_view, 2> xf16844d6_values = {
		"kLookAtHero",
		"kLookAtSpecificTarget", 
	};

	constexpr static std::array<std::string_view, 2> xf16844d6_labels = {
		"NONE",
		"NONE", 
	};

	enum class xf16844d6 : uint64_t {
		LookAtHero,
		LookAtSpecificTarget, 
	};
} // namespace rivet::ddl::generated

// clang-format on
