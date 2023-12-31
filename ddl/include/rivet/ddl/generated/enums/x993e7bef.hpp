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
	constexpr static std::string_view x993e7bef_type_name = "x993e7bef";
	constexpr static rivet::rivet_type_id x993e7bef_type_id = 0x993e7bef;

	constexpr static std::array<std::string_view, 2> x993e7bef_values = {
		"kUseEvent",
		"kDoNotUseEvent", 
	};

	constexpr static std::array<std::string_view, 2> x993e7bef_labels = {
		"Use an Event to Delete",
		"Do Not Use an Event to Delete", 
	};

	enum class x993e7bef : uint64_t {
		Use_an_Event_to_Delete,
		Do_Not_Use_an_Event_to_Delete, 
	};
} // namespace rivet::ddl::generated

// clang-format on
