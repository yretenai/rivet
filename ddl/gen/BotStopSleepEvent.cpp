// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BotStopSleepEvent.hpp>

namespace rivet::ddl::generated {
	BotStopSleepEvent::BotStopSleepEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	BotStopSleepEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BotStopSleepEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotStopSleepEvent> {
		if (incoming_type_id == BotStopSleepEvent::type_id) {
			return std::make_shared<BotStopSleepEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
