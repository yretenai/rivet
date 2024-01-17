// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VehiclePushablePrius.hpp>

namespace rivet::ddl::generated {
	VehiclePushablePrius::VehiclePushablePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): VehicleBasePrius(serialized) {
		Friction = serialized->get_float(Friction_type_id, 0.200000);
		TorqueDecay = serialized->get_float(TorqueDecay_type_id, 0.900000);
		Mass = serialized->get_float(Mass_type_id, 20.000000);
		MaxAutoAccel = serialized->get_float(MaxAutoAccel_type_id, 0.000000); 
	}

	[[nodiscard]] auto
	VehiclePushablePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VehiclePushablePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VehiclePushablePrius> {
		if (incoming_type_id == VehiclePushablePrius::type_id) {
			return std::make_shared<VehiclePushablePrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
