// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/FlyerPickupStartEvent.hpp>

namespace rivet::ddl::generated {
	FlyerPickupStartEvent::FlyerPickupStartEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	FlyerPickupStartEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	FlyerPickupStartEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FlyerPickupStartEvent> {
		if (incoming_type_id == FlyerPickupStartEvent::type_id) {
			return std::make_shared<FlyerPickupStartEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
