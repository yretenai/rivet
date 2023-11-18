// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ChunkSpawnItem.hpp>
#include <rivet/ddl/generated/ChunkSpawnParams.hpp> 

#include <rivet/ddl/generated/ChunkSpawnerPrius.hpp>

namespace rivet::ddl::generated {
	ChunkSpawnerPrius::ChunkSpawnerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		SpawnParams = serialized->unwrap_into<rivet::ddl::generated::ChunkSpawnParams>(SpawnParams_type_id);
		SpawnOnDeath = serialized->get_bool(SpawnOnDeath_type_id);
		HitDirectionBias = serialized->get_float(HitDirectionBias_type_id);
		SpawnItems = serialized->unwrap_into_many<rivet::ddl::generated::ChunkSpawnItem>(SpawnItems_type_id); 
	}

	[[nodiscard]] auto
	ChunkSpawnerPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ChunkSpawnerPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ChunkSpawnerPrius> {
		if (incoming_type_id == ChunkSpawnerPrius::type_id) {
			return std::make_shared<ChunkSpawnerPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
