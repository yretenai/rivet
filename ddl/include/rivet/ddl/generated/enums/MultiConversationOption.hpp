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
	constexpr static std::string_view MultiConversationOption_type_name = "MultiConversationOption";
	constexpr static rivet::rivet_type_id MultiConversationOption_type_id = 0xea118791;

	constexpr static std::array<std::string_view, 3> MultiConversationOption_values = {
		"SingleConversation",
		"Loop",
		"PlayAllOnce", 
	};

	constexpr static std::array<std::string_view, 3> MultiConversationOption_labels = {
		"NONE",
		"NONE",
		"NONE", 
	};

	enum class MultiConversationOption : uint64_t {
		SingleConversation,
		Loop,
		PlayAllOnce, 
	};
} // namespace rivet::ddl::generated

// clang-format on