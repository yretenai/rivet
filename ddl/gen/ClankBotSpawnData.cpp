// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ClankBotSpawnData.hpp>

namespace rivet::ddl::generated {
	ClankBotSpawnData::ClankBotSpawnData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ActorSpawnData(serialized) {
		AssetId = serialized->get_uint64(AssetId_type_id);
		Spawner = serialized->get_uint32(Spawner_type_id);
		Role = serialized->get_uint32(Role_type_id); 
	}

	[[nodiscard]] auto
	ClankBotSpawnData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ClankBotSpawnData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ClankBotSpawnData> {
		if (incoming_type_id == ClankBotSpawnData::type_id) {
			return std::make_shared<ClankBotSpawnData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated