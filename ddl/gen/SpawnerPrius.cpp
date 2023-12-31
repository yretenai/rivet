// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SpawnerScriptActionPrius.hpp> 

#include <rivet/ddl/generated/SpawnerPrius.hpp>

namespace rivet::ddl::generated {
	SpawnerPrius::SpawnerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		FactoryGroup = serialized->get_uint64s(FactoryGroup_type_id);
		FactorySelectionMethod = serialized->get_enum<rivet::ddl::generated::FactorySelectionMethod>(FactorySelectionMethod_type_id, rivet::ddl::generated::FactorySelectionMethod_values);
		Templates = serialized->get_uint64s(Templates_type_id);
		TemplateSelectionMethod = serialized->get_enum<rivet::ddl::generated::x59f4ecd6>(TemplateSelectionMethod_type_id, rivet::ddl::generated::x59f4ecd6_values);
		SpawnLocations = serialized->get_uint64s(SpawnLocations_type_id);
		LocationSelectionMethod = serialized->get_enum<rivet::ddl::generated::x14738916>(LocationSelectionMethod_type_id, rivet::ddl::generated::x14738916_values);
		InViewValidate = serialized->get_bool(InViewValidate_type_id);
		CheckNoLOS = serialized->get_bool(CheckNoLOS_type_id);
		SnapToNav = serialized->get_bool(SnapToNav_type_id);
		ForceSpawn = serialized->get_bool(ForceSpawn_type_id);
		RandomizeX = serialized->get_bool(RandomizeX_type_id);
		RandomizeY = serialized->get_bool(RandomizeY_type_id);
		RandomizeZ = serialized->get_bool(RandomizeZ_type_id);
		RandomizeT = serialized->get_bool(RandomizeT_type_id);
		InitialSpawnDelayMin = serialized->get_float(InitialSpawnDelayMin_type_id);
		InitialSpawnDelayMax = serialized->get_float(InitialSpawnDelayMax_type_id);
		SpawnIntervalMin = serialized->get_float(SpawnIntervalMin_type_id);
		SpawnIntervalMax = serialized->get_float(SpawnIntervalMax_type_id);
		RespawnDelayMin = serialized->get_float(RespawnDelayMin_type_id);
		RespawnDelayMax = serialized->get_float(RespawnDelayMax_type_id);
		NumSpawns = serialized->get_int32(NumSpawns_type_id);
		MaxSimultaneousSpawns = serialized->get_int32(MaxSimultaneousSpawns_type_id);
		MinDistanceFromPlayers = serialized->get_float(MinDistanceFromPlayers_type_id); 
	}

	[[nodiscard]] auto
	SpawnerPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SpawnerPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SpawnerPrius> {
		if (incoming_type_id == SpawnerPrius::type_id) {
			return std::make_shared<SpawnerPrius>(serialized);
		}

		auto SpawnerScriptActionPrius_ptr = SpawnerScriptActionPrius::from_substruct(incoming_type_id, serialized);
		if (SpawnerScriptActionPrius_ptr != nullptr) {
			return SpawnerScriptActionPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
