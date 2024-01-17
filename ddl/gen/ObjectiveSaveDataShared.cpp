// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ObjectiveSaveDataGame.hpp> 

#include <rivet/ddl/generated/ObjectiveSaveDataShared.hpp>

namespace rivet::ddl::generated {
	ObjectiveSaveDataShared::ObjectiveSaveDataShared([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ObjSysNodeSaveData(serialized) {
		ObjectiveState = serialized->get_enum<rivet::ddl::generated::ObjectiveStates>(ObjectiveState_type_id, rivet::ddl::generated::ObjectiveStates_values, rivet::ddl::generated::ObjectiveStates::Inactive);
		ScriptObjectiveVairable = serialized->get_float(ScriptObjectiveVairable_type_id, 0.000000); 
	}

	[[nodiscard]] auto
	ObjectiveSaveDataShared::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ObjectiveSaveDataShared::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ObjectiveSaveDataShared> {
		if (incoming_type_id == ObjectiveSaveDataShared::type_id) {
			return std::make_shared<ObjectiveSaveDataShared>(serialized);
		}

		auto ObjectiveSaveDataGame_ptr = ObjectiveSaveDataGame::from_substruct(incoming_type_id, serialized);
		if (ObjectiveSaveDataGame_ptr != nullptr) {
			return ObjectiveSaveDataGame_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
