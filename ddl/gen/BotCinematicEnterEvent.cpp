// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BotCinematicEnterEvent.hpp>

namespace rivet::ddl::generated {
	BotCinematicEnterEvent::BotCinematicEnterEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	BotCinematicEnterEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BotCinematicEnterEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotCinematicEnterEvent> {
		if (incoming_type_id == BotCinematicEnterEvent::type_id) {
			return std::make_shared<BotCinematicEnterEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
