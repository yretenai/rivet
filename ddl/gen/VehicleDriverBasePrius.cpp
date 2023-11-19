// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VehicleDriverBasePrius.hpp>

namespace rivet::ddl::generated {
	VehicleDriverBasePrius::VehicleDriverBasePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {

	}

	[[nodiscard]] auto
	VehicleDriverBasePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VehicleDriverBasePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VehicleDriverBasePrius> {
		if (incoming_type_id == VehicleDriverBasePrius::type_id) {
			return std::make_shared<VehicleDriverBasePrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated