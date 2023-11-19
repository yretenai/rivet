// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

// clang-format off

#include <cstdint>
#include <memory>
#include <string_view>
#include <vector>

#include <rivet/hash/type_id.hpp>
#include <rivet/rivet_array.hpp>
#include <rivet/rivet_keywords.hpp>
#include <rivet/structures/rivet_serialization.hpp>

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED AmoeboidDamageTrailGeneratorPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "AmoeboidDamageTrailGeneratorPrius";
		constexpr static rivet::rivet_type_id type_id = 0x5379f7b8;

		constexpr static std::string_view TrailActor_type_name = "TrailActor";
		constexpr static rivet::rivet_type_id TrailActor_type_id = 0x2784102c;
		constexpr static std::string_view TimeDelayInitialSpawn_type_name = "TimeDelayInitialSpawn";
		constexpr static rivet::rivet_type_id TimeDelayInitialSpawn_type_id = 0x97aeb88;
		constexpr static std::string_view DistanceForInitialSpawn_type_name = "DistanceForInitialSpawn";
		constexpr static rivet::rivet_type_id DistanceForInitialSpawn_type_id = 0x9a0d9e51;
		constexpr static std::string_view TimeBetweenSpawns_type_name = "TimeBetweenSpawns";
		constexpr static rivet::rivet_type_id TimeBetweenSpawns_type_id = 0x34a6a75b;
		constexpr static std::string_view DistanceBetweenSpawns_type_name = "DistanceBetweenSpawns";
		constexpr static rivet::rivet_type_id DistanceBetweenSpawns_type_id = 0x200e976c;
		constexpr static std::string_view SpawnLifetime_type_name = "SpawnLifetime";
		constexpr static rivet::rivet_type_id SpawnLifetime_type_id = 0xa3a43531; 

		explicit AmoeboidDamageTrailGeneratorPrius() = default;
		explicit AmoeboidDamageTrailGeneratorPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view TrailActor {};
		float TimeDelayInitialSpawn {};
		float DistanceForInitialSpawn {};
		float TimeBetweenSpawns {};
		float DistanceBetweenSpawns {};
		float SpawnLifetime {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AmoeboidDamageTrailGeneratorPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on