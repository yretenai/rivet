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
	constexpr static std::string_view x8db2fd48_type_name = "x8db2fd48";
	constexpr static rivet::rivet_type_id x8db2fd48_type_id = 0x8db2fd48;

	constexpr static std::array<std::string_view, 3> x8db2fd48_values = {
		"kLocal",
		"kWorld",
		"kPhysics", 
	};

	constexpr static std::array<std::string_view, 3> x8db2fd48_labels = {
		"Local",
		"World",
		"Physics", 
	};

	enum class x8db2fd48 : uint64_t {
		Local,
		World,
		Physics, 
	};
} // namespace rivet::ddl::generated

// clang-format on