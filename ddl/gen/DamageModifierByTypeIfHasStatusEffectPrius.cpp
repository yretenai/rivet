// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DamageModStatusEffectData.hpp> 

#include <rivet/ddl/generated/DamageModifierByTypeIfHasStatusEffectPrius.hpp>

namespace rivet::ddl::generated {
	DamageModifierByTypeIfHasStatusEffectPrius::DamageModifierByTypeIfHasStatusEffectPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): DamageModifierIncomingPrius(serialized) {
		ValidDamageTypes = serialized->get_enums<rivet::ddl::generated::DamageTypes>(ValidDamageTypes_type_id, rivet::ddl::generated::DamageTypes_values);
		StatusMultiplier = serialized->get_float(StatusMultiplier_type_id, 1.000000);
		DamageMultiplier = serialized->get_float(DamageMultiplier_type_id, 1.000000);
		StatusEffects = serialized->unwrap_into_many<rivet::ddl::generated::DamageModStatusEffectData>(StatusEffects_type_id); 
	}

	[[nodiscard]] auto
	DamageModifierByTypeIfHasStatusEffectPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DamageModifierByTypeIfHasStatusEffectPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DamageModifierByTypeIfHasStatusEffectPrius> {
		if (incoming_type_id == DamageModifierByTypeIfHasStatusEffectPrius::type_id) {
			return std::make_shared<DamageModifierByTypeIfHasStatusEffectPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
