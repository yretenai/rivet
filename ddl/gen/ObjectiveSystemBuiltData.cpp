// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BuiltMissionEntry.hpp>
#include <rivet/ddl/generated/MissionGraphBuiltTableEntry.hpp>
#include <rivet/ddl/generated/ObjectiveGraphBuiltTableEntry.hpp> 

#include <rivet/ddl/generated/ObjectiveSystemBuiltData.hpp>

namespace rivet::ddl::generated {
	ObjectiveSystemBuiltData::ObjectiveSystemBuiltData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ObjectiveGraphs = serialized->unwrap_into_many<rivet::ddl::generated::ObjectiveGraphBuiltTableEntry>(ObjectiveGraphs_type_id);
		MissionGraphs = serialized->unwrap_into_many<rivet::ddl::generated::MissionGraphBuiltTableEntry>(MissionGraphs_type_id);
		AllMissions = serialized->unwrap_into_many<rivet::ddl::generated::BuiltMissionEntry>(AllMissions_type_id); 
	}

	[[nodiscard]] auto
	ObjectiveSystemBuiltData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ObjectiveSystemBuiltData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ObjectiveSystemBuiltData> {
		if (incoming_type_id == ObjectiveSystemBuiltData::type_id) {
			return std::make_shared<ObjectiveSystemBuiltData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
