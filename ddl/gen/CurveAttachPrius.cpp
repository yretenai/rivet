// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CurveAttachPrius.hpp>

namespace rivet::ddl::generated {
	CurveAttachPrius::CurveAttachPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		StartAttachActor = serialized->get_uint64(StartAttachActor_type_id, 0ull);
		StartAttachRelative = serialized->get_bool(StartAttachRelative_type_id, true);
		EndAttachActor = serialized->get_uint64(EndAttachActor_type_id, 0ull);
		EndAttachRelative = serialized->get_bool(EndAttachRelative_type_id, true);
		CurveLength = serialized->get_float(CurveLength_type_id, -1.000000f);
		SwayMaxAngle = serialized->get_float(SwayMaxAngle_type_id, 10.000000f);
		SwayFrequency = serialized->get_float(SwayFrequency_type_id, 2.500000f);
		StretchMaxDistance = serialized->get_float(StretchMaxDistance_type_id, 10.000000f);
		StretchFrequency = serialized->get_float(StretchFrequency_type_id, 2.000000f);
		CurveModel = serialized->get_string(CurveModel_type_id, {});
		CurveStartJoint = serialized->get_string(CurveStartJoint_type_id, {});
		CurveEndJoint = serialized->get_string(CurveEndJoint_type_id, {});
		CurveModelVerticalOffset = serialized->get_float(CurveModelVerticalOffset_type_id, 0.000000f);
		CurveModelHorizontalOffset = serialized->get_float(CurveModelHorizontalOffset_type_id, 0.000000f);
		UseLinearCurveSegments = serialized->get_bool(UseLinearCurveSegments_type_id, true); 
	}

	[[nodiscard]] auto
	CurveAttachPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CurveAttachPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CurveAttachPrius> {
		if (incoming_type_id == CurveAttachPrius::type_id) {
			return std::make_shared<CurveAttachPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
