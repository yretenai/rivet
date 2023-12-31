// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/UDSMissionStartEvent.hpp>

namespace rivet::ddl::generated {
	UDSMissionStartEvent::UDSMissionStartEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ActivityStartEvent(serialized) {

	}

	[[nodiscard]] auto
	UDSMissionStartEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UDSMissionStartEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UDSMissionStartEvent> {
		if (incoming_type_id == UDSMissionStartEvent::type_id) {
			return std::make_shared<UDSMissionStartEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
