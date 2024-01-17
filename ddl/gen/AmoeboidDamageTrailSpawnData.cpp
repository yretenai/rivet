// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/AmoeboidDamageTrailSpawnData.hpp>

namespace rivet::ddl::generated {
	AmoeboidDamageTrailSpawnData::AmoeboidDamageTrailSpawnData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ActorSpawnData(serialized) {
		OwnerHandle = serialized->get_uint32(OwnerHandle_type_id, 0);
		AssetId = serialized->get_uint64(AssetId_type_id, 0);
		ZoneIndex = serialized->get_int32(ZoneIndex_type_id, 0);
		SpawnPos = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(SpawnPos_type_id);
		SpawnUp = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(SpawnUp_type_id);
		SpawnFwd = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(SpawnFwd_type_id);
		SpawnExtents = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(SpawnExtents_type_id);
		Lifetime = serialized->get_float(Lifetime_type_id, 0.000000); 
	}

	[[nodiscard]] auto
	AmoeboidDamageTrailSpawnData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AmoeboidDamageTrailSpawnData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AmoeboidDamageTrailSpawnData> {
		if (incoming_type_id == AmoeboidDamageTrailSpawnData::type_id) {
			return std::make_shared<AmoeboidDamageTrailSpawnData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
