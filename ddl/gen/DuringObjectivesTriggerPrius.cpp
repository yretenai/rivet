// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DuringObjectivesTriggerPrius.hpp>

namespace rivet::ddl::generated {
	DuringObjectivesTriggerPrius::DuringObjectivesTriggerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): BaseCustomOverlayTriggerPrius(serialized) {
		StartMissionName = serialized->get_string(StartMissionName_type_id);
		StartAtAvailable = serialized->get_bool(StartAtAvailable_type_id);
		StartObjectiveName = serialized->get_string(StartObjectiveName_type_id);
		EndMissionName = serialized->get_string(EndMissionName_type_id);
		EndAfterCleanup = serialized->get_bool(EndAfterCleanup_type_id);
		EndObjectiveName = serialized->get_string(EndObjectiveName_type_id); 
	}

	[[nodiscard]] auto
	DuringObjectivesTriggerPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DuringObjectivesTriggerPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DuringObjectivesTriggerPrius> {
		if (incoming_type_id == DuringObjectivesTriggerPrius::type_id) {
			return std::make_shared<DuringObjectivesTriggerPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
