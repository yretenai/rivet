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
	constexpr static std::string_view x39ee8d91_type_name = "x39ee8d91";
	constexpr static rivet::rivet_type_id x39ee8d91_type_id = 0x39ee8d91;

	constexpr static std::array<std::string_view, 5> x39ee8d91_values = {
		"kOpenUnit",
		"kGlobal",
		"kLevel",
		"kAlwaysLoaded",
		"kUnreferencedAssets", 
	};

	constexpr static std::array<std::string_view, 5> x39ee8d91_labels = {
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE", 
	};

	enum class x39ee8d91 : uint64_t {
		OpenUnit,
		Global,
		Level,
		AlwaysLoaded,
		UnreferencedAssets, 
	};
} // namespace rivet::ddl::generated

// clang-format on