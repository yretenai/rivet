// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MountFlyerPickupUnreadyEvent.hpp>

namespace rivet::ddl::generated {
	MountFlyerPickupUnreadyEvent::MountFlyerPickupUnreadyEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	MountFlyerPickupUnreadyEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MountFlyerPickupUnreadyEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MountFlyerPickupUnreadyEvent> {
		if (incoming_type_id == MountFlyerPickupUnreadyEvent::type_id) {
			return std::make_shared<MountFlyerPickupUnreadyEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
