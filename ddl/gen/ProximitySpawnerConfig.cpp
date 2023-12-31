// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ProximitySpawnInfo.hpp>
#include <rivet/ddl/generated/ProximityTieredOverrides.hpp> 

#include <rivet/ddl/generated/ProximitySpawnerConfig.hpp>

namespace rivet::ddl::generated {
	ProximitySpawnerConfig::ProximitySpawnerConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		DefaultCleanUpType = serialized->get_enum<rivet::ddl::generated::xd3395131>(DefaultCleanUpType_type_id, rivet::ddl::generated::xd3395131_values);
		MaxAlive = serialized->get_int32(MaxAlive_type_id);
		MinSpawnRadius = serialized->get_float(MinSpawnRadius_type_id);
		MaxSpawnRadius = serialized->get_float(MaxSpawnRadius_type_id);
		MinDeleteRadius = serialized->get_float(MinDeleteRadius_type_id);
		MinDelayBetweenSpawns = serialized->get_float(MinDelayBetweenSpawns_type_id);
		MaxDelayBetweenSpawns = serialized->get_float(MaxDelayBetweenSpawns_type_id);
		StartAggressive = serialized->get_bool(StartAggressive_type_id);
		EncourageIdleWandering = serialized->get_bool(EncourageIdleWandering_type_id);
		CleanupDeleteRadius = serialized->get_float(CleanupDeleteRadius_type_id);
		MaxRelativeReward = serialized->get_float(MaxRelativeReward_type_id);
		TieredOverrides = serialized->unwrap_into_many<rivet::ddl::generated::ProximityTieredOverrides>(TieredOverrides_type_id);
		SpawnInfos = serialized->unwrap_into_many<rivet::ddl::generated::ProximitySpawnInfo>(SpawnInfos_type_id); 
	}

	[[nodiscard]] auto
	ProximitySpawnerConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ProximitySpawnerConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ProximitySpawnerConfig> {
		if (incoming_type_id == ProximitySpawnerConfig::type_id) {
			return std::make_shared<ProximitySpawnerConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
