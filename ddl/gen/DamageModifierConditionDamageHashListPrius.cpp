// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DamageHashEntry.hpp> 

#include <rivet/ddl/generated/DamageModifierConditionDamageHashListPrius.hpp>

namespace rivet::ddl::generated {
	DamageModifierConditionDamageHashListPrius::DamageModifierConditionDamageHashListPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): DamageModifierConditionBasePrius(serialized) {
		DamageHashEntries = serialized->unwrap_into_many<rivet::ddl::generated::DamageHashEntry>(DamageHashEntries_type_id);
		CheckType = serialized->get_enum<rivet::ddl::generated::x8423053f>(CheckType_type_id, rivet::ddl::generated::x8423053f_values); 
	}

	[[nodiscard]] auto
	DamageModifierConditionDamageHashListPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DamageModifierConditionDamageHashListPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DamageModifierConditionDamageHashListPrius> {
		if (incoming_type_id == DamageModifierConditionDamageHashListPrius::type_id) {
			return std::make_shared<DamageModifierConditionDamageHashListPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
