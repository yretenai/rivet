// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AssetReferenceDef.hpp> 

#include <rivet/ddl/generated/ObjSysUnlockOverrideConditionGraph.hpp>

namespace rivet::ddl::generated {
	ObjSysUnlockOverrideConditionGraph::ObjSysUnlockOverrideConditionGraph([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ObjSysUnlockOverrideConditionBase(serialized) {
		MissionGraph = serialized->unwrap_into<rivet::ddl::generated::AssetReferenceDef>(MissionGraph_type_id); 
	}

	[[nodiscard]] auto
	ObjSysUnlockOverrideConditionGraph::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ObjSysUnlockOverrideConditionGraph::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ObjSysUnlockOverrideConditionGraph> {
		if (incoming_type_id == ObjSysUnlockOverrideConditionGraph::type_id) {
			return std::make_shared<ObjSysUnlockOverrideConditionGraph>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
