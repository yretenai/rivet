// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MaterialGraphComment.hpp>

namespace rivet::ddl::generated {
	MaterialGraphComment::MaterialGraphComment([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		CommentId = serialized->get_uint64(CommentId_type_id);
		XPos = serialized->get_int32(XPos_type_id);
		YPos = serialized->get_int32(YPos_type_id);
		Width = serialized->get_uint32(Width_type_id);
		Height = serialized->get_uint32(Height_type_id);
		Comment = serialized->get_string(Comment_type_id);
		Description = serialized->get_string(Description_type_id); 
	}

	[[nodiscard]] auto
	MaterialGraphComment::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MaterialGraphComment::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MaterialGraphComment> {
		if (incoming_type_id == MaterialGraphComment::type_id) {
			return std::make_shared<MaterialGraphComment>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
