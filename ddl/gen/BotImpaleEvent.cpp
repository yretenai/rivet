// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BotImpaleEvent.hpp>

namespace rivet::ddl::generated {
	BotImpaleEvent::BotImpaleEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		ImpaleLocator = serialized->get_string(ImpaleLocator_type_id);
		ImpaleDuration = serialized->get_float(ImpaleDuration_type_id); 
	}

	[[nodiscard]] auto
	BotImpaleEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BotImpaleEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotImpaleEvent> {
		if (incoming_type_id == BotImpaleEvent::type_id) {
			return std::make_shared<BotImpaleEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
