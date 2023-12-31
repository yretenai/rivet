// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AirborneData.hpp>
#include <rivet/ddl/generated/FlyBackData.hpp>
#include <rivet/ddl/generated/DazeData.hpp> 

#include <rivet/ddl/generated/KineticReactConfig.hpp>

namespace rivet::ddl::generated {
	KineticReactConfig::KineticReactConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		Daze = serialized->unwrap_into<rivet::ddl::generated::DazeData>(Daze_type_id);
		FlyBack = serialized->unwrap_into<rivet::ddl::generated::FlyBackData>(FlyBack_type_id);
		Airborne = serialized->unwrap_into<rivet::ddl::generated::AirborneData>(Airborne_type_id);
		PopUp = serialized->unwrap_into<rivet::ddl::generated::AirborneData>(PopUp_type_id);
		BaseCollisionDamage = serialized->get_float(BaseCollisionDamage_type_id);
		MinCollisionSpeed = serialized->get_float(MinCollisionSpeed_type_id);
		AutoKillFallDistance = serialized->get_float(AutoKillFallDistance_type_id);
		AutoTargetCone = serialized->get_float(AutoTargetCone_type_id); 
	}

	[[nodiscard]] auto
	KineticReactConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	KineticReactConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<KineticReactConfig> {
		if (incoming_type_id == KineticReactConfig::type_id) {
			return std::make_shared<KineticReactConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
