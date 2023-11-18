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
	constexpr static std::string_view x2bbd4e7a_type_name = "x2bbd4e7a";
	constexpr static rivet::rivet_type_id x2bbd4e7a_type_id = 0x2bbd4e7a;

	constexpr static std::array<std::string_view, 3> x2bbd4e7a_values = {
		"kEitherCheckpoint",
		"kCheckpointA",
		"kCheckpointB", 
	};

	enum class x2bbd4e7a : uint64_t {
		EitherCheckpoint,
		CheckpointA,
		CheckpointB, 
	};
} // namespace rivet::ddl::generated

// clang-format on
