// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VarNode.hpp>
#include <rivet/ddl/generated/NodeGraphContents.hpp>
#include <rivet/ddl/generated/ActorGroupNode.hpp>
#include <rivet/ddl/generated/SceneNode.hpp>
#include <rivet/ddl/generated/VertexPaintNode.hpp>
#include <rivet/ddl/generated/VaultMetaData.hpp> 

#include <rivet/ddl/generated/SceneDef.hpp>

namespace rivet::ddl::generated {
	SceneDef::SceneDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		VaultMetaData = serialized->unwrap_into<rivet::ddl::generated::VaultMetaData>(VaultMetaData_type_id);
		IconPath = serialized->get_string(IconPath_type_id);
		SceneNodes = serialized->unwrap_into_many<rivet::ddl::generated::SceneNode>(SceneNodes_type_id);
		ActorGroups = serialized->unwrap_into_many<rivet::ddl::generated::ActorGroupNode>(ActorGroups_type_id);
		MainScriptGraphId = serialized->get_uint64(MainScriptGraphId_type_id);
		ScriptGraphs = serialized->unwrap_into_many<rivet::ddl::generated::NodeGraphContents>(ScriptGraphs_type_id);
		VarNodes = serialized->unwrap_into_many<rivet::ddl::generated::VarNode>(VarNodes_type_id);
		VertexPaintNodes = serialized->unwrap_into_many<rivet::ddl::generated::VertexPaintNode>(VertexPaintNodes_type_id); 
	}

	[[nodiscard]] auto
	SceneDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SceneDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SceneDef> {
		if (incoming_type_id == SceneDef::type_id) {
			return std::make_shared<SceneDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
