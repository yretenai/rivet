// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MissionCompleteEvent.hpp>

namespace rivet::ddl::generated {
	MissionCompleteEvent::MissionCompleteEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		MissionName = serialized->get_string(MissionName_type_id);
		SilentMode = serialized->get_bool(SilentMode_type_id);
		IsSkipping = serialized->get_bool(IsSkipping_type_id); 
	}

	[[nodiscard]] auto
	MissionCompleteEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MissionCompleteEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MissionCompleteEvent> {
		if (incoming_type_id == MissionCompleteEvent::type_id) {
			return std::make_shared<MissionCompleteEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
