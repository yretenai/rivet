// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/WeaponCooldownEndEvent.hpp>

namespace rivet::ddl::generated {
	WeaponCooldownEndEvent::WeaponCooldownEndEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): WeaponTriggeredEvent(serialized) {

	}

	[[nodiscard]] auto
	WeaponCooldownEndEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	WeaponCooldownEndEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WeaponCooldownEndEvent> {
		if (incoming_type_id == WeaponCooldownEndEvent::type_id) {
			return std::make_shared<WeaponCooldownEndEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
