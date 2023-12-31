// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VehicleObstaclePrius.hpp>

namespace rivet::ddl::generated {
	VehicleObstaclePrius::VehicleObstaclePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		RemoveVehicles = serialized->get_bool(RemoveVehicles_type_id); 
	}

	[[nodiscard]] auto
	VehicleObstaclePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VehicleObstaclePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VehicleObstaclePrius> {
		if (incoming_type_id == VehicleObstaclePrius::type_id) {
			return std::make_shared<VehicleObstaclePrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
