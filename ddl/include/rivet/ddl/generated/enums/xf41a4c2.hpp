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
	constexpr static std::string_view xf41a4c2_type_name = "xf41a4c2";
	constexpr static rivet::rivet_type_id xf41a4c2_type_id = 0xf41a4c2;

	constexpr static std::array<std::string_view, 5> xf41a4c2_values = {
		"kApplyFirstContact",
		"kApplyAttachedOnly",
		"kApplyIfOver",
		"kApplyAlwaysJumps",
		"kApplyMomentum", 
	};

	enum class xf41a4c2 : uint64_t {
		First_Contact,
		Attach_Only,
		Always_If_Over,
		Always_and_in_jumps,
		Attached_Plus_Jump_Momentum, 
	};
} // namespace rivet::ddl::generated

// clang-format on
