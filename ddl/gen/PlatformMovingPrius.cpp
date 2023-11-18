// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PlatformMovingElevatorPrius.hpp>
#include <rivet/ddl/generated/DDLVector3.hpp>
#include <rivet/ddl/generated/PlatformMovingStopItem.hpp> 

#include <rivet/ddl/generated/PlatformMovingPrius.hpp>

namespace rivet::ddl::generated {
	PlatformMovingPrius::PlatformMovingPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		InitPosition = serialized->get_enum<rivet::ddl::generated::xb8f8f0e5>(InitPosition_type_id, rivet::ddl::generated::xb8f8f0e5_values);
		Orientation = serialized->get_enum<rivet::ddl::generated::x3cdeb00d>(Orientation_type_id, rivet::ddl::generated::x3cdeb00d_values);
		StopList = serialized->unwrap_into_many<rivet::ddl::generated::PlatformMovingStopItem>(StopList_type_id);
		MotionPath = serialized->get_uint64(MotionPath_type_id);
		SpeedAccel = serialized->get_float(SpeedAccel_type_id);
		SpeedDecel = serialized->get_float(SpeedDecel_type_id);
		SpeedMax = serialized->get_float(SpeedMax_type_id);
		LookAtActor = serialized->get_uint64(LookAtActor_type_id);
		AllowCallWhenMoving = serialized->get_bool(AllowCallWhenMoving_type_id);
		LockRiders = serialized->get_bool(LockRiders_type_id);
		OfferLocator = serialized->get_string(OfferLocator_type_id);
		OfferOffset = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(OfferOffset_type_id);
		ApproachStopTime = serialized->get_float(ApproachStopTime_type_id); 
	}

	[[nodiscard]] auto
	PlatformMovingPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PlatformMovingPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PlatformMovingPrius> {
		if (incoming_type_id == PlatformMovingPrius::type_id) {
			return std::make_shared<PlatformMovingPrius>(serialized);
		}

		auto PlatformMovingElevatorPrius_ptr = PlatformMovingElevatorPrius::from_substruct(incoming_type_id, serialized);
		if (PlatformMovingElevatorPrius_ptr != nullptr) {
			return PlatformMovingElevatorPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
