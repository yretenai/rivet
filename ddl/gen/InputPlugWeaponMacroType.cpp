// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/WeaponMacroTypePlug.hpp> 

#include <rivet/ddl/generated/InputPlugWeaponMacroType.hpp>

namespace rivet::ddl::generated {
	InputPlugWeaponMacroType::InputPlugWeaponMacroType([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): InputPlugBaseDef(serialized) {
		Value = serialized->unwrap_into<rivet::ddl::generated::WeaponMacroTypePlug>(Value_type_id); 
	}

	[[nodiscard]] auto
	InputPlugWeaponMacroType::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	InputPlugWeaponMacroType::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<InputPlugWeaponMacroType> {
		if (incoming_type_id == InputPlugWeaponMacroType::type_id) {
			return std::make_shared<InputPlugWeaponMacroType>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
