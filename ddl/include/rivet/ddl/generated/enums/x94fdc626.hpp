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
	constexpr static std::string_view x94fdc626_type_name = "x94fdc626";
	constexpr static rivet::rivet_type_id x94fdc626_type_id = 0x94fdc626;

	constexpr static std::array<std::string_view, 4> x94fdc626_values = {
		"Soft",
		"Normal",
		"Heavy",
		"Stomp", 
	};

	constexpr static std::array<std::string_view, 4> x94fdc626_labels = {
		"NONE",
		"NONE",
		"NONE",
		"NONE", 
	};

	enum class x94fdc626 : uint64_t {
		Soft,
		Normal,
		Heavy,
		Stomp, 
	};
} // namespace rivet::ddl::generated

// clang-format on
