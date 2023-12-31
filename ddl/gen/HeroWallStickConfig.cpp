// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HeroWallStickConfig.hpp>

namespace rivet::ddl::generated {
	HeroWallStickConfig::HeroWallStickConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		WallStickGravity = serialized->get_float(WallStickGravity_type_id);
		WallStickTerminalVelocity = serialized->get_float(WallStickTerminalVelocity_type_id);
		WallStickNoSlideTime = serialized->get_float(WallStickNoSlideTime_type_id);
		WallStickMinGroundHeight = serialized->get_float(WallStickMinGroundHeight_type_id);
		WallStickFacingIntoWallThreshold = serialized->get_float(WallStickFacingIntoWallThreshold_type_id);
		WallJumpCameraAccel = serialized->get_float(WallJumpCameraAccel_type_id);
		WallJumpCameraDecel = serialized->get_float(WallJumpCameraDecel_type_id);
		WallJumpCameraMaxSpeedYaw = serialized->get_float(WallJumpCameraMaxSpeedYaw_type_id);
		WallJumpCameraMaxSpeedPitch = serialized->get_float(WallJumpCameraMaxSpeedPitch_type_id);
		WallJumpUpMinHeightGain = serialized->get_float(WallJumpUpMinHeightGain_type_id); 
	}

	[[nodiscard]] auto
	HeroWallStickConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HeroWallStickConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroWallStickConfig> {
		if (incoming_type_id == HeroWallStickConfig::type_id) {
			return std::make_shared<HeroWallStickConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
