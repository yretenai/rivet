// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AirlockInterruptedEvent.hpp>

namespace rivet::ddl::generated {
	AirlockInterruptedEvent::AirlockInterruptedEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	AirlockInterruptedEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AirlockInterruptedEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AirlockInterruptedEvent> {
		if (incoming_type_id == AirlockInterruptedEvent::type_id) {
			return std::make_shared<AirlockInterruptedEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
