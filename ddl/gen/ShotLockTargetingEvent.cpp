// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/ShotLockTargetingEvent.hpp>

namespace rivet::ddl::generated {
	ShotLockTargetingEvent::ShotLockTargetingEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		Target = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(Target_type_id); 
	}

	[[nodiscard]] auto
	ShotLockTargetingEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ShotLockTargetingEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ShotLockTargetingEvent> {
		if (incoming_type_id == ShotLockTargetingEvent::type_id) {
			return std::make_shared<ShotLockTargetingEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
