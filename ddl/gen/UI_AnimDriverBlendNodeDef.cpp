// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/UI_AnimDriverBlendNodeIntervals.hpp>
#include <rivet/ddl/generated/AnimDriverBlendElemDef.hpp> 

#include <rivet/ddl/generated/UI_AnimDriverBlendNodeDef.hpp>

namespace rivet::ddl::generated {
	UI_AnimDriverBlendNodeDef::UI_AnimDriverBlendNodeDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		DisplayName = serialized->get_string(DisplayName_type_id);
		Type = serialized->get_enum<rivet::ddl::generated::x53f8509f>(Type_type_id, rivet::ddl::generated::x53f8509f_values);
		Rate = serialized->get_float(Rate_type_id);
		CurrentValue = serialized->get_float(CurrentValue_type_id);
		Intervals = serialized->unwrap_into_many<rivet::ddl::generated::AnimDriverBlendElemDef>(Intervals_type_id);
		IntervalsUI = serialized->unwrap_into<rivet::ddl::generated::UI_AnimDriverBlendNodeIntervals>(IntervalsUI_type_id); 
	}

	[[nodiscard]] auto
	UI_AnimDriverBlendNodeDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UI_AnimDriverBlendNodeDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UI_AnimDriverBlendNodeDef> {
		if (incoming_type_id == UI_AnimDriverBlendNodeDef::type_id) {
			return std::make_shared<UI_AnimDriverBlendNodeDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
