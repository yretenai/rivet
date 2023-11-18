// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/RandomBotSpawnData.hpp>

namespace rivet::ddl::generated {
	RandomBotSpawnData::RandomBotSpawnData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ActorSpawnData(serialized) {
		SpawnPoint = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(SpawnPoint_type_id);
		EncounterControllerActor = serialized->get_uint32(EncounterControllerActor_type_id);
		HomeArea = serialized->get_uint32(HomeArea_type_id);
		BotAssetId = serialized->get_uint64(BotAssetId_type_id); 
	}

	[[nodiscard]] auto
	RandomBotSpawnData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	RandomBotSpawnData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RandomBotSpawnData> {
		if (incoming_type_id == RandomBotSpawnData::type_id) {
			return std::make_shared<RandomBotSpawnData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
