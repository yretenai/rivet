// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PickupShipMissilePrius.hpp>

namespace rivet::ddl::generated {
	PickupShipMissilePrius::PickupShipMissilePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): GamePickupItemPrius(serialized) {

	}

	[[nodiscard]] auto
	PickupShipMissilePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PickupShipMissilePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PickupShipMissilePrius> {
		if (incoming_type_id == PickupShipMissilePrius::type_id) {
			return std::make_shared<PickupShipMissilePrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
