// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ObjSysNodeSaveDataTableEntry.hpp> 

#include <rivet/ddl/generated/ObjSysGraphSaveData.hpp>

namespace rivet::ddl::generated {
	ObjSysGraphSaveData::ObjSysGraphSaveData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		GraphAsset = serialized->get_uint64(GraphAsset_type_id, 0);
		NodeDataTable = serialized->unwrap_into_many<rivet::ddl::generated::ObjSysNodeSaveDataTableEntry>(NodeDataTable_type_id); 
	}

	[[nodiscard]] auto
	ObjSysGraphSaveData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ObjSysGraphSaveData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ObjSysGraphSaveData> {
		if (incoming_type_id == ObjSysGraphSaveData::type_id) {
			return std::make_shared<ObjSysGraphSaveData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
