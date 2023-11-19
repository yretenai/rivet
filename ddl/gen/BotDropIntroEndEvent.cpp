// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BotDropIntroEndEvent.hpp>

namespace rivet::ddl::generated {
	BotDropIntroEndEvent::BotDropIntroEndEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	BotDropIntroEndEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BotDropIntroEndEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotDropIntroEndEvent> {
		if (incoming_type_id == BotDropIntroEndEvent::type_id) {
			return std::make_shared<BotDropIntroEndEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated