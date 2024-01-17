// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CurveFollowerAutoPrius.hpp>

namespace rivet::ddl::generated {
	CurveFollowerAutoPrius::CurveFollowerAutoPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Curve = serialized->get_uint64(Curve_type_id, 0);
		OpenCurveFollowMode = serialized->get_enum<rivet::ddl::generated::OpenCurveFollowMode>(OpenCurveFollowMode_type_id, rivet::ddl::generated::OpenCurveFollowMode_values, rivet::ddl::generated::OpenCurveFollowMode::OneShot);
		Speed = serialized->get_float(Speed_type_id, 5.000000);
		WaitDuration = serialized->get_float(WaitDuration_type_id, 1.000000);
		TransitionMinDistFactor = serialized->get_float(TransitionMinDistFactor_type_id, 0.200000);
		TransitionMaxDistFactor = serialized->get_float(TransitionMaxDistFactor_type_id, 0.500000);
		TransitionAngleFactor = serialized->get_float(TransitionAngleFactor_type_id, 0.250000);
		TransitionMaxTurnRate = serialized->get_float(TransitionMaxTurnRate_type_id, 45.000000);
		StartOnInit = serialized->get_bool(StartOnInit_type_id, true);
		StartReversed = serialized->get_bool(StartReversed_type_id, false);
		StartOnClosestPoint = serialized->get_bool(StartOnClosestPoint_type_id, false);
		DeleteAtEnd = serialized->get_bool(DeleteAtEnd_type_id, false); 
	}

	[[nodiscard]] auto
	CurveFollowerAutoPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CurveFollowerAutoPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CurveFollowerAutoPrius> {
		if (incoming_type_id == CurveFollowerAutoPrius::type_id) {
			return std::make_shared<CurveFollowerAutoPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
