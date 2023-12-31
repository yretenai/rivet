// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HazardTurretTargeting.hpp>

namespace rivet::ddl::generated {
	HazardTurretTargeting::HazardTurretTargeting([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		FOVAngle = serialized->get_float(FOVAngle_type_id);
		Range = serialized->get_float(Range_type_id);
		WarningTime = serialized->get_float(WarningTime_type_id);
		CooldownTime = serialized->get_float(CooldownTime_type_id);
		TurnSpeed = serialized->get_float(TurnSpeed_type_id); 
	}

	[[nodiscard]] auto
	HazardTurretTargeting::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HazardTurretTargeting::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HazardTurretTargeting> {
		if (incoming_type_id == HazardTurretTargeting::type_id) {
			return std::make_shared<HazardTurretTargeting>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
