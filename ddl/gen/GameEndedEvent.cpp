// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GameEndedEvent.hpp>

namespace rivet::ddl::generated {
	GameEndedEvent::GameEndedEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		Time = serialized->get_float(Time_type_id); 
	}

	[[nodiscard]] auto
	GameEndedEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GameEndedEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GameEndedEvent> {
		if (incoming_type_id == GameEndedEvent::type_id) {
			return std::make_shared<GameEndedEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
