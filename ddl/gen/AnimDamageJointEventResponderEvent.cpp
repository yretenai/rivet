// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AnimDamageJointEventResponderEvent.hpp>

namespace rivet::ddl::generated {
	AnimDamageJointEventResponderEvent::AnimDamageJointEventResponderEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	AnimDamageJointEventResponderEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AnimDamageJointEventResponderEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimDamageJointEventResponderEvent> {
		if (incoming_type_id == AnimDamageJointEventResponderEvent::type_id) {
			return std::make_shared<AnimDamageJointEventResponderEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
