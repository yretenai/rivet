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
	constexpr static std::string_view x1eee6c26_type_name = "x1eee6c26";
	constexpr static rivet::rivet_type_id x1eee6c26_type_id = 0x1eee6c26;

	constexpr static std::array<std::string_view, 5> x1eee6c26_values = {
		"kMainGame",
		"kPaidDLC",
		"kFreeDLC",
		"kMinorUpdate",
		"kMajorUpdate", 
	};

	constexpr static std::array<std::string_view, 5> x1eee6c26_labels = {
		"Main Game (285-1050 pts)",
		"Paid DLC (0-200 pts)",
		"Free DLC (0-45 pts)",
		"Minor Update (0-45 pts)",
		"Major Update (0-200 pts)", 
	};

	enum class x1eee6c26 : uint64_t {
		MainGame,
		PaidDLC,
		FreeDLC,
		MinorUpdate,
		MajorUpdate, 
	};
} // namespace rivet::ddl::generated

// clang-format on
