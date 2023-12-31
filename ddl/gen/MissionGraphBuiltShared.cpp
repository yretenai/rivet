// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MissionGraphBuiltGame.hpp>
#include <rivet/ddl/generated/MissionNodeBuiltTableEntry.hpp>
#include <rivet/ddl/generated/SortedNodeNames.hpp>
#include <rivet/ddl/generated/GraphNodesBuilt.hpp> 

#include <rivet/ddl/generated/MissionGraphBuiltShared.hpp>

namespace rivet::ddl::generated {
	MissionGraphBuiltShared::MissionGraphBuiltShared([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Nodes = serialized->unwrap_into<rivet::ddl::generated::GraphNodesBuilt>(Nodes_type_id);
		Missions = serialized->unwrap_into_many<rivet::ddl::generated::MissionNodeBuiltTableEntry>(Missions_type_id);
		SortedMissions = serialized->unwrap_into<rivet::ddl::generated::SortedNodeNames>(SortedMissions_type_id); 
	}

	[[nodiscard]] auto
	MissionGraphBuiltShared::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MissionGraphBuiltShared::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MissionGraphBuiltShared> {
		if (incoming_type_id == MissionGraphBuiltShared::type_id) {
			return std::make_shared<MissionGraphBuiltShared>(serialized);
		}

		auto MissionGraphBuiltGame_ptr = MissionGraphBuiltGame::from_substruct(incoming_type_id, serialized);
		if (MissionGraphBuiltGame_ptr != nullptr) {
			return MissionGraphBuiltGame_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
