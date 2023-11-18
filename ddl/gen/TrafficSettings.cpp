// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TrafficSettings.hpp>

namespace rivet::ddl::generated {
	TrafficSettings::TrafficSettings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		MaxNodes = serialized->get_int32(MaxNodes_type_id);
		MaxObstacles = serialized->get_int32(MaxObstacles_type_id);
		InstantiationBudget = serialized->get_float(InstantiationBudget_type_id);
		InstantiationBudgetPerfMode = serialized->get_float(InstantiationBudgetPerfMode_type_id);
		InstantiationBudgetMediumPerfMode = serialized->get_float(InstantiationBudgetMediumPerfMode_type_id);
		InstantiationBudgetLowPerfMode = serialized->get_float(InstantiationBudgetLowPerfMode_type_id);
		SpawnsPerFrame = serialized->get_uint32(SpawnsPerFrame_type_id); 
	}

	[[nodiscard]] auto
	TrafficSettings::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TrafficSettings::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TrafficSettings> {
		if (incoming_type_id == TrafficSettings::type_id) {
			return std::make_shared<TrafficSettings>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
