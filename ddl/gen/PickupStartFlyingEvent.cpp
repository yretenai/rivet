// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PickupStartFlyingEvent.hpp>

namespace rivet::ddl::generated {
	PickupStartFlyingEvent::PickupStartFlyingEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	PickupStartFlyingEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PickupStartFlyingEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PickupStartFlyingEvent> {
		if (incoming_type_id == PickupStartFlyingEvent::type_id) {
			return std::make_shared<PickupStartFlyingEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
