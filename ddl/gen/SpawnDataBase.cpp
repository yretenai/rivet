// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SimpleSpawnData.hpp>
#include <rivet/ddl/generated/RYNOPortalObjectSpawnData.hpp>
#include <rivet/ddl/generated/RYNOPortalSpawnData.hpp>
#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/SpawnDataBase.hpp>

namespace rivet::ddl::generated {
	SpawnDataBase::SpawnDataBase([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ActorSpawnData(serialized) {
		ParentHandle = serialized->get_uint32(ParentHandle_type_id);
		AssetId = serialized->get_uint64(AssetId_type_id);
		ZoneIndex = serialized->get_int32(ZoneIndex_type_id);
		Position = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(Position_type_id);
		Facing = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(Facing_type_id);
		Up = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(Up_type_id); 
	}

	[[nodiscard]] auto
	SpawnDataBase::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SpawnDataBase::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SpawnDataBase> {
		if (incoming_type_id == SpawnDataBase::type_id) {
			return std::make_shared<SpawnDataBase>(serialized);
		}

		auto RYNOPortalSpawnData_ptr = RYNOPortalSpawnData::from_substruct(incoming_type_id, serialized);
		if (RYNOPortalSpawnData_ptr != nullptr) {
			return RYNOPortalSpawnData_ptr;
		}

		auto RYNOPortalObjectSpawnData_ptr = RYNOPortalObjectSpawnData::from_substruct(incoming_type_id, serialized);
		if (RYNOPortalObjectSpawnData_ptr != nullptr) {
			return RYNOPortalObjectSpawnData_ptr;
		}

		auto SimpleSpawnData_ptr = SimpleSpawnData::from_substruct(incoming_type_id, serialized);
		if (SimpleSpawnData_ptr != nullptr) {
			return SimpleSpawnData_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
