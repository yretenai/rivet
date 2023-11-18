// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PrefabRenderFlags.hpp>
#include <rivet/ddl/generated/ImpostorAttributes.hpp>
#include <rivet/ddl/generated/VarNode.hpp>
#include <rivet/ddl/generated/NodeGraphContents.hpp>
#include <rivet/ddl/generated/ActorGroupNode.hpp>
#include <rivet/ddl/generated/SceneNode.hpp>
#include <rivet/ddl/generated/VertexPaintNode.hpp>
#include <rivet/ddl/generated/VaultMetaData.hpp> 

#include <rivet/ddl/generated/PrefabDef.hpp>

namespace rivet::ddl::generated {
	PrefabDef::PrefabDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		VaultMetaData = serialized->unwrap_into<rivet::ddl::generated::VaultMetaData>(VaultMetaData_type_id);
		IconPath = serialized->get_string(IconPath_type_id);
		SceneNodes = serialized->unwrap_into_many<rivet::ddl::generated::SceneNode>(SceneNodes_type_id);
		ActorGroups = serialized->unwrap_into_many<rivet::ddl::generated::ActorGroupNode>(ActorGroups_type_id);
		MainScriptGraphId = serialized->get_uint64(MainScriptGraphId_type_id);
		ScriptGraphs = serialized->unwrap_into_many<rivet::ddl::generated::NodeGraphContents>(ScriptGraphs_type_id);
		VarNodes = serialized->unwrap_into_many<rivet::ddl::generated::VarNode>(VarNodes_type_id);
		VertexPaintNodes = serialized->unwrap_into_many<rivet::ddl::generated::VertexPaintNode>(VertexPaintNodes_type_id);
		ImpostorAttributes = serialized->unwrap_into<rivet::ddl::generated::ImpostorAttributes>(ImpostorAttributes_type_id);
		RenderFlags = serialized->unwrap_into<rivet::ddl::generated::PrefabRenderFlags>(RenderFlags_type_id);
		FixupTable = serialized->get_uint64s(FixupTable_type_id); 
	}

	[[nodiscard]] auto
	PrefabDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PrefabDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PrefabDef> {
		if (incoming_type_id == PrefabDef::type_id) {
			return std::make_shared<PrefabDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
