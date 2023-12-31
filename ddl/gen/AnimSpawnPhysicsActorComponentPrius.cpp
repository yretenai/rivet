// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SpawnPhysicsActorEntry.hpp> 

#include <rivet/ddl/generated/AnimSpawnPhysicsActorComponentPrius.hpp>

namespace rivet::ddl::generated {
	AnimSpawnPhysicsActorComponentPrius::AnimSpawnPhysicsActorComponentPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		SpawnList = serialized->unwrap_into_many<rivet::ddl::generated::SpawnPhysicsActorEntry>(SpawnList_type_id); 
	}

	[[nodiscard]] auto
	AnimSpawnPhysicsActorComponentPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AnimSpawnPhysicsActorComponentPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimSpawnPhysicsActorComponentPrius> {
		if (incoming_type_id == AnimSpawnPhysicsActorComponentPrius::type_id) {
			return std::make_shared<AnimSpawnPhysicsActorComponentPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
