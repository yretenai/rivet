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
	constexpr static std::string_view x32784e2f_type_name = "x32784e2f";
	constexpr static rivet::rivet_type_id x32784e2f_type_id = 0x32784e2f;

	constexpr static std::array<std::string_view, 2> x32784e2f_values = {
		"kEventSpawned",
		"kEventStopped", 
	};

	constexpr static std::array<std::string_view, 2> x32784e2f_labels = {
		"NONE",
		"NONE", 
	};

	enum class x32784e2f : uint64_t {
		EventSpawned,
		EventStopped, 
	};
} // namespace rivet::ddl::generated

// clang-format on
