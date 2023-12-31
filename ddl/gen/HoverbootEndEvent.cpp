// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HoverbootEndEvent.hpp>

namespace rivet::ddl::generated {
	HoverbootEndEvent::HoverbootEndEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		IsForHoverbootState = serialized->get_bool(IsForHoverbootState_type_id); 
	}

	[[nodiscard]] auto
	HoverbootEndEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HoverbootEndEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HoverbootEndEvent> {
		if (incoming_type_id == HoverbootEndEvent::type_id) {
			return std::make_shared<HoverbootEndEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
