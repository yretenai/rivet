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
	constexpr static std::string_view PhysicsCollFlags_type_name = "PhysicsCollFlags";
	constexpr static rivet::rivet_type_id PhysicsCollFlags_type_id = 0xcc4b35a;

	constexpr static std::array<std::tuple<std::string_view, uint64_t>, 14> PhysicsCollFlags_values = {
		std::make_tuple("kMove", 0x1),
		std::make_tuple("kHeroMove", 0x2),
		std::make_tuple("kGround", 0x4),
		std::make_tuple("kProjectile", 0x8),
		std::make_tuple("kTargeting", 0x10),
		std::make_tuple("kCamera", 0x20),
		std::make_tuple("kCamObstruct", 0x40),
		std::make_tuple("kWallRun", 0x80),
		std::make_tuple("kWater", 0x100),
		std::make_tuple("kWallCrawl", 0x200),
		std::make_tuple("kHeroAltMove", 0x400),
		std::make_tuple("kDefault", 0x43f),
		std::make_tuple("kPartition", 0x5),
		std::make_tuple("kFluidPartition", 0x100), 
	};

	enum class PhysicsCollFlags : uint64_t {
		Move = 0x1,
		HeroMove = 0x2,
		Ground = 0x4,
		Projectile = 0x8,
		Targeting = 0x10,
		Camera = 0x20,
		CamObstruct = 0x40,
		WallRun = 0x80,
		Water = 0x100,
		WallCrawl = 0x200,
		HeroAltMove = 0x400,
		Default = 0x43f,
		Partition = 0x5,
		FluidPartition = 0x100, 
	};
} // namespace rivet::ddl::generated

// clang-format on
