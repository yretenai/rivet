// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MagShieldWeaponFiredEvent.hpp>

namespace rivet::ddl::generated {
	MagShieldWeaponFiredEvent::MagShieldWeaponFiredEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): WeaponTriggeredEvent(serialized) {

	}

	[[nodiscard]] auto
	MagShieldWeaponFiredEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MagShieldWeaponFiredEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MagShieldWeaponFiredEvent> {
		if (incoming_type_id == MagShieldWeaponFiredEvent::type_id) {
			return std::make_shared<MagShieldWeaponFiredEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
