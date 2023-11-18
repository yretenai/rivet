// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MissionStartObjectiveNodeGameDef.hpp> 

#include <rivet/ddl/generated/MissionStartObjectiveNodeSharedDef.hpp>

namespace rivet::ddl::generated {
	MissionStartObjectiveNodeSharedDef::MissionStartObjectiveNodeSharedDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): MissionSystemRootNodeBaseDef(serialized) {

	}

	[[nodiscard]] auto
	MissionStartObjectiveNodeSharedDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MissionStartObjectiveNodeSharedDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MissionStartObjectiveNodeSharedDef> {
		if (incoming_type_id == MissionStartObjectiveNodeSharedDef::type_id) {
			return std::make_shared<MissionStartObjectiveNodeSharedDef>(serialized);
		}

		auto MissionStartObjectiveNodeGameDef_ptr = MissionStartObjectiveNodeGameDef::from_substruct(incoming_type_id, serialized);
		if (MissionStartObjectiveNodeGameDef_ptr != nullptr) {
			return MissionStartObjectiveNodeGameDef_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
