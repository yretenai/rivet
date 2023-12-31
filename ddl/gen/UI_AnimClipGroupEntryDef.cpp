// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AnimClipGroupElemDef.hpp>
#include <rivet/ddl/generated/AnimClipGroupIdDef.hpp> 

#include <rivet/ddl/generated/UI_AnimClipGroupEntryDef.hpp>

namespace rivet::ddl::generated {
	UI_AnimClipGroupEntryDef::UI_AnimClipGroupEntryDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Id = serialized->get_uint64(Id_type_id);
		Default = serialized->get_bool(Default_type_id);
		FilterIds = serialized->unwrap_into_many<rivet::ddl::generated::AnimClipGroupIdDef>(FilterIds_type_id);
		Clips = serialized->unwrap_into_many<rivet::ddl::generated::AnimClipGroupElemDef>(Clips_type_id); 
	}

	[[nodiscard]] auto
	UI_AnimClipGroupEntryDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UI_AnimClipGroupEntryDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UI_AnimClipGroupEntryDef> {
		if (incoming_type_id == UI_AnimClipGroupEntryDef::type_id) {
			return std::make_shared<UI_AnimClipGroupEntryDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
