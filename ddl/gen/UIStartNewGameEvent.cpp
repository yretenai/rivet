// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/UIStartNewGameEvent.hpp>

namespace rivet::ddl::generated {
	UIStartNewGameEvent::UIStartNewGameEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	UIStartNewGameEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UIStartNewGameEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UIStartNewGameEvent> {
		if (incoming_type_id == UIStartNewGameEvent::type_id) {
			return std::make_shared<UIStartNewGameEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
