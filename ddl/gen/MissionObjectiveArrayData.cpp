// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MissionObjective.hpp> 

#include <rivet/ddl/generated/MissionObjectiveArrayData.hpp>

namespace rivet::ddl::generated {
	MissionObjectiveArrayData::MissionObjectiveArrayData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Objective = serialized->unwrap_into<rivet::ddl::generated::MissionObjective>(Objective_type_id); 
	}

	[[nodiscard]] auto
	MissionObjectiveArrayData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MissionObjectiveArrayData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MissionObjectiveArrayData> {
		if (incoming_type_id == MissionObjectiveArrayData::type_id) {
			return std::make_shared<MissionObjectiveArrayData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
