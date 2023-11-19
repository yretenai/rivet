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
	constexpr static std::string_view xd458e3df_type_name = "xd458e3df";
	constexpr static rivet::rivet_type_id xd458e3df_type_id = 0xd458e3df;

	constexpr static std::array<std::string_view, 3> xd458e3df_values = {
		"kDefault",
		"kMatchAnim",
		"kDontMatchAnim", 
	};

	constexpr static std::array<std::string_view, 3> xd458e3df_labels = {
		"NONE",
		"NONE",
		"NONE", 
	};

	enum class xd458e3df : uint64_t {
		Default,
		MatchAnim,
		DontMatchAnim, 
	};
} // namespace rivet::ddl::generated

// clang-format on