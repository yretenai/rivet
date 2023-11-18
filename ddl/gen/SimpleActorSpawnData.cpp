// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/SimpleActorSpawnData.hpp>

namespace rivet::ddl::generated {
	SimpleActorSpawnData::SimpleActorSpawnData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ActorSpawnData(serialized) {
		AssetId = serialized->get_uint64(AssetId_type_id);
		Pos = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(Pos_type_id);
		Facing = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(Facing_type_id);
		Up = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(Up_type_id); 
	}

	[[nodiscard]] auto
	SimpleActorSpawnData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SimpleActorSpawnData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SimpleActorSpawnData> {
		if (incoming_type_id == SimpleActorSpawnData::type_id) {
			return std::make_shared<SimpleActorSpawnData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
