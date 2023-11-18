// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CameraAimContextVariableFOVConfig.hpp>
#include <rivet/ddl/generated/CameraAimContextBlend.hpp>
#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/CameraAimContextConfig.hpp>

namespace rivet::ddl::generated {
	CameraAimContextConfig::CameraAimContextConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		FieldOfViewStand = serialized->get_float(FieldOfViewStand_type_id);
		StandPivotHeight = serialized->get_float(StandPivotHeight_type_id);
		TargetSpeedFactorDist = serialized->get_float(TargetSpeedFactorDist_type_id);
		TargetSpeedFactorMinSpeed = serialized->get_float(TargetSpeedFactorMinSpeed_type_id);
		TargetSpeedFactorMaxSpeed = serialized->get_float(TargetSpeedFactorMaxSpeed_type_id);
		StandOffsetLevel = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(StandOffsetLevel_type_id);
		StandOffsetDown = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(StandOffsetDown_type_id);
		StandOffsetUp = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(StandOffsetUp_type_id);
		BlendIn = serialized->unwrap_into<rivet::ddl::generated::CameraAimContextBlend>(BlendIn_type_id);
		BlendOut = serialized->unwrap_into<rivet::ddl::generated::CameraAimContextBlend>(BlendOut_type_id);
		OverridesHeroConfig = serialized->get_bool(OverridesHeroConfig_type_id); 
	}

	[[nodiscard]] auto
	CameraAimContextConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CameraAimContextConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CameraAimContextConfig> {
		if (incoming_type_id == CameraAimContextConfig::type_id) {
			return std::make_shared<CameraAimContextConfig>(serialized);
		}

		auto CameraAimContextVariableFOVConfig_ptr = CameraAimContextVariableFOVConfig::from_substruct(incoming_type_id, serialized);
		if (CameraAimContextVariableFOVConfig_ptr != nullptr) {
			return CameraAimContextVariableFOVConfig_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
