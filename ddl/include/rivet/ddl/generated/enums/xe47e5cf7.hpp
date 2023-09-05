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
	constexpr const static std::string_view xe47e5cf7_type_name = "xe47e5cf7";
	constexpr const static rivet::rivet_type_id xe47e5cf7_type_id = 0xe47e5cf7;

	constexpr const static std::array<std::string_view, 3> xe47e5cf7_values = {
		"kEnable",
		"kDisable",
		"kToggle", 
	};

	enum class xe47e5cf7 : uint64_t {
		Enable,
		Disable,
		Toggle, 
	};
} // namespace rivet::ddl::generated

// clang-format on
