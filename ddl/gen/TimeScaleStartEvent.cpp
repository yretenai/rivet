// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TimeScaleBasePrius.hpp> 

#include <rivet/ddl/generated/TimeScaleStartEvent.hpp>

namespace rivet::ddl::generated {
	TimeScaleStartEvent::TimeScaleStartEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		IsEnabled = serialized->get_bool(IsEnabled_type_id, true);
		Data = serialized->unwrap_into<rivet::ddl::generated::TimeScaleBasePrius>(Data_type_id); 
	}

	[[nodiscard]] auto
	TimeScaleStartEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TimeScaleStartEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TimeScaleStartEvent> {
		if (incoming_type_id == TimeScaleStartEvent::type_id) {
			return std::make_shared<TimeScaleStartEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
