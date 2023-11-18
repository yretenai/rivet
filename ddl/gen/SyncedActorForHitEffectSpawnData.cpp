// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SyncedActorEffectSpawnData.hpp>
#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/SyncedActorForHitEffectSpawnData.hpp>

namespace rivet::ddl::generated {
	SyncedActorForHitEffectSpawnData::SyncedActorForHitEffectSpawnData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ActorSpawnData(serialized) {
		ShotOwner = serialized->get_uint32(ShotOwner_type_id);
		HitActor = serialized->get_uint32(HitActor_type_id);
		AssetId = serialized->get_uint64(AssetId_type_id);
		Pos = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(Pos_type_id);
		Facing = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(Facing_type_id);
		Up = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(Up_type_id);
		MatchCreatorZone = serialized->get_bool(MatchCreatorZone_type_id);
		MatchCreatorAllegiance = serialized->get_bool(MatchCreatorAllegiance_type_id); 
	}

	[[nodiscard]] auto
	SyncedActorForHitEffectSpawnData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SyncedActorForHitEffectSpawnData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SyncedActorForHitEffectSpawnData> {
		if (incoming_type_id == SyncedActorForHitEffectSpawnData::type_id) {
			return std::make_shared<SyncedActorForHitEffectSpawnData>(serialized);
		}

		auto SyncedActorEffectSpawnData_ptr = SyncedActorEffectSpawnData::from_substruct(incoming_type_id, serialized);
		if (SyncedActorEffectSpawnData_ptr != nullptr) {
			return SyncedActorEffectSpawnData_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
