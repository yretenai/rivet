// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BotDisableFiringEvent.hpp>

namespace rivet::ddl::generated {
	BotDisableFiringEvent::BotDisableFiringEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		DisableAfterCurrentSequence = serialized->get_bool(DisableAfterCurrentSequence_type_id, false); 
	}

	[[nodiscard]] auto
	BotDisableFiringEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BotDisableFiringEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotDisableFiringEvent> {
		if (incoming_type_id == BotDisableFiringEvent::type_id) {
			return std::make_shared<BotDisableFiringEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
