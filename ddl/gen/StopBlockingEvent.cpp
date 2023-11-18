// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/StopBlockingEvent.hpp>

namespace rivet::ddl::generated {
	StopBlockingEvent::StopBlockingEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		DesiredVelocity = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(DesiredVelocity_type_id); 
	}

	[[nodiscard]] auto
	StopBlockingEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	StopBlockingEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StopBlockingEvent> {
		if (incoming_type_id == StopBlockingEvent::type_id) {
			return std::make_shared<StopBlockingEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
