// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BotMeleeAttackData.hpp>
#include <rivet/ddl/generated/BotAttackDodgeData.hpp>
#include <rivet/ddl/generated/BotComboShockwave.hpp>
#include <rivet/ddl/generated/BotComboBossMelee.hpp> 

#include <rivet/ddl/generated/BotComboMoveMelee.hpp>

namespace rivet::ddl::generated {
	BotComboMoveMelee::BotComboMoveMelee([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): BotComboMove(serialized) {
		MeleeAttackData = serialized->unwrap_into<rivet::ddl::generated::BotMeleeAttackData>(MeleeAttackData_type_id);
		AttackDodgeData = serialized->unwrap_into<rivet::ddl::generated::BotAttackDodgeData>(AttackDodgeData_type_id);
		DisableHitReactPartialsDuringAttack = serialized->get_bool(DisableHitReactPartialsDuringAttack_type_id);
		PrioritizeMotionScaling = serialized->get_bool(PrioritizeMotionScaling_type_id); 
	}

	auto
	BotComboMoveMelee::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	BotComboMoveMelee::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BotComboMoveMelee::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotComboMoveMelee> {
		if (incoming_type_id == BotComboMoveMelee::type_id) {
			return std::make_shared<BotComboMoveMelee>(serialized);
		}

		auto BotComboBossMelee_ptr = BotComboBossMelee::from_substruct(incoming_type_id, serialized);
		if (BotComboBossMelee_ptr != nullptr) {
			return BotComboBossMelee_ptr;
		}

		auto BotComboShockwave_ptr = BotComboShockwave::from_substruct(incoming_type_id, serialized);
		if (BotComboShockwave_ptr != nullptr) {
			return BotComboShockwave_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
