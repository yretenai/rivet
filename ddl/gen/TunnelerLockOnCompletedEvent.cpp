// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TunnelerLockOnCompletedEvent.hpp>

namespace rivet::ddl::generated {
	TunnelerLockOnCompletedEvent::TunnelerLockOnCompletedEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		LockOnDuration = serialized->get_float(LockOnDuration_type_id); 
	}

	[[nodiscard]] auto
	TunnelerLockOnCompletedEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TunnelerLockOnCompletedEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TunnelerLockOnCompletedEvent> {
		if (incoming_type_id == TunnelerLockOnCompletedEvent::type_id) {
			return std::make_shared<TunnelerLockOnCompletedEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
