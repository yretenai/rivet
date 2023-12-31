// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HeroBounceConfig.hpp>

namespace rivet::ddl::generated {
	HeroBounceConfig::HeroBounceConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		AssistMaxSurfaceNormalAngle = serialized->get_float(AssistMaxSurfaceNormalAngle_type_id);
		AssistRadiusHoriz = serialized->get_float(AssistRadiusHoriz_type_id);
		AssistRadiusVert = serialized->get_float(AssistRadiusVert_type_id);
		MinAssistDistHoriz = serialized->get_float(MinAssistDistHoriz_type_id);
		MaxAngleAtMinAssistDist = serialized->get_float(MaxAngleAtMinAssistDist_type_id);
		MaxAngleAtMaxAssistDist = serialized->get_float(MaxAngleAtMaxAssistDist_type_id);
		AssistAngleScoreWeight = serialized->get_float(AssistAngleScoreWeight_type_id);
		AssistDistScoreWeight = serialized->get_float(AssistDistScoreWeight_type_id);
		AssistInputWeight = serialized->get_float(AssistInputWeight_type_id);
		BonusHeightForButtonPress = serialized->get_float(BonusHeightForButtonPress_type_id);
		CameraShakeConfig = serialized->get_string(CameraShakeConfig_type_id);
		BounceFollowCameraUserConfig = serialized->get_string(BounceFollowCameraUserConfig_type_id);
		CasualBounceFollowCameraUserConfig = serialized->get_string(CasualBounceFollowCameraUserConfig_type_id);
		SuperBounceFollowCameraUserConfig = serialized->get_string(SuperBounceFollowCameraUserConfig_type_id);
		CasualSuperBounceFollowCameraUserConfig = serialized->get_string(CasualSuperBounceFollowCameraUserConfig_type_id); 
	}

	[[nodiscard]] auto
	HeroBounceConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HeroBounceConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroBounceConfig> {
		if (incoming_type_id == HeroBounceConfig::type_id) {
			return std::make_shared<HeroBounceConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
