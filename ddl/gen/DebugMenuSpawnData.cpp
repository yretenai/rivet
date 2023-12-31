// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/DebugMenuSpawnData.hpp>

namespace rivet::ddl::generated {
	DebugMenuSpawnData::DebugMenuSpawnData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ActorSpawnData(serialized) {
		AssetId = serialized->get_uint64(AssetId_type_id);
		Pos = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(Pos_type_id);
		Facing = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(Facing_type_id); 
	}

	[[nodiscard]] auto
	DebugMenuSpawnData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DebugMenuSpawnData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DebugMenuSpawnData> {
		if (incoming_type_id == DebugMenuSpawnData::type_id) {
			return std::make_shared<DebugMenuSpawnData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
