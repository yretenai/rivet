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
	constexpr static std::string_view xc115d639_type_name = "xc115d639";
	constexpr static rivet::rivet_type_id xc115d639_type_id = 0xc115d639;

	constexpr static std::array<std::string_view, 3> xc115d639_values = {
		"kNone",
		"kRed",
		"kBlue", 
	};

	constexpr static std::array<std::string_view, 3> xc115d639_labels = {
		"NONE",
		"NONE",
		"NONE", 
	};

	enum class xc115d639 : uint64_t {
		None,
		Red,
		Blue, 
	};
} // namespace rivet::ddl::generated

// clang-format on
