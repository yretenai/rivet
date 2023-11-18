// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PathHazardPrius.hpp>

namespace rivet::ddl::generated {
	PathHazardPrius::PathHazardPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		TrackingDistance = serialized->get_float(TrackingDistance_type_id);
		TrackingSpeed = serialized->get_float(TrackingSpeed_type_id);
		TrackingAccel = serialized->get_float(TrackingAccel_type_id);
		TrackingDecel = serialized->get_float(TrackingDecel_type_id);
		TelegraphTime = serialized->get_float(TelegraphTime_type_id);
		RetreatTime = serialized->get_float(RetreatTime_type_id);
		MovementCurve = serialized->get_uint64(MovementCurve_type_id);
		CurveYPosOffset = serialized->get_float(CurveYPosOffset_type_id);
		IdleSpeed = serialized->get_float(IdleSpeed_type_id);
		IdleAccel = serialized->get_float(IdleAccel_type_id);
		IdleDecel = serialized->get_float(IdleDecel_type_id); 
	}

	[[nodiscard]] auto
	PathHazardPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PathHazardPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PathHazardPrius> {
		if (incoming_type_id == PathHazardPrius::type_id) {
			return std::make_shared<PathHazardPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
