// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GroundTriggerOnEvent.hpp>

namespace rivet::ddl::generated {
	GroundTriggerOnEvent::GroundTriggerOnEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	GroundTriggerOnEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GroundTriggerOnEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GroundTriggerOnEvent> {
		if (incoming_type_id == GroundTriggerOnEvent::type_id) {
			return std::make_shared<GroundTriggerOnEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
