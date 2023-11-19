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
	constexpr static std::string_view xbb5d75a3_type_name = "xbb5d75a3";
	constexpr static rivet::rivet_type_id xbb5d75a3_type_id = 0xbb5d75a3;

	constexpr static std::array<std::string_view, 9> xbb5d75a3_values = {
		"kInteract",
		"kMoveX",
		"kMoveY",
		"kMoveUp",
		"kMoveDown",
		"kMoveLeft",
		"kMoveRight",
		"kMoveSlow",
		"kAnyFaceButton", 
	};

	constexpr static std::array<std::string_view, 9> xbb5d75a3_labels = {
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE", 
	};

	enum class xbb5d75a3 : uint64_t {
		Interact,
		MoveX,
		MoveY,
		MoveUp,
		MoveDown,
		MoveLeft,
		MoveRight,
		MoveSlow,
		AnyFaceButton, 
	};
} // namespace rivet::ddl::generated

// clang-format on