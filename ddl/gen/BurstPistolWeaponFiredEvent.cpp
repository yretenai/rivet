// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BurstPistolWeaponFiredEvent.hpp>

namespace rivet::ddl::generated {
	BurstPistolWeaponFiredEvent::BurstPistolWeaponFiredEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): WeaponTriggeredEvent(serialized) {

	}

	[[nodiscard]] auto
	BurstPistolWeaponFiredEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BurstPistolWeaponFiredEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BurstPistolWeaponFiredEvent> {
		if (incoming_type_id == BurstPistolWeaponFiredEvent::type_id) {
			return std::make_shared<BurstPistolWeaponFiredEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
