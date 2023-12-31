// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SpawnSyncedActorForHitMapping.hpp> 

#include <rivet/ddl/generated/SpawnSyncedActorForHitMapPrius.hpp>

namespace rivet::ddl::generated {
	SpawnSyncedActorForHitMapPrius::SpawnSyncedActorForHitMapPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Map = serialized->unwrap_into_many<rivet::ddl::generated::SpawnSyncedActorForHitMapping>(Map_type_id); 
	}

	[[nodiscard]] auto
	SpawnSyncedActorForHitMapPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SpawnSyncedActorForHitMapPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SpawnSyncedActorForHitMapPrius> {
		if (incoming_type_id == SpawnSyncedActorForHitMapPrius::type_id) {
			return std::make_shared<SpawnSyncedActorForHitMapPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
