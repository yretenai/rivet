// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ActivityClueActivityStartedEvent.hpp>

namespace rivet::ddl::generated {
	ActivityClueActivityStartedEvent::ActivityClueActivityStartedEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	ActivityClueActivityStartedEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ActivityClueActivityStartedEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ActivityClueActivityStartedEvent> {
		if (incoming_type_id == ActivityClueActivityStartedEvent::type_id) {
			return std::make_shared<ActivityClueActivityStartedEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated