// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/WeaponWarpRifleImplosionActivatedEvent.hpp>

namespace rivet::ddl::generated {
	WeaponWarpRifleImplosionActivatedEvent::WeaponWarpRifleImplosionActivatedEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		AOE = serialized->get_float(AOE_type_id); 
	}

	[[nodiscard]] auto
	WeaponWarpRifleImplosionActivatedEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	WeaponWarpRifleImplosionActivatedEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WeaponWarpRifleImplosionActivatedEvent> {
		if (incoming_type_id == WeaponWarpRifleImplosionActivatedEvent::type_id) {
			return std::make_shared<WeaponWarpRifleImplosionActivatedEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
