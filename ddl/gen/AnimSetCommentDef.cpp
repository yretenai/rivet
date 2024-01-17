// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/AnimSetCommentDef.hpp>

namespace rivet::ddl::generated {
	AnimSetCommentDef::AnimSetCommentDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Text = serialized->get_string(Text_type_id, {});
		Color = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(Color_type_id);
		Alpha = serialized->get_float(Alpha_type_id, 0.000000);
		Height = serialized->get_float(Height_type_id, 0.000000);
		Width = serialized->get_float(Width_type_id, 0.000000);
		X = serialized->get_float(X_type_id, 0.000000);
		Y = serialized->get_float(Y_type_id, 0.000000); 
	}

	[[nodiscard]] auto
	AnimSetCommentDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AnimSetCommentDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimSetCommentDef> {
		if (incoming_type_id == AnimSetCommentDef::type_id) {
			return std::make_shared<AnimSetCommentDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
