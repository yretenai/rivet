// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MultiAttachDeactivatedEvent.hpp>

namespace rivet::ddl::generated {
	MultiAttachDeactivatedEvent::MultiAttachDeactivatedEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		Locator = serialized->get_string(Locator_type_id, {}); 
	}

	[[nodiscard]] auto
	MultiAttachDeactivatedEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MultiAttachDeactivatedEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MultiAttachDeactivatedEvent> {
		if (incoming_type_id == MultiAttachDeactivatedEvent::type_id) {
			return std::make_shared<MultiAttachDeactivatedEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
