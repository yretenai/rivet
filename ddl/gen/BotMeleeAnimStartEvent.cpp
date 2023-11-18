// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BotMeleeAnimStartEvent.hpp>

namespace rivet::ddl::generated {
	BotMeleeAnimStartEvent::BotMeleeAnimStartEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): MeleeTriggeredEvent(serialized) {

	}

	[[nodiscard]] auto
	BotMeleeAnimStartEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BotMeleeAnimStartEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotMeleeAnimStartEvent> {
		if (incoming_type_id == BotMeleeAnimStartEvent::type_id) {
			return std::make_shared<BotMeleeAnimStartEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
