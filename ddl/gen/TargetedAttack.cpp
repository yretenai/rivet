// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TargetedAttackShape.hpp> 

#include <rivet/ddl/generated/TargetedAttack.hpp>

namespace rivet::ddl::generated {
	TargetedAttack::TargetedAttack([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		AttackAnim = serialized->get_string(AttackAnim_type_id);
		Shape = serialized->unwrap_into<rivet::ddl::generated::TargetedAttackShape>(Shape_type_id);
		Cooldown = serialized->get_float(Cooldown_type_id);
		Layer = serialized->get_uint32(Layer_type_id);
		LastPlayedTime = serialized->get_float(LastPlayedTime_type_id); 
	}

	[[nodiscard]] auto
	TargetedAttack::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TargetedAttack::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TargetedAttack> {
		if (incoming_type_id == TargetedAttack::type_id) {
			return std::make_shared<TargetedAttack>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
