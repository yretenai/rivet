// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/SyncedActorForHitActorSpawnData.hpp>

namespace rivet::ddl::generated {
	SyncedActorForHitActorSpawnData::SyncedActorForHitActorSpawnData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ActorSpawnData(serialized) {
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
	SyncedActorForHitActorSpawnData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SyncedActorForHitActorSpawnData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SyncedActorForHitActorSpawnData> {
		if (incoming_type_id == SyncedActorForHitActorSpawnData::type_id) {
			return std::make_shared<SyncedActorForHitActorSpawnData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
