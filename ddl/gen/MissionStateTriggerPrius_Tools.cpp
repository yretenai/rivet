// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MissionStateTriggerPrius_Tools.hpp>

namespace rivet::ddl::generated {
	MissionStateTriggerPrius_Tools::MissionStateTriggerPrius_Tools([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): AbstractTriggerPrius_Tools(serialized) {
		MissionName = serialized->get_string(MissionName_type_id);
		Inactive = serialized->get_bool(Inactive_type_id);
		Available = serialized->get_bool(Available_type_id);
		Active = serialized->get_bool(Active_type_id);
		Cleanup = serialized->get_bool(Cleanup_type_id);
		Complete = serialized->get_bool(Complete_type_id);
		Failed = serialized->get_bool(Failed_type_id); 
	}

	[[nodiscard]] auto
	MissionStateTriggerPrius_Tools::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MissionStateTriggerPrius_Tools::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MissionStateTriggerPrius_Tools> {
		if (incoming_type_id == MissionStateTriggerPrius_Tools::type_id) {
			return std::make_shared<MissionStateTriggerPrius_Tools>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
