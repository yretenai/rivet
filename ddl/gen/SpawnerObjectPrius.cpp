// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BotGeneratorComponentPrius.hpp>
#include <rivet/ddl/generated/GameSpawnerObjectPrius.hpp>
#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/SpawnerObjectPrius.hpp>

namespace rivet::ddl::generated {
	SpawnerObjectPrius::SpawnerObjectPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		StartEnabled = serialized->get_bool(StartEnabled_type_id);
		ObjSpawnAnim = serialized->get_string(ObjSpawnAnim_type_id);
		NumActive = serialized->get_uint8(NumActive_type_id);
		NumToSpawn = serialized->get_int32(NumToSpawn_type_id);
		AutoDeleteDist = serialized->get_float(AutoDeleteDist_type_id);
		TriggerDelay = serialized->get_float(TriggerDelay_type_id);
		SpawnDelay = serialized->get_float(SpawnDelay_type_id);
		TriggerArea = serialized->get_uint64(TriggerArea_type_id);
		TriggerRange = serialized->get_float(TriggerRange_type_id);
		SpawnArea = serialized->get_uint64(SpawnArea_type_id);
		RandSpawnNavLoc = serialized->get_bool(RandSpawnNavLoc_type_id);
		ThrowSpawn = serialized->get_bool(ThrowSpawn_type_id);
		BeamInSpawn = serialized->get_bool(BeamInSpawn_type_id);
		SpawneeTemplate = serialized->get_uint64(SpawneeTemplate_type_id);
		SpawneeVaultActor = serialized->get_string(SpawneeVaultActor_type_id);
		SpawnJoint = serialized->get_string(SpawnJoint_type_id);
		SpawnOffset = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(SpawnOffset_type_id);
		SpawnedGroup = serialized->get_uint64(SpawnedGroup_type_id);
		ExtraAddToGroup = serialized->get_uint64(ExtraAddToGroup_type_id);
		CheckHeroTooClose = serialized->get_bool(CheckHeroTooClose_type_id);
		CreateNavObstacle = serialized->get_bool(CreateNavObstacle_type_id);
		AttachOnSpawn = serialized->get_bool(AttachOnSpawn_type_id);
		MinDistanceFromPlayers = serialized->get_float(MinDistanceFromPlayers_type_id); 
	}

	[[nodiscard]] auto
	SpawnerObjectPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SpawnerObjectPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SpawnerObjectPrius> {
		if (incoming_type_id == SpawnerObjectPrius::type_id) {
			return std::make_shared<SpawnerObjectPrius>(serialized);
		}

		auto GameSpawnerObjectPrius_ptr = GameSpawnerObjectPrius::from_substruct(incoming_type_id, serialized);
		if (GameSpawnerObjectPrius_ptr != nullptr) {
			return GameSpawnerObjectPrius_ptr;
		}

		auto BotGeneratorComponentPrius_ptr = BotGeneratorComponentPrius::from_substruct(incoming_type_id, serialized);
		if (BotGeneratorComponentPrius_ptr != nullptr) {
			return BotGeneratorComponentPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
