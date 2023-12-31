// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AnimClipGroupElemDef.hpp>

namespace rivet::ddl::generated {
	AnimClipGroupElemDef::AnimClipGroupElemDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Id = serialized->get_uint64(Id_type_id);
		ClipPath = serialized->get_string(ClipPath_type_id);
		ClipWeight = serialized->get_float(ClipWeight_type_id); 
	}

	[[nodiscard]] auto
	AnimClipGroupElemDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AnimClipGroupElemDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimClipGroupElemDef> {
		if (incoming_type_id == AnimClipGroupElemDef::type_id) {
			return std::make_shared<AnimClipGroupElemDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
