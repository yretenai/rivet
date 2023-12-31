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
	constexpr static std::string_view x96f58b25_type_name = "x96f58b25";
	constexpr static rivet::rivet_type_id x96f58b25_type_id = 0x96f58b25;

	constexpr static std::array<std::string_view, 3> x96f58b25_values = {
		"kInteractEnable",
		"kInteractDisable",
		"kInteractToggle", 
	};

	constexpr static std::array<std::string_view, 3> x96f58b25_labels = {
		"NONE",
		"NONE",
		"NONE", 
	};

	enum class x96f58b25 : uint64_t {
		InteractEnable,
		InteractDisable,
		InteractToggle, 
	};
} // namespace rivet::ddl::generated

// clang-format on
