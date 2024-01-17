// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MissionFailedEvent.hpp>

namespace rivet::ddl::generated {
	MissionFailedEvent::MissionFailedEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		MissionName = serialized->get_string(MissionName_type_id, {});
		Reason = serialized->get_string(Reason_type_id, {}); 
	}

	[[nodiscard]] auto
	MissionFailedEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MissionFailedEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MissionFailedEvent> {
		if (incoming_type_id == MissionFailedEvent::type_id) {
			return std::make_shared<MissionFailedEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
