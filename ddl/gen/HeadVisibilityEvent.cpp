// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HeadVisibilityEvent.hpp>

namespace rivet::ddl::generated {
	HeadVisibilityEvent::HeadVisibilityEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		Hide = serialized->get_bool(Hide_type_id);
		FromCine = serialized->get_bool(FromCine_type_id); 
	}

	[[nodiscard]] auto
	HeadVisibilityEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HeadVisibilityEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeadVisibilityEvent> {
		if (incoming_type_id == HeadVisibilityEvent::type_id) {
			return std::make_shared<HeadVisibilityEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
