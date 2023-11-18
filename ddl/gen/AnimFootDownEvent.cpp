// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AnimFootDownEvent.hpp>

namespace rivet::ddl::generated {
	AnimFootDownEvent::AnimFootDownEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		Locator = serialized->get_string(Locator_type_id); 
	}

	[[nodiscard]] auto
	AnimFootDownEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AnimFootDownEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimFootDownEvent> {
		if (incoming_type_id == AnimFootDownEvent::type_id) {
			return std::make_shared<AnimFootDownEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
