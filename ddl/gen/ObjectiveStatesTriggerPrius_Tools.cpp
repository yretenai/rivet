// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ObjectiveStatesTriggerPrius_Tools.hpp>

namespace rivet::ddl::generated {
	ObjectiveStatesTriggerPrius_Tools::ObjectiveStatesTriggerPrius_Tools([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): AbstractTriggerPrius_Tools(serialized) {
		MissionName = serialized->get_string(MissionName_type_id, {});
		ObjectiveName = serialized->get_string(ObjectiveName_type_id, {});
		ObjectiveStates = serialized->get_bitset<rivet::ddl::generated::x1a0f9cc5>(ObjectiveStates_type_id, rivet::ddl::generated::x1a0f9cc5_values, 2); 
	}

	[[nodiscard]] auto
	ObjectiveStatesTriggerPrius_Tools::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ObjectiveStatesTriggerPrius_Tools::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ObjectiveStatesTriggerPrius_Tools> {
		if (incoming_type_id == ObjectiveStatesTriggerPrius_Tools::type_id) {
			return std::make_shared<ObjectiveStatesTriggerPrius_Tools>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
