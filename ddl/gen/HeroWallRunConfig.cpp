// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HeroWallRunConfig.hpp>

namespace rivet::ddl::generated {
	HeroWallRunConfig::HeroWallRunConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		WallRunEntrySpeed = serialized->get_float(WallRunEntrySpeed_type_id);
		WallRunMaxInputAngle = serialized->get_float(WallRunMaxInputAngle_type_id);
		WallRunSpeed = serialized->get_float(WallRunSpeed_type_id);
		WallRunDecel = serialized->get_float(WallRunDecel_type_id);
		WallRunCenteringSpeed = serialized->get_float(WallRunCenteringSpeed_type_id);
		WallRunCurvatureTolerance = serialized->get_float(WallRunCurvatureTolerance_type_id);
		WallRunMinInputCornerAngle = serialized->get_float(WallRunMinInputCornerAngle_type_id);
		WallRunMaxTime = serialized->get_float(WallRunMaxTime_type_id);
		WallRunForwardJumpAngle = serialized->get_float(WallRunForwardJumpAngle_type_id);
		WallRunForwardJumpInputAngle = serialized->get_float(WallRunForwardJumpInputAngle_type_id);
		WallRunNoInputForwardJump = serialized->get_bool(WallRunNoInputForwardJump_type_id);
		CamAdjustInputDelay = serialized->get_float(CamAdjustInputDelay_type_id);
		CamAdjustSpeedMax = serialized->get_float(CamAdjustSpeedMax_type_id);
		CamAdjustAccel = serialized->get_float(CamAdjustAccel_type_id);
		CamAdjustDecel = serialized->get_float(CamAdjustDecel_type_id);
		CamAdjustRelativeVertAngle = serialized->get_float(CamAdjustRelativeVertAngle_type_id);
		CamAdjustRelativeHorzAngle = serialized->get_float(CamAdjustRelativeHorzAngle_type_id);
		CamAdjustAngleTolerance = serialized->get_float(CamAdjustAngleTolerance_type_id); 
	}

	[[nodiscard]] auto
	HeroWallRunConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HeroWallRunConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroWallRunConfig> {
		if (incoming_type_id == HeroWallRunConfig::type_id) {
			return std::make_shared<HeroWallRunConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
