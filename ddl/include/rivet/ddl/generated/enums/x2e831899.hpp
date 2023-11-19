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
	constexpr static std::string_view x2e831899_type_name = "x2e831899";
	constexpr static rivet::rivet_type_id x2e831899_type_id = 0x2e831899;

	constexpr static std::array<std::string_view, 2> x2e831899_values = {
		"kCheckLastPlaythrough",
		"kCheckNextPlaythrough", 
	};

	constexpr static std::array<std::string_view, 2> x2e831899_labels = {
		"NONE",
		"NONE", 
	};

	enum class x2e831899 : uint64_t {
		CheckLastPlaythrough,
		CheckNextPlaythrough, 
	};
} // namespace rivet::ddl::generated

// clang-format on