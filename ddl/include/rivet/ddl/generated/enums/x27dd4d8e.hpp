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
	constexpr static std::string_view x27dd4d8e_type_name = "x27dd4d8e";
	constexpr static rivet::rivet_type_id x27dd4d8e_type_id = 0x27dd4d8e;

	constexpr static std::array<std::string_view, 6> x27dd4d8e_values = {
		"kCryptographyNone",
		"kCryptographyPartial",
		"kCryptographySimple",
		"kCryptographyTcpOnly",
		"kCryptographyUdpOnly",
		"kCryptographyFull", 
	};

	constexpr static std::array<std::string_view, 6> x27dd4d8e_labels = {
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE", 
	};

	enum class x27dd4d8e : uint64_t {
		CryptographyNone,
		CryptographyPartial,
		CryptographySimple,
		CryptographyTcpOnly,
		CryptographyUdpOnly,
		CryptographyFull, 
	};
} // namespace rivet::ddl::generated

// clang-format on
