// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/FocusTrackingInstData.hpp> 

#include <rivet/ddl/generated/FocusTrackingOverrideInstanceEvent.hpp>

namespace rivet::ddl::generated {
	FocusTrackingOverrideInstanceEvent::FocusTrackingOverrideInstanceEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		Data = serialized->unwrap_into<rivet::ddl::generated::FocusTrackingInstData>(Data_type_id); 
	}

	[[nodiscard]] auto
	FocusTrackingOverrideInstanceEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	FocusTrackingOverrideInstanceEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FocusTrackingOverrideInstanceEvent> {
		if (incoming_type_id == FocusTrackingOverrideInstanceEvent::type_id) {
			return std::make_shared<FocusTrackingOverrideInstanceEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
