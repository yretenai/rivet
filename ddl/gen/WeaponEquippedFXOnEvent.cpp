// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/WeaponEquippedFXOnEvent.hpp>

namespace rivet::ddl::generated {
	WeaponEquippedFXOnEvent::WeaponEquippedFXOnEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		WeaponTypeName = serialized->get_string(WeaponTypeName_type_id);
		OwnerIsLocal = serialized->get_bool(OwnerIsLocal_type_id);
		OwnerIsHero = serialized->get_bool(OwnerIsHero_type_id); 
	}

	[[nodiscard]] auto
	WeaponEquippedFXOnEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	WeaponEquippedFXOnEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WeaponEquippedFXOnEvent> {
		if (incoming_type_id == WeaponEquippedFXOnEvent::type_id) {
			return std::make_shared<WeaponEquippedFXOnEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
