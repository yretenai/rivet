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
	constexpr static std::string_view x9443909f_type_name = "x9443909f";
	constexpr static rivet::rivet_type_id x9443909f_type_id = 0x9443909f;

	constexpr static std::array<std::string_view, 2> x9443909f_values = {
		"kActor",
		"kLastDamager", 
	};

	constexpr static std::array<std::string_view, 2> x9443909f_labels = {
		"Actor",
		"Last Damager", 
	};

	enum class x9443909f : uint64_t {
		Actor,
		Last_Damager, 
	};
} // namespace rivet::ddl::generated

// clang-format on
