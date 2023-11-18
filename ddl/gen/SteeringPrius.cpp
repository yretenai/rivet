// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SteeringPartnerCurveConfig.hpp> 

#include <rivet/ddl/generated/SteeringPrius.hpp>

namespace rivet::ddl::generated {
	SteeringPrius::SteeringPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActorHeight = serialized->get_float(ActorHeight_type_id);
		NavCollRadiusHard = serialized->get_float(NavCollRadiusHard_type_id);
		NavCollRadiusSoft = serialized->get_float(NavCollRadiusSoft_type_id);
		AlwaysUseAccel = serialized->get_bool(AlwaysUseAccel_type_id);
		UseNavPositionTrackerQueries = serialized->get_bool(UseNavPositionTrackerQueries_type_id);
		PartnerData = serialized->unwrap_into<rivet::ddl::generated::SteeringPartnerCurveConfig>(PartnerData_type_id); 
	}

	[[nodiscard]] auto
	SteeringPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SteeringPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SteeringPrius> {
		if (incoming_type_id == SteeringPrius::type_id) {
			return std::make_shared<SteeringPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
