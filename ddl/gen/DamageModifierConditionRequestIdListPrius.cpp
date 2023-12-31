// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DamageModifierConditionRequestIdListPrius.hpp>

namespace rivet::ddl::generated {
	DamageModifierConditionRequestIdListPrius::DamageModifierConditionRequestIdListPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): DamageModifierConditionBasePrius(serialized) {
		RequestIdEntries = serialized->get_uint32s(RequestIdEntries_type_id);
		CheckType = serialized->get_enum<rivet::ddl::generated::x8423053f>(CheckType_type_id, rivet::ddl::generated::x8423053f_values); 
	}

	[[nodiscard]] auto
	DamageModifierConditionRequestIdListPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DamageModifierConditionRequestIdListPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DamageModifierConditionRequestIdListPrius> {
		if (incoming_type_id == DamageModifierConditionRequestIdListPrius::type_id) {
			return std::make_shared<DamageModifierConditionRequestIdListPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
