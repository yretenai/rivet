// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SetWeaponEquipableActionPrius.hpp>

namespace rivet::ddl::generated {
	SetWeaponEquipableActionPrius::SetWeaponEquipableActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActionType = serialized->get_enum<rivet::ddl::generated::x10228b34>(ActionType_type_id, rivet::ddl::generated::x10228b34_values);
		Weapon = serialized->get_enum<rivet::ddl::generated::x63d44ada>(Weapon_type_id, rivet::ddl::generated::x63d44ada_values);
		Equipable = serialized->get_bool(Equipable_type_id);
		ForceUnequipIfNowUnequipable = serialized->get_bool(ForceUnequipIfNowUnequipable_type_id); 
	}

	[[nodiscard]] auto
	SetWeaponEquipableActionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SetWeaponEquipableActionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SetWeaponEquipableActionPrius> {
		if (incoming_type_id == SetWeaponEquipableActionPrius::type_id) {
			return std::make_shared<SetWeaponEquipableActionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
