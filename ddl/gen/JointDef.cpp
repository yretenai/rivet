// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp>
#include <rivet/ddl/generated/DDLQuaternion.hpp> 

#include <rivet/ddl/generated/JointDef.hpp>

namespace rivet::ddl::generated {
	JointDef::JointDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Name = serialized->get_string(Name_type_id);
		ParentName = serialized->get_string(ParentName_type_id);
		ParentScaleCompensate = serialized->get_bool(ParentScaleCompensate_type_id);
		IsLocator = serialized->get_bool(IsLocator_type_id);
		Orientation = serialized->unwrap_into<rivet::ddl::generated::DDLQuaternion>(Orientation_type_id);
		Translation = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(Translation_type_id); 
	}

	[[nodiscard]] auto
	JointDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	JointDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<JointDef> {
		if (incoming_type_id == JointDef::type_id) {
			return std::make_shared<JointDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
