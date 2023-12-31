// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/AnimDriverCommentDef.hpp>

namespace rivet::ddl::generated {
	AnimDriverCommentDef::AnimDriverCommentDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Name = serialized->get_string(Name_type_id);
		Text = serialized->get_string(Text_type_id);
		Color = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(Color_type_id);
		Alpha = serialized->get_float(Alpha_type_id);
		x = serialized->get_float(x_type_id);
		y = serialized->get_float(y_type_id);
		width = serialized->get_float(width_type_id);
		height = serialized->get_float(height_type_id); 
	}

	[[nodiscard]] auto
	AnimDriverCommentDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AnimDriverCommentDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimDriverCommentDef> {
		if (incoming_type_id == AnimDriverCommentDef::type_id) {
			return std::make_shared<AnimDriverCommentDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
