// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/SheepVolumeSpawnData.hpp>

namespace rivet::ddl::generated {
	SheepVolumeSpawnData::SheepVolumeSpawnData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ActorSpawnData(serialized) {
		SheepHandle = serialized->get_uint32(SheepHandle_type_id);
		ZoneIndex = serialized->get_int32(ZoneIndex_type_id);
		Position = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(Position_type_id); 
	}

	[[nodiscard]] auto
	SheepVolumeSpawnData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SheepVolumeSpawnData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SheepVolumeSpawnData> {
		if (incoming_type_id == SheepVolumeSpawnData::type_id) {
			return std::make_shared<SheepVolumeSpawnData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
