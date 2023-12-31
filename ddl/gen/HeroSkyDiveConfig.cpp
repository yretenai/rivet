// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HeroSkyDiveConfig.hpp>

namespace rivet::ddl::generated {
	HeroSkyDiveConfig::HeroSkyDiveConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		MinLeftRightSpeed = serialized->get_float(MinLeftRightSpeed_type_id);
		MinForwardBackSpeed = serialized->get_float(MinForwardBackSpeed_type_id);
		MinLeftRightAccel = serialized->get_float(MinLeftRightAccel_type_id);
		MinForwardBackAccel = serialized->get_float(MinForwardBackAccel_type_id);
		LeftRightTravelTime = serialized->get_float(LeftRightTravelTime_type_id);
		ForwardBackTravelTime = serialized->get_float(ForwardBackTravelTime_type_id);
		LeftRightTimeToMaxSpeed = serialized->get_float(LeftRightTimeToMaxSpeed_type_id);
		ForwardBackTimeToMaxSpeed = serialized->get_float(ForwardBackTimeToMaxSpeed_type_id);
		CameraShakeConfig = serialized->get_string(CameraShakeConfig_type_id); 
	}

	[[nodiscard]] auto
	HeroSkyDiveConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HeroSkyDiveConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroSkyDiveConfig> {
		if (incoming_type_id == HeroSkyDiveConfig::type_id) {
			return std::make_shared<HeroSkyDiveConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
