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
	constexpr const static std::string_view x21e2284d_type_name = "x21e2284d";
	constexpr const static rivet::rivet_type_id x21e2284d_type_id = 0x21e2284d;

	constexpr const static std::array<std::string_view, 9> x21e2284d_values = {
		"kOnSpawn",
		"kOnHitEnemy",
		"kOnHitFriendly",
		"kOnHitNonFriendly",
		"kOnHitEnvironment",
		"kOnHitAnything",
		"kOnUpdateInterval",
		"kOnLifetimeExpired",
		"kPostInit", 
	};

	enum class x21e2284d : uint64_t {
		OnSpawn,
		OnHitEnemy,
		OnHitFriendly,
		OnHitNonFriendly,
		OnHitEnvironment,
		OnHitAnything,
		OnUpdateInterval,
		OnLifetimeExpired,
		PostInit, 
	};
} // namespace rivet::ddl::generated

// clang-format on
