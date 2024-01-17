// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/WeaponOutOfAmmoEvent.hpp>

namespace rivet::ddl::generated {
	WeaponOutOfAmmoEvent::WeaponOutOfAmmoEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		WeaponName = serialized->get_string(WeaponName_type_id, {});
		OwnerIsLocal = serialized->get_bool(OwnerIsLocal_type_id, false);
		OwnerIsHero = serialized->get_bool(OwnerIsHero_type_id, false); 
	}

	[[nodiscard]] auto
	WeaponOutOfAmmoEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	WeaponOutOfAmmoEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WeaponOutOfAmmoEvent> {
		if (incoming_type_id == WeaponOutOfAmmoEvent::type_id) {
			return std::make_shared<WeaponOutOfAmmoEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
