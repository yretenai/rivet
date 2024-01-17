// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/OnRailsAccelerationData.hpp> 

#include <rivet/ddl/generated/MovementFlyOnRails.hpp>

namespace rivet::ddl::generated {
	MovementFlyOnRails::MovementFlyOnRails([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		OnRailsAnimName = serialized->get_string(OnRailsAnimName_type_id, {});
		BodyHorizontalAnimAccel = serialized->get_float(BodyHorizontalAnimAccel_type_id, 5.000000);
		BodyHorizontalAnimDecel = serialized->get_float(BodyHorizontalAnimDecel_type_id, 5.000000);
		BodyHorizontalAnimMaxSpeed = serialized->get_float(BodyHorizontalAnimMaxSpeed_type_id, 10.000000);
		BodyVerticalAnimAccel = serialized->get_float(BodyVerticalAnimAccel_type_id, 5.000000);
		BodyVerticalAnimDecel = serialized->get_float(BodyVerticalAnimDecel_type_id, 10.000000);
		BodyVerticalAnimMaxSpeed = serialized->get_float(BodyVerticalAnimMaxSpeed_type_id, 10.000000);
		HeadHorizontalAnimAccel = serialized->get_float(HeadHorizontalAnimAccel_type_id, 8.000000);
		HeadHorizontalAnimDecel = serialized->get_float(HeadHorizontalAnimDecel_type_id, 8.000000);
		HeadHorizontalAnimMaxSpeed = serialized->get_float(HeadHorizontalAnimMaxSpeed_type_id, 5.000000);
		HeadVerticalAnimAccel = serialized->get_float(HeadVerticalAnimAccel_type_id, 8.000000);
		HeadVerticalAnimDecel = serialized->get_float(HeadVerticalAnimDecel_type_id, 8.000000);
		HeadVerticalAnimMaxSpeed = serialized->get_float(HeadVerticalAnimMaxSpeed_type_id, 5.000000);
		TailHorizontalAnimAccel = serialized->get_float(TailHorizontalAnimAccel_type_id, 5.000000);
		TailHorizontalAnimDecel = serialized->get_float(TailHorizontalAnimDecel_type_id, 5.000000);
		TailHorizontalAnimMaxSpeed = serialized->get_float(TailHorizontalAnimMaxSpeed_type_id, 10.000000);
		TailVerticalAnimAccel = serialized->get_float(TailVerticalAnimAccel_type_id, 5.000000);
		TailVerticalAnimDecel = serialized->get_float(TailVerticalAnimDecel_type_id, 10.000000);
		TailVerticalAnimMaxSpeed = serialized->get_float(TailVerticalAnimMaxSpeed_type_id, 10.000000);
		AccelerationData = serialized->unwrap_into<rivet::ddl::generated::OnRailsAccelerationData>(AccelerationData_type_id);
		DeflectionSpeed = serialized->get_float(DeflectionSpeed_type_id, 10.000000);
		MinDeflectionTime = serialized->get_float(MinDeflectionTime_type_id, 0.500000); 
	}

	[[nodiscard]] auto
	MovementFlyOnRails::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MovementFlyOnRails::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MovementFlyOnRails> {
		if (incoming_type_id == MovementFlyOnRails::type_id) {
			return std::make_shared<MovementFlyOnRails>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
