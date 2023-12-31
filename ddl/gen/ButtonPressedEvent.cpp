// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ButtonPressedEvent.hpp>

namespace rivet::ddl::generated {
	ButtonPressedEvent::ButtonPressedEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		ButtonIndex = serialized->get_int32(ButtonIndex_type_id); 
	}

	[[nodiscard]] auto
	ButtonPressedEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ButtonPressedEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ButtonPressedEvent> {
		if (incoming_type_id == ButtonPressedEvent::type_id) {
			return std::make_shared<ButtonPressedEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
