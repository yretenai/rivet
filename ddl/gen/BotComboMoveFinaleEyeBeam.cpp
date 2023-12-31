// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/EyeBeamFiringPattern.hpp> 

#include <rivet/ddl/generated/BotComboMoveFinaleEyeBeam.hpp>

namespace rivet::ddl::generated {
	BotComboMoveFinaleEyeBeam::BotComboMoveFinaleEyeBeam([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): BotComboMoveBase(serialized) {
		PortalActorAsset = serialized->get_string(PortalActorAsset_type_id);
		HeadActorAsset = serialized->get_string(HeadActorAsset_type_id);
		HeadActorVol = serialized->get_uint64(HeadActorVol_type_id);
		SpawnedShotConfig = serialized->get_string(SpawnedShotConfig_type_id);
		RemainAfterAttack = serialized->get_bool(RemainAfterAttack_type_id);
		CancelOutOfVolume = serialized->get_bool(CancelOutOfVolume_type_id);
		FiringPatterns = serialized->unwrap_into_many<rivet::ddl::generated::EyeBeamFiringPattern>(FiringPatterns_type_id); 
	}

	[[nodiscard]] auto
	BotComboMoveFinaleEyeBeam::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BotComboMoveFinaleEyeBeam::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotComboMoveFinaleEyeBeam> {
		if (incoming_type_id == BotComboMoveFinaleEyeBeam::type_id) {
			return std::make_shared<BotComboMoveFinaleEyeBeam>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
