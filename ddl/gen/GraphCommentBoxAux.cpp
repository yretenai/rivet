// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/GraphCommentBoxAux.hpp>

namespace rivet::ddl::generated {
	GraphCommentBoxAux::GraphCommentBoxAux([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Comment = serialized->get_string(Comment_type_id, {});
		Description = serialized->get_string(Description_type_id, {});
		Color = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(Color_type_id);
		Alpha = serialized->get_float(Alpha_type_id, 0.000000);
		Width = serialized->get_float(Width_type_id, 0.000000);
		Height = serialized->get_float(Height_type_id, 0.000000); 
	}

	[[nodiscard]] auto
	GraphCommentBoxAux::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GraphCommentBoxAux::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GraphCommentBoxAux> {
		if (incoming_type_id == GraphCommentBoxAux::type_id) {
			return std::make_shared<GraphCommentBoxAux>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
