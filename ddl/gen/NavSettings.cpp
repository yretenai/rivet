// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/Nav3DSettings.hpp>
#include <rivet/ddl/generated/NavAStarSettings.hpp> 

#include <rivet/ddl/generated/NavSettings.hpp>

namespace rivet::ddl::generated {
	NavSettings::NavSettings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		NavFindPathMemoryBudget = serialized->get_uint32(NavFindPathMemoryBudget_type_id);
		NavFindPathSlotCount = serialized->get_uint16(NavFindPathSlotCount_type_id);
		PolyLookupHeaderSize = serialized->get_uint16(PolyLookupHeaderSize_type_id);
		PolyLookupEntrySize = serialized->get_uint16(PolyLookupEntrySize_type_id);
		MaximumActiveClueCount = serialized->get_int32(MaximumActiveClueCount_type_id);
		MeshCount = serialized->get_uint32(MeshCount_type_id);
		FindPathQueryTypeCnt = serialized->get_uint16(FindPathQueryTypeCnt_type_id);
		FindPathQueryTypeLimit = serialized->get_uint16(FindPathQueryTypeLimit_type_id);
		ClosestPtOnNavQueryTypeCnt = serialized->get_uint16(ClosestPtOnNavQueryTypeCnt_type_id);
		ClosestPtOnNavQueryTypeLimit = serialized->get_uint16(ClosestPtOnNavQueryTypeLimit_type_id);
		FindPolysQueryTypeCnt = serialized->get_uint16(FindPolysQueryTypeCnt_type_id);
		FindPolysQueryTypeLimit = serialized->get_uint16(FindPolysQueryTypeLimit_type_id);
		RandPtInVolumesQueryTypeCnt = serialized->get_uint16(RandPtInVolumesQueryTypeCnt_type_id);
		RandPtInVolumesQueryTypeLimit = serialized->get_uint16(RandPtInVolumesQueryTypeLimit_type_id);
		ClosestCustomCluesQueryTypeCnt = serialized->get_uint16(ClosestCustomCluesQueryTypeCnt_type_id);
		ClosestCustomCluesQueryTypeLimit = serialized->get_uint16(ClosestCustomCluesQueryTypeLimit_type_id);
		MeshGeneratorQueryTypeCnt = serialized->get_uint16(MeshGeneratorQueryTypeCnt_type_id);
		MeshGeneratorQueryTypeLimit = serialized->get_uint16(MeshGeneratorQueryTypeLimit_type_id);
		AStarSettings = serialized->unwrap_into<rivet::ddl::generated::NavAStarSettings>(AStarSettings_type_id);
		ModifyNavDbSize = serialized->get_int32(ModifyNavDbSize_type_id);
		DebugMeshDrawDistance = serialized->get_float(DebugMeshDrawDistance_type_id);
		DebugDetailDrawDistanceMin = serialized->get_float(DebugDetailDrawDistanceMin_type_id);
		DebugDetailDrawDistanceMax = serialized->get_float(DebugDetailDrawDistanceMax_type_id);
		MaxObstructionCount = serialized->get_int32(MaxObstructionCount_type_id);
		NavMeshGeneratorTileAllocSize = serialized->get_uint32(NavMeshGeneratorTileAllocSize_type_id);
		ObbObstructionPaddingEnable = serialized->get_bool(ObbObstructionPaddingEnable_type_id);
		MaxLoadedContainers = serialized->get_int32(MaxLoadedContainers_type_id);
		EnableDebugTracing = serialized->get_bool(EnableDebugTracing_type_id);
		Navigation3DSettings = serialized->unwrap_into<rivet::ddl::generated::Nav3DSettings>(Navigation3DSettings_type_id); 
	}

	[[nodiscard]] auto
	NavSettings::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	NavSettings::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<NavSettings> {
		if (incoming_type_id == NavSettings::type_id) {
			return std::make_shared<NavSettings>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated