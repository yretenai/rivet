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
	constexpr const static std::string_view BlendStyle_type_name = "BlendStyle";
	constexpr const static rivet::rivet_type_id BlendStyle_type_id = 0xb34024ea;

	constexpr const static std::array<std::string_view, 4> BlendStyle_values = {
		"kModulate",
		"kOpaque",
		"kAlpha",
		"kAdd", 
	};

	enum class BlendStyle : uint64_t {
		Modulate,
		Opaque,
		Alpha,
		Add, 
	};
} // namespace rivet::ddl::generated

// clang-format on
