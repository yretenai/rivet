// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BotDodgedEvent.hpp>

namespace rivet::ddl::generated {
	BotDodgedEvent::BotDodgedEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	BotDodgedEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BotDodgedEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotDodgedEvent> {
		if (incoming_type_id == BotDodgedEvent::type_id) {
			return std::make_shared<BotDodgedEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
