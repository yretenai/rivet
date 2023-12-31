// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HeroPortalZipLineData.hpp> 

#include <rivet/ddl/generated/HeroOpenPocketDimConfig.hpp>

namespace rivet::ddl::generated {
	HeroOpenPocketDimConfig::HeroOpenPocketDimConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		MinTargetDistance = serialized->get_float(MinTargetDistance_type_id);
		MaxTargetDistance = serialized->get_float(MaxTargetDistance_type_id);
		MaxAngleStartAutoTarget = serialized->get_float(MaxAngleStartAutoTarget_type_id);
		MinAngleEndAutoTarget = serialized->get_float(MinAngleEndAutoTarget_type_id);
		StopMomentumTime = serialized->get_float(StopMomentumTime_type_id);
		MaxMomentumDistance = serialized->get_float(MaxMomentumDistance_type_id);
		LineData = serialized->unwrap_into<rivet::ddl::generated::HeroPortalZipLineData>(LineData_type_id);
		CameraAimContext = serialized->get_string(CameraAimContext_type_id);
		PortalAimContext = serialized->get_string(PortalAimContext_type_id); 
	}

	[[nodiscard]] auto
	HeroOpenPocketDimConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HeroOpenPocketDimConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroOpenPocketDimConfig> {
		if (incoming_type_id == HeroOpenPocketDimConfig::type_id) {
			return std::make_shared<HeroOpenPocketDimConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
