// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AimAssistCurveData.hpp> 

#include <rivet/ddl/generated/AimAssistFrictionData.hpp>

namespace rivet::ddl::generated {
	AimAssistFrictionData::AimAssistFrictionData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Enable = serialized->get_bool(Enable_type_id, true);
		BoxProcessing = serialized->unwrap_into<rivet::ddl::generated::AimAssistCurveData>(BoxProcessing_type_id);
		StickMin = serialized->get_float(StickMin_type_id, 0.200000);
		StickMax = serialized->get_float(StickMax_type_id, 0.850000);
		FactorMin = serialized->get_float(FactorMin_type_id, 1.000000);
		FactorMax = serialized->get_float(FactorMax_type_id, 1.000000);
		FactorCurve = serialized->get_float(FactorCurve_type_id, 1.000000);
		SpeedScale = serialized->get_float(SpeedScale_type_id, 0.900000); 
	}

	[[nodiscard]] auto
	AimAssistFrictionData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AimAssistFrictionData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AimAssistFrictionData> {
		if (incoming_type_id == AimAssistFrictionData::type_id) {
			return std::make_shared<AimAssistFrictionData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
