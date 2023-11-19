// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BotMeleeAnimStopEvent.hpp>

namespace rivet::ddl::generated {
	BotMeleeAnimStopEvent::BotMeleeAnimStopEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): MeleeUnTriggeredEvent(serialized) {

	}

	[[nodiscard]] auto
	BotMeleeAnimStopEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BotMeleeAnimStopEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotMeleeAnimStopEvent> {
		if (incoming_type_id == BotMeleeAnimStopEvent::type_id) {
			return std::make_shared<BotMeleeAnimStopEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated