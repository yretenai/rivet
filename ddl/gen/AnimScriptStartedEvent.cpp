// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AnimScriptStartedEvent.hpp>

namespace rivet::ddl::generated {
	AnimScriptStartedEvent::AnimScriptStartedEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	AnimScriptStartedEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AnimScriptStartedEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimScriptStartedEvent> {
		if (incoming_type_id == AnimScriptStartedEvent::type_id) {
			return std::make_shared<AnimScriptStartedEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
