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
	constexpr static std::string_view x48fb1e07_type_name = "x48fb1e07";
	constexpr static rivet::rivet_type_id x48fb1e07_type_id = 0x48fb1e07;

	constexpr static std::array<std::string_view, 10> x48fb1e07_values = {
		"kMapOpAssign",
		"kMapOpMul",
		"kMapOpDiv",
		"kMapOpAdd",
		"kMapOpSub",
		"kMapOpMod",
		"kMapOpAnd",
		"kMapOpOr",
		"kMapOpRandSelect",
		"kMapOpRandRange", 
	};

	constexpr static std::array<std::string_view, 10> x48fb1e07_labels = {
		"=",
		"*=",
		"/=",
		"+=",
		"-=",
		"mod=",
		"&&=",
		"||=",
		"RS=",
		"RR=", 
	};

	enum class x48fb1e07 : uint64_t {
		MapOpAssign,
		MapOpMul,
		MapOpDiv,
		MapOpAdd,
		MapOpSub,
		MapOpMod,
		MapOpAnd,
		MapOpOr,
		MapOpRandSelect,
		MapOpRandRange, 
	};
} // namespace rivet::ddl::generated

// clang-format on
