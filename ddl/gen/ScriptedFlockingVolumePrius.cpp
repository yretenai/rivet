// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/FlockOverrideData.hpp> 

#include <rivet/ddl/generated/ScriptedFlockingVolumePrius.hpp>

namespace rivet::ddl::generated {
	ScriptedFlockingVolumePrius::ScriptedFlockingVolumePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		CreatureType = serialized->get_string(CreatureType_type_id, {});
		FlockSize = serialized->get_int32(FlockSize_type_id, 16);
		ManualDestination = serialized->get_bool(ManualDestination_type_id, true);
		OverrideTypeData = serialized->get_bool(OverrideTypeData_type_id, false);
		OverrideData = serialized->unwrap_into<rivet::ddl::generated::FlockOverrideData>(OverrideData_type_id); 
	}

	[[nodiscard]] auto
	ScriptedFlockingVolumePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ScriptedFlockingVolumePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ScriptedFlockingVolumePrius> {
		if (incoming_type_id == ScriptedFlockingVolumePrius::type_id) {
			return std::make_shared<ScriptedFlockingVolumePrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
