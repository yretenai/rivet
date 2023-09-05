// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/FinaleLaserCurve.hpp> 

#include <rivet/ddl/generated/FinaleLaserSweepConfig.hpp>

namespace rivet::ddl::generated {
	FinaleLaserSweepConfig::FinaleLaserSweepConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		WeaponActorVol = serialized->get_uint64(WeaponActorVol_type_id);
		CurveActor = serialized->get_uint64(CurveActor_type_id);
		GroundBlastTriggerVolume = serialized->get_uint64(GroundBlastTriggerVolume_type_id);
		CurveList = serialized->unwrap_into_many<rivet::ddl::generated::FinaleLaserCurve>(CurveList_type_id);
		DelayTime = serialized->get_float(DelayTime_type_id);
		InitialSpeed = serialized->get_float(InitialSpeed_type_id);
		GroundBlastAccel = serialized->get_float(GroundBlastAccel_type_id);
		GroundBlastMaxSpeed = serialized->get_float(GroundBlastMaxSpeed_type_id);
		GroundBlastRadius = serialized->get_float(GroundBlastRadius_type_id); 
	}

	auto
	FinaleLaserSweepConfig::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	FinaleLaserSweepConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	FinaleLaserSweepConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FinaleLaserSweepConfig> {
		if (incoming_type_id == FinaleLaserSweepConfig::type_id) {
			return std::make_shared<FinaleLaserSweepConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
