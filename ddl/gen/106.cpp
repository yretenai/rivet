// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DamageModifierConditionSelfDamagePrius.hpp>

namespace rivet::ddl::generated {
	DamageModifierConditionSelfDamagePrius::DamageModifierConditionSelfDamagePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): DamageModifierConditionBasePrius(serialized) {
		IsInclude = serialized->get_bool(IsInclude_type_id); 
	}

	auto
	DamageModifierConditionSelfDamagePrius::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	DamageModifierConditionSelfDamagePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DamageModifierConditionSelfDamagePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DamageModifierConditionSelfDamagePrius> {
		if (incoming_type_id == DamageModifierConditionSelfDamagePrius::type_id) {
			return std::make_shared<DamageModifierConditionSelfDamagePrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
