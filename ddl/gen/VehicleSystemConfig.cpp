// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VehicleCollisionInfo.hpp>
#include <rivet/ddl/generated/VehicleCurveFollowerPrius.hpp>
#include <rivet/ddl/generated/VehicleCurveGeneratorInfo.hpp> 

#include <rivet/ddl/generated/VehicleSystemConfig.hpp>

namespace rivet::ddl::generated {
	VehicleSystemConfig::VehicleSystemConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		LaneWidth = serialized->get_float(LaneWidth_type_id);
		MaxLaneSpacing = serialized->get_float(MaxLaneSpacing_type_id);
		LaneSwitchPeriod = serialized->get_float(LaneSwitchPeriod_type_id);
		CurveGeneratorInfo = serialized->unwrap_into<rivet::ddl::generated::VehicleCurveGeneratorInfo>(CurveGeneratorInfo_type_id);
		MotionPrius = serialized->unwrap_into<rivet::ddl::generated::VehicleCurveFollowerPrius>(MotionPrius_type_id);
		CollisionInfo = serialized->unwrap_into<rivet::ddl::generated::VehicleCollisionInfo>(CollisionInfo_type_id);
		MaxFxUpdateDistance = serialized->get_float(MaxFxUpdateDistance_type_id);
		MaxCulledFxDistance = serialized->get_float(MaxCulledFxDistance_type_id);
		MaxFxDistance = serialized->get_float(MaxFxDistance_type_id);
		MaxCulledLightDistance = serialized->get_float(MaxCulledLightDistance_type_id);
		MaxLightDistance = serialized->get_float(MaxLightDistance_type_id);
		SlowSignalDecelCoeff = serialized->get_float(SlowSignalDecelCoeff_type_id);
		LightingModesToUseHeadlights = serialized->get_enums<rivet::ddl::generated::LightingMode>(LightingModesToUseHeadlights_type_id, rivet::ddl::generated::LightingMode_values); 
	}

	[[nodiscard]] auto
	VehicleSystemConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VehicleSystemConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VehicleSystemConfig> {
		if (incoming_type_id == VehicleSystemConfig::type_id) {
			return std::make_shared<VehicleSystemConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
