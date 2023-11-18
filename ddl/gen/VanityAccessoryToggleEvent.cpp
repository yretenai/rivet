// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VanityAccessoryToggleEvent.hpp>

namespace rivet::ddl::generated {
	VanityAccessoryToggleEvent::VanityAccessoryToggleEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		Type = serialized->get_enum<rivet::ddl::generated::x56bca86c>(Type_type_id, rivet::ddl::generated::x56bca86c_values); 
	}

	[[nodiscard]] auto
	VanityAccessoryToggleEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VanityAccessoryToggleEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VanityAccessoryToggleEvent> {
		if (incoming_type_id == VanityAccessoryToggleEvent::type_id) {
			return std::make_shared<VanityAccessoryToggleEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
