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
	constexpr static std::string_view xfe5100b1_type_name = "xfe5100b1";
	constexpr static rivet::rivet_type_id xfe5100b1_type_id = 0xfe5100b1;

	constexpr static std::array<std::string_view, 2> xfe5100b1_values = {
		"kLocal",
		"kWorld", 
	};

	enum class xfe5100b1 : uint64_t {
		Local,
		World, 
	};
} // namespace rivet::ddl::generated

// clang-format on
