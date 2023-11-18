// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MeshTriDef.hpp>
#include <rivet/ddl/generated/MeshUColorDef.hpp>
#include <rivet/ddl/generated/MeshUvDef.hpp>
#include <rivet/ddl/generated/MeshNormalDef.hpp>
#include <rivet/ddl/generated/MeshSkinVertDef.hpp>
#include <rivet/ddl/generated/MeshPosDef.hpp> 

#include <rivet/ddl/generated/MeshDef.hpp>

namespace rivet::ddl::generated {
	MeshDef::MeshDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Name = serialized->get_string(Name_type_id);
		Positions = serialized->unwrap_into_many<rivet::ddl::generated::MeshPosDef>(Positions_type_id);
		Normals = serialized->unwrap_into_many<rivet::ddl::generated::MeshNormalDef>(Normals_type_id);
		UVs = serialized->unwrap_into_many<rivet::ddl::generated::MeshUvDef>(UVs_type_id);
		UV2s = serialized->unwrap_into_many<rivet::ddl::generated::MeshUvDef>(UV2s_type_id);
		Colors = serialized->unwrap_into_many<rivet::ddl::generated::MeshUColorDef>(Colors_type_id);
		SkinVerts = serialized->unwrap_into_many<rivet::ddl::generated::MeshSkinVertDef>(SkinVerts_type_id);
		Tris = serialized->unwrap_into_many<rivet::ddl::generated::MeshTriDef>(Tris_type_id); 
	}

	[[nodiscard]] auto
	MeshDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MeshDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MeshDef> {
		if (incoming_type_id == MeshDef::type_id) {
			return std::make_shared<MeshDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
