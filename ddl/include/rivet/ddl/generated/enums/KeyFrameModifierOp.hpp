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
	constexpr static std::string_view KeyFrameModifierOp_type_name = "KeyFrameModifierOp";
	constexpr static rivet::rivet_type_id KeyFrameModifierOp_type_id = 0x6bf154ab;

	constexpr static std::array<std::string_view, 3> KeyFrameModifierOp_values = {
		"kMultiply",
		"kReplace",
		"kAdd", 
	};

	constexpr static std::array<std::string_view, 3> KeyFrameModifierOp_labels = {
		"Multiply",
		"Replace",
		"Add", 
	};

	enum class KeyFrameModifierOp : uint64_t {
		Multiply,
		Replace,
		Add, 
	};
} // namespace rivet::ddl::generated

// clang-format on