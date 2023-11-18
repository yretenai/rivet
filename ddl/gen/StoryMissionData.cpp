// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/StoryMissionData.hpp>

namespace rivet::ddl::generated {
	StoryMissionData::StoryMissionData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): RegionGameDataBase(serialized) {
		MissionName = serialized->get_string(MissionName_type_id);
		Description = serialized->get_string(Description_type_id); 
	}

	[[nodiscard]] auto
	StoryMissionData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	StoryMissionData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StoryMissionData> {
		if (incoming_type_id == StoryMissionData::type_id) {
			return std::make_shared<StoryMissionData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
