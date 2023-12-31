// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ShipOutOfAmmoEvent.hpp>

namespace rivet::ddl::generated {
	ShipOutOfAmmoEvent::ShipOutOfAmmoEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	ShipOutOfAmmoEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ShipOutOfAmmoEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ShipOutOfAmmoEvent> {
		if (incoming_type_id == ShipOutOfAmmoEvent::type_id) {
			return std::make_shared<ShipOutOfAmmoEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
