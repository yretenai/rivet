// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MissionSaveDataGame.hpp>
#include <rivet/ddl/generated/SyncOutputData.hpp> 

#include <rivet/ddl/generated/MissionSaveDataShared.hpp>

namespace rivet::ddl::generated {
	MissionSaveDataShared::MissionSaveDataShared([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ObjSysNodeSaveData(serialized) {
		MissionState = serialized->get_enum<rivet::ddl::generated::MissionStates>(MissionState_type_id, rivet::ddl::generated::MissionStates_values);
		MissionFlagsShared = serialized->get_bitset<rivet::ddl::generated::x62de2618>(MissionFlagsShared_type_id, rivet::ddl::generated::x62de2618_values);
		MissionDataStore = serialized->get_bools(MissionDataStore_type_id);
		SyncOutputState = serialized->unwrap_into_many<rivet::ddl::generated::SyncOutputData>(SyncOutputState_type_id); 
	}

	[[nodiscard]] auto
	MissionSaveDataShared::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MissionSaveDataShared::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MissionSaveDataShared> {
		if (incoming_type_id == MissionSaveDataShared::type_id) {
			return std::make_shared<MissionSaveDataShared>(serialized);
		}

		auto MissionSaveDataGame_ptr = MissionSaveDataGame::from_substruct(incoming_type_id, serialized);
		if (MissionSaveDataGame_ptr != nullptr) {
			return MissionSaveDataGame_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
