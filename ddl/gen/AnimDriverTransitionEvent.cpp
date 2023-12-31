// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AnimDriverTransitionEvent.hpp>

namespace rivet::ddl::generated {
	AnimDriverTransitionEvent::AnimDriverTransitionEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		PrevDriver = serialized->get_string(PrevDriver_type_id);
		NextDriver = serialized->get_string(NextDriver_type_id); 
	}

	[[nodiscard]] auto
	AnimDriverTransitionEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AnimDriverTransitionEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimDriverTransitionEvent> {
		if (incoming_type_id == AnimDriverTransitionEvent::type_id) {
			return std::make_shared<AnimDriverTransitionEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
