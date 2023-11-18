// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/FlyerPickupLaunchEvent.hpp>

namespace rivet::ddl::generated {
	FlyerPickupLaunchEvent::FlyerPickupLaunchEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	FlyerPickupLaunchEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	FlyerPickupLaunchEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FlyerPickupLaunchEvent> {
		if (incoming_type_id == FlyerPickupLaunchEvent::type_id) {
			return std::make_shared<FlyerPickupLaunchEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
