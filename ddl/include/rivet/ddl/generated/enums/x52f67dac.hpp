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
	constexpr static std::string_view x52f67dac_type_name = "x52f67dac";
	constexpr static rivet::rivet_type_id x52f67dac_type_id = 0x52f67dac;

	constexpr static std::array<std::string_view, 4> x52f67dac_values = {
		"kLeftToRight",
		"kRightToLeft",
		"kUpToDown",
		"kDownToUp", 
	};

	constexpr static std::array<std::string_view, 4> x52f67dac_labels = {
		"NONE",
		"NONE",
		"NONE",
		"NONE", 
	};

	enum class x52f67dac : uint64_t {
		LeftToRight,
		RightToLeft,
		UpToDown,
		DownToUp, 
	};
} // namespace rivet::ddl::generated

// clang-format on