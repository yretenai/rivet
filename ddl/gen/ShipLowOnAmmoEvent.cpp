// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ShipLowOnAmmoEvent.hpp>

namespace rivet::ddl::generated {
	ShipLowOnAmmoEvent::ShipLowOnAmmoEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	ShipLowOnAmmoEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ShipLowOnAmmoEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ShipLowOnAmmoEvent> {
		if (incoming_type_id == ShipLowOnAmmoEvent::type_id) {
			return std::make_shared<ShipLowOnAmmoEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
