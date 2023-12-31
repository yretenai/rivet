// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ItemPrereqNodeDef.hpp>
#include <rivet/ddl/generated/CharacterPrereqNodeDef.hpp>
#include <rivet/ddl/generated/MissionNodeGameDef.hpp>
#include <rivet/ddl/generated/ChallengeModePrereqNodeDef.hpp>
#include <rivet/ddl/generated/InitMissionGraphNodeGameDef.hpp> 

#include <rivet/ddl/generated/MissionGraphGameDef.hpp>

namespace rivet::ddl::generated {
	MissionGraphGameDef::MissionGraphGameDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): MissionGraphSharedDef(serialized) {
		InitNode = serialized->unwrap_into<rivet::ddl::generated::InitMissionGraphNodeGameDef>(InitNode_type_id);
		MissionNodes = serialized->unwrap_into_many<rivet::ddl::generated::MissionNodeGameDef>(MissionNodes_type_id);
		CharacterPrereqNodes = serialized->unwrap_into_many<rivet::ddl::generated::CharacterPrereqNodeDef>(CharacterPrereqNodes_type_id);
		ItemPrereqNodes = serialized->unwrap_into_many<rivet::ddl::generated::ItemPrereqNodeDef>(ItemPrereqNodes_type_id);
		ChallengeModePrereqNodes = serialized->unwrap_into_many<rivet::ddl::generated::ChallengeModePrereqNodeDef>(ChallengeModePrereqNodes_type_id); 
	}

	[[nodiscard]] auto
	MissionGraphGameDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MissionGraphGameDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MissionGraphGameDef> {
		if (incoming_type_id == MissionGraphGameDef::type_id) {
			return std::make_shared<MissionGraphGameDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
