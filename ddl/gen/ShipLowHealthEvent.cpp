// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ShipLowHealthEvent.hpp>

namespace rivet::ddl::generated {
	ShipLowHealthEvent::ShipLowHealthEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	ShipLowHealthEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ShipLowHealthEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ShipLowHealthEvent> {
		if (incoming_type_id == ShipLowHealthEvent::type_id) {
			return std::make_shared<ShipLowHealthEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
