// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/EquipWeaponActionPrius.hpp>

namespace rivet::ddl::generated {
	EquipWeaponActionPrius::EquipWeaponActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActionType = serialized->get_enum<rivet::ddl::generated::x10228b34>(ActionType_type_id, rivet::ddl::generated::x10228b34_values);
		WeaponPickupConfig = serialized->get_string(WeaponPickupConfig_type_id);
		SetAsOverride = serialized->get_bool(SetAsOverride_type_id); 
	}

	[[nodiscard]] auto
	EquipWeaponActionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	EquipWeaponActionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<EquipWeaponActionPrius> {
		if (incoming_type_id == EquipWeaponActionPrius::type_id) {
			return std::make_shared<EquipWeaponActionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
