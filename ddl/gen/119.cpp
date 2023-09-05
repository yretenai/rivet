// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DamageModifierIncomingBattleBrewFloatPrius.hpp>

namespace rivet::ddl::generated {
	DamageModifierIncomingBattleBrewFloatPrius::DamageModifierIncomingBattleBrewFloatPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): DamageModifierIncomingPrius(serialized) {
		IncomingDamageMultiplier = serialized->get_float(IncomingDamageMultiplier_type_id); 
	}

	auto
	DamageModifierIncomingBattleBrewFloatPrius::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	DamageModifierIncomingBattleBrewFloatPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DamageModifierIncomingBattleBrewFloatPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DamageModifierIncomingBattleBrewFloatPrius> {
		if (incoming_type_id == DamageModifierIncomingBattleBrewFloatPrius::type_id) {
			return std::make_shared<DamageModifierIncomingBattleBrewFloatPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
