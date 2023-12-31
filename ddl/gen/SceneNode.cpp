// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HoudiniIntegrationDef.hpp>
#include <rivet/ddl/generated/DDLDoubleTransform.hpp> 

#include <rivet/ddl/generated/SceneNode.hpp>

namespace rivet::ddl::generated {
	SceneNode::SceneNode([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		LocalTransform = serialized->unwrap_into<rivet::ddl::generated::DDLDoubleTransform>(LocalTransform_type_id);
		Name = serialized->get_string(Name_type_id);
		NeedsAttention = serialized->get_bool(NeedsAttention_type_id);
		Parent = serialized->get_uint64(Parent_type_id);
		ParentTerrain = serialized->get_uint64(ParentTerrain_type_id);
		Id = serialized->get_uint64(Id_type_id);
		IsDeleted = serialized->get_bool(IsDeleted_type_id);
		SortValue = serialized->get_float(SortValue_type_id);
		AssetType = serialized->get_enum<rivet::ddl::generated::AssetExtensions>(AssetType_type_id, rivet::ddl::generated::AssetExtensions_values);
		AssetPath = serialized->get_string(AssetPath_type_id);
		HoudiniIntegration = serialized->unwrap_into<rivet::ddl::generated::HoudiniIntegrationDef>(HoudiniIntegration_type_id);
		HoudiniIntegrationEnabled = serialized->get_bool(HoudiniIntegrationEnabled_type_id);
		AssetOverrides = serialized->get_field(AssetOverrides_type_id);
		ActorOverrides = serialized->get_field(ActorOverrides_type_id); 
	}

	[[nodiscard]] auto
	SceneNode::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SceneNode::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SceneNode> {
		if (incoming_type_id == SceneNode::type_id) {
			return std::make_shared<SceneNode>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
