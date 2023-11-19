// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ContainerShipSpawnData.hpp>

namespace rivet::ddl::generated {
	ContainerShipSpawnData::ContainerShipSpawnData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ActorSpawnData(serialized) {
		Spawner = serialized->get_uint32(Spawner_type_id);
		AssetId = serialized->get_uint64(AssetId_type_id); 
	}

	[[nodiscard]] auto
	ContainerShipSpawnData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ContainerShipSpawnData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ContainerShipSpawnData> {
		if (incoming_type_id == ContainerShipSpawnData::type_id) {
			return std::make_shared<ContainerShipSpawnData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated