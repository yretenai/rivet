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
	constexpr static std::string_view x8bdec143_type_name = "x8bdec143";
	constexpr static rivet::rivet_type_id x8bdec143_type_id = 0x8bdec143;

	constexpr static std::array<std::string_view, 3> x8bdec143_values = {
		"kActive",
		"kMute",
		"kSolo", 
	};

	constexpr static std::array<std::string_view, 3> x8bdec143_labels = {
		"NONE",
		"NONE",
		"NONE", 
	};

	enum class x8bdec143 : uint64_t {
		Active,
		Mute,
		Solo, 
	};
} // namespace rivet::ddl::generated

// clang-format on