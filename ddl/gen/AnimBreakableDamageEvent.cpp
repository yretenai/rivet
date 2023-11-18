// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AnimBreakableDamageEvent.hpp>

namespace rivet::ddl::generated {
	AnimBreakableDamageEvent::AnimBreakableDamageEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		Locator = serialized->get_string(Locator_type_id);
		Duration = serialized->get_float(Duration_type_id); 
	}

	[[nodiscard]] auto
	AnimBreakableDamageEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AnimBreakableDamageEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimBreakableDamageEvent> {
		if (incoming_type_id == AnimBreakableDamageEvent::type_id) {
			return std::make_shared<AnimBreakableDamageEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
