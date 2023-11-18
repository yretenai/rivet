// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/InitMissionGraphNodeGameDef.hpp> 

#include <rivet/ddl/generated/InitMissionGraphNodeSharedDef.hpp>

namespace rivet::ddl::generated {
	InitMissionGraphNodeSharedDef::InitMissionGraphNodeSharedDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): MissionSystemRootNodeBaseDef(serialized) {

	}

	[[nodiscard]] auto
	InitMissionGraphNodeSharedDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	InitMissionGraphNodeSharedDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<InitMissionGraphNodeSharedDef> {
		if (incoming_type_id == InitMissionGraphNodeSharedDef::type_id) {
			return std::make_shared<InitMissionGraphNodeSharedDef>(serialized);
		}

		auto InitMissionGraphNodeGameDef_ptr = InitMissionGraphNodeGameDef::from_substruct(incoming_type_id, serialized);
		if (InitMissionGraphNodeGameDef_ptr != nullptr) {
			return InitMissionGraphNodeGameDef_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
