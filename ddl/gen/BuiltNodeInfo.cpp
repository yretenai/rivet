// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ChildInfo.hpp> 

#include <rivet/ddl/generated/BuiltNodeInfo.hpp>

namespace rivet::ddl::generated {
	BuiltNodeInfo::BuiltNodeInfo([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		NodeId = serialized->get_uint64(NodeId_type_id, 0);
		ObjectiveGraph = serialized->get_string(ObjectiveGraph_type_id, {});
		MissionHash = serialized->get_uint32(MissionHash_type_id, 0);
		ObjectiveHash = serialized->get_uint32(ObjectiveHash_type_id, 0);
		Label1 = serialized->get_string(Label1_type_id, {});
		Label2 = serialized->get_string(Label2_type_id, {});
		ChildNodes = serialized->unwrap_into_many<rivet::ddl::generated::ChildInfo>(ChildNodes_type_id);
		MaxDepth = serialized->get_uint32(MaxDepth_type_id, 0);
		IsDebugMarker = serialized->get_bool(IsDebugMarker_type_id, false); 
	}

	[[nodiscard]] auto
	BuiltNodeInfo::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BuiltNodeInfo::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BuiltNodeInfo> {
		if (incoming_type_id == BuiltNodeInfo::type_id) {
			return std::make_shared<BuiltNodeInfo>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
