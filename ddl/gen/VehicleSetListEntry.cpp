// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VehicleTypeListEntry.hpp>
#include <rivet/ddl/generated/VehicleNodeParams.hpp>
#include <rivet/ddl/generated/VehicleSpawnInfo.hpp>
#include <rivet/ddl/generated/ObjSysUnlockSequence.hpp> 

#include <rivet/ddl/generated/VehicleSetListEntry.hpp>

namespace rivet::ddl::generated {
	VehicleSetListEntry::VehicleSetListEntry([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		SetName = serialized->get_string(SetName_type_id);
		RequiredLightingModes = serialized->get_enums<rivet::ddl::generated::xee0945fb>(RequiredLightingModes_type_id, rivet::ddl::generated::xee0945fb_values);
		RequiredMissionUnlocks = serialized->unwrap_into<rivet::ddl::generated::ObjSysUnlockSequence>(RequiredMissionUnlocks_type_id);
		RequiredContainerRegions = serialized->get_strings(RequiredContainerRegions_type_id);
		SpawnInfo = serialized->unwrap_into<rivet::ddl::generated::VehicleSpawnInfo>(SpawnInfo_type_id);
		NodeParams = serialized->unwrap_into<rivet::ddl::generated::VehicleNodeParams>(NodeParams_type_id);
		MaxVehicles = serialized->get_int32(MaxVehicles_type_id);
		MaxVehiclesPerfMode = serialized->get_int32(MaxVehiclesPerfMode_type_id);
		MaxVehiclesMediumPerfMode = serialized->get_int32(MaxVehiclesMediumPerfMode_type_id);
		MaxVehiclesLowPerfMode = serialized->get_int32(MaxVehiclesLowPerfMode_type_id);
		SoundEnableRange = serialized->get_float(SoundEnableRange_type_id);
		SoundDisableRange = serialized->get_float(SoundDisableRange_type_id);
		VehicleTypeList = serialized->unwrap_into_many<rivet::ddl::generated::VehicleTypeListEntry>(VehicleTypeList_type_id); 
	}

	[[nodiscard]] auto
	VehicleSetListEntry::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VehicleSetListEntry::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VehicleSetListEntry> {
		if (incoming_type_id == VehicleSetListEntry::type_id) {
			return std::make_shared<VehicleSetListEntry>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
