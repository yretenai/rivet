// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MissionNodeGameDef_Tools.hpp>
#include <rivet/ddl/generated/NotMissionSystemNodeDef_Tools.hpp>
#include <rivet/ddl/generated/AndMissionSystemNodeDef_Tools.hpp>
#include <rivet/ddl/generated/OrMissionSystemNodeDef_Tools.hpp>
#include <rivet/ddl/generated/InitMissionGraphNodeGameDef_Tools.hpp> 

#include <rivet/ddl/generated/MissionGraphGameDef_Tools.hpp>

namespace rivet::ddl::generated {
	MissionGraphGameDef_Tools::MissionGraphGameDef_Tools([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): GameplayNodeGraphBaseDef(serialized) {
		InitNode = serialized->unwrap_into<rivet::ddl::generated::InitMissionGraphNodeGameDef_Tools>(InitNode_type_id);
		OrNodes = serialized->unwrap_into_many<rivet::ddl::generated::OrMissionSystemNodeDef_Tools>(OrNodes_type_id);
		AndNodes = serialized->unwrap_into_many<rivet::ddl::generated::AndMissionSystemNodeDef_Tools>(AndNodes_type_id);
		NotNodes = serialized->unwrap_into_many<rivet::ddl::generated::NotMissionSystemNodeDef_Tools>(NotNodes_type_id);
		MissionNodes = serialized->unwrap_into_many<rivet::ddl::generated::MissionNodeGameDef_Tools>(MissionNodes_type_id); 
	}

	[[nodiscard]] auto
	MissionGraphGameDef_Tools::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MissionGraphGameDef_Tools::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MissionGraphGameDef_Tools> {
		if (incoming_type_id == MissionGraphGameDef_Tools::type_id) {
			return std::make_shared<MissionGraphGameDef_Tools>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
