// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AttackTransitionEvent.hpp>

namespace rivet::ddl::generated {
	AttackTransitionEvent::AttackTransitionEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		NextAnim = serialized->get_string(NextAnim_type_id);
		NextAnimRate = serialized->get_float(NextAnimRate_type_id); 
	}

	[[nodiscard]] auto
	AttackTransitionEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AttackTransitionEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AttackTransitionEvent> {
		if (incoming_type_id == AttackTransitionEvent::type_id) {
			return std::make_shared<AttackTransitionEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
