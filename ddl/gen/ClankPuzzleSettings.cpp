// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ClankPuzzleSettings.hpp>

namespace rivet::ddl::generated {
	ClankPuzzleSettings::ClankPuzzleSettings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		SpawnVolumeOnAim = serialized->get_bool(SpawnVolumeOnAim_type_id);
		CanSlapBots = serialized->get_bool(CanSlapBots_type_id);
		SlapBotsTurn90 = serialized->get_bool(SlapBotsTurn90_type_id);
		CharactersWorldSpeed = serialized->get_bool(CharactersWorldSpeed_type_id);
		PortalSpeedStack = serialized->get_bool(PortalSpeedStack_type_id);
		WireRideSpeed = serialized->get_int32(WireRideSpeed_type_id);
		CanRecallShots = serialized->get_bool(CanRecallShots_type_id);
		CanTargetsAbsorb = serialized->get_bool(CanTargetsAbsorb_type_id);
		DeathOnBigMove = serialized->get_bool(DeathOnBigMove_type_id);
		ShowDebugDraw = serialized->get_bool(ShowDebugDraw_type_id);
		Logging = serialized->get_bool(Logging_type_id);
		ShowLockOnScores = serialized->get_bool(ShowLockOnScores_type_id); 
	}

	[[nodiscard]] auto
	ClankPuzzleSettings::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ClankPuzzleSettings::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ClankPuzzleSettings> {
		if (incoming_type_id == ClankPuzzleSettings::type_id) {
			return std::make_shared<ClankPuzzleSettings>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
