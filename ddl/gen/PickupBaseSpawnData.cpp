// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/PickupBaseSpawnData.hpp>

namespace rivet::ddl::generated {
	PickupBaseSpawnData::PickupBaseSpawnData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ActorSpawnData(serialized) {
		SpawnPosition = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(SpawnPosition_type_id);
		SpawnVelocity = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(SpawnVelocity_type_id);
		SourceActor = serialized->get_uint32(SourceActor_type_id, 0);
		ActorAsset = serialized->get_uint32(ActorAsset_type_id, 0);
		LocationIndex = serialized->get_int8(LocationIndex_type_id, -1); 
	}

	[[nodiscard]] auto
	PickupBaseSpawnData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PickupBaseSpawnData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PickupBaseSpawnData> {
		if (incoming_type_id == PickupBaseSpawnData::type_id) {
			return std::make_shared<PickupBaseSpawnData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
