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
	constexpr static std::string_view x95fbb203_type_name = "x95fbb203";
	constexpr static rivet::rivet_type_id x95fbb203_type_id = 0x95fbb203;

	constexpr static std::array<std::tuple<std::string_view, uint64_t>, 10> x95fbb203_values = {
		std::make_tuple("kNone", 0x0),
		std::make_tuple("kSystem", 0x1),
		std::make_tuple("kLoading", 0x2),
		std::make_tuple("kSignals", 0x4),
		std::make_tuple("kDesignWarning", 0x8),
		std::make_tuple("kProgrammerWarning", 0x10),
		std::make_tuple("kDebug", 0x20),
		std::make_tuple("kSaveFile", 0x40),
		std::make_tuple("kDefault", 0x19),
		std::make_tuple("kAll", 0x7f), 
	};

	enum class x95fbb203 : uint64_t {
		None = 0x0,
		System = 0x1,
		Loading = 0x2,
		Signals = 0x4,
		DesignWarning = 0x8,
		ProgrammerWarning = 0x10,
		Debug = 0x20,
		SaveFile = 0x40,
		Default = 0x19,
		All = 0x7f, 
	};
} // namespace rivet::ddl::generated

// clang-format on
