// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/RegisterAttackCooldownData.hpp>
#include <rivet/ddl/generated/BotComboMoveBase.hpp> 

#include <rivet/ddl/generated/BotComboMoveContainer.hpp>

namespace rivet::ddl::generated {
	BotComboMoveContainer::BotComboMoveContainer([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		StartDistanceMin = serialized->get_float(StartDistanceMin_type_id);
		StartDistanceMax = serialized->get_float(StartDistanceMax_type_id);
		StartDistanceOffScreen = serialized->get_float(StartDistanceOffScreen_type_id);
		StartHeightMin = serialized->get_float(StartHeightMin_type_id);
		StartHeightMax = serialized->get_float(StartHeightMax_type_id);
		RequireClearNavPath = serialized->get_bool(RequireClearNavPath_type_id);
		DistToForceAttackIfNoNav = serialized->get_float(DistToForceAttackIfNoNav_type_id);
		RequireLOS = serialized->get_bool(RequireLOS_type_id);
		FailOnNoLOS = serialized->get_bool(FailOnNoLOS_type_id);
		RequireOnScreen = serialized->get_bool(RequireOnScreen_type_id);
		CanReposition = serialized->get_bool(CanReposition_type_id);
		StopComboIfFailed = serialized->get_bool(StopComboIfFailed_type_id);
		StopComboIfSuccess = serialized->get_bool(StopComboIfSuccess_type_id);
		AbortDistMin = serialized->get_float(AbortDistMin_type_id);
		AbortDistMax = serialized->get_float(AbortDistMax_type_id);
		MaxGotoDuration = serialized->get_float(MaxGotoDuration_type_id);
		MaxWaitDuration = serialized->get_float(MaxWaitDuration_type_id);
		AbortIfOffScreen = serialized->get_bool(AbortIfOffScreen_type_id);
		BotComboMoveCooldowns = serialized->unwrap_into_many<rivet::ddl::generated::RegisterAttackCooldownData>(BotComboMoveCooldowns_type_id);
		Move = serialized->unwrap_into<rivet::ddl::generated::BotComboMoveBase>(Move_type_id); 
	}

	auto
	BotComboMoveContainer::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	BotComboMoveContainer::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BotComboMoveContainer::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotComboMoveContainer> {
		if (incoming_type_id == BotComboMoveContainer::type_id) {
			return std::make_shared<BotComboMoveContainer>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
