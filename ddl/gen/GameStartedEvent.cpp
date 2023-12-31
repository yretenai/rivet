// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GameStartedEvent.hpp>

namespace rivet::ddl::generated {
	GameStartedEvent::GameStartedEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		Time = serialized->get_float(Time_type_id); 
	}

	[[nodiscard]] auto
	GameStartedEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GameStartedEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GameStartedEvent> {
		if (incoming_type_id == GameStartedEvent::type_id) {
			return std::make_shared<GameStartedEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
