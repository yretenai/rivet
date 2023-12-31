// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ObjectiveRewardArray.hpp> 

#include <rivet/ddl/generated/MissionObjective.hpp>

namespace rivet::ddl::generated {
	MissionObjective::MissionObjective([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ObjectiveName = serialized->get_string(ObjectiveName_type_id);
		ObjectiveDisplayName = serialized->get_string(ObjectiveDisplayName_type_id);
		LocTagObjectiveDisplayName = serialized->get_string(LocTagObjectiveDisplayName_type_id);
		Description = serialized->get_string(Description_type_id);
		LocTagDescription = serialized->get_string(LocTagDescription_type_id);
		Checkpoint = serialized->get_string(Checkpoint_type_id);
		OverrideLightingMode = serialized->get_bool(OverrideLightingMode_type_id);
		LightingMode = serialized->get_enum<rivet::ddl::generated::LightingMode>(LightingMode_type_id, rivet::ddl::generated::LightingMode_values);
		HideObjective = serialized->get_bool(HideObjective_type_id);
		OnlyShowOnLoad = serialized->get_bool(OnlyShowOnLoad_type_id);
		NoSave = serialized->get_bool(NoSave_type_id);
		NoSaveMission = serialized->get_bool(NoSaveMission_type_id);
		NoReload = serialized->get_bool(NoReload_type_id);
		ShowAsMissionComplete = serialized->get_bool(ShowAsMissionComplete_type_id);
		ObjectiveDisplayNameCharacter2 = serialized->get_string(ObjectiveDisplayNameCharacter2_type_id);
		LocTagObjectiveDisplayNameCharacter2 = serialized->get_string(LocTagObjectiveDisplayNameCharacter2_type_id);
		DescriptionCharacter2 = serialized->get_string(DescriptionCharacter2_type_id);
		LocTagDescriptionCharacter2 = serialized->get_string(LocTagDescriptionCharacter2_type_id);
		ObjectiveRewards = serialized->unwrap_into_many<rivet::ddl::generated::ObjectiveRewardArray>(ObjectiveRewards_type_id); 
	}

	[[nodiscard]] auto
	MissionObjective::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MissionObjective::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MissionObjective> {
		if (incoming_type_id == MissionObjective::type_id) {
			return std::make_shared<MissionObjective>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
