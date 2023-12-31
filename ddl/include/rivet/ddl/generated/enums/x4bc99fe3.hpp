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
	constexpr static std::string_view x4bc99fe3_type_name = "x4bc99fe3";
	constexpr static rivet::rivet_type_id x4bc99fe3_type_id = 0x4bc99fe3;

	constexpr static std::array<std::string_view, 3> x4bc99fe3_values = {
		"kDoNotAutoDisable",
		"kDisableOnTrigger",
		"kDisableOnUnTrigger", 
	};

	constexpr static std::array<std::string_view, 3> x4bc99fe3_labels = {
		"Do Not Auto Disable",
		"Disable on Trigger",
		"Disable on UnTrigger", 
	};

	enum class x4bc99fe3 : uint64_t {
		Do_Not_Auto_Disable,
		Disable_on_Trigger,
		Disable_on_UnTrigger, 
	};
} // namespace rivet::ddl::generated

// clang-format on
