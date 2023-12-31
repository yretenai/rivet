// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AnimDamageAttackModDef.hpp>
#include <rivet/ddl/generated/ChargeAttackParams.hpp>
#include <rivet/ddl/generated/AnimDamageAttackStyleBase.hpp> 

#include <rivet/ddl/generated/AnimDamageAttack.hpp>

namespace rivet::ddl::generated {
	AnimDamageAttack::AnimDamageAttack([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Description = serialized->get_string(Description_type_id);
		SpecializedReact = serialized->get_string(SpecializedReact_type_id);
		AttackStyle = serialized->unwrap_into<rivet::ddl::generated::AnimDamageAttackStyleBase>(AttackStyle_type_id);
		ChargeAttack = serialized->unwrap_into<rivet::ddl::generated::ChargeAttackParams>(ChargeAttack_type_id);
		ConfigModDefs = serialized->unwrap_into_many<rivet::ddl::generated::AnimDamageAttackModDef>(ConfigModDefs_type_id); 
	}

	[[nodiscard]] auto
	AnimDamageAttack::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AnimDamageAttack::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimDamageAttack> {
		if (incoming_type_id == AnimDamageAttack::type_id) {
			return std::make_shared<AnimDamageAttack>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
