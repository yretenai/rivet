// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PlayerJoinedEvent.hpp>

namespace rivet::ddl::generated {
	PlayerJoinedEvent::PlayerJoinedEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	PlayerJoinedEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PlayerJoinedEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PlayerJoinedEvent> {
		if (incoming_type_id == PlayerJoinedEvent::type_id) {
			return std::make_shared<PlayerJoinedEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
