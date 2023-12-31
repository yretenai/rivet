// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector2.hpp> 

#include <rivet/ddl/generated/TweakVarVariable.hpp>

namespace rivet::ddl::generated {
	TweakVarVariable::TweakVarVariable([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Name = serialized->get_string(Name_type_id);
		Address = serialized->get_string(Address_type_id);
		LineNumber = serialized->get_uint32(LineNumber_type_id);
		Range = serialized->unwrap_into<rivet::ddl::generated::DDLVector2>(Range_type_id);
		RangeValid = serialized->get_bool(RangeValid_type_id);
		TagsJson = serialized->get_field(TagsJson_type_id);
		ToolTip = serialized->get_string(ToolTip_type_id);
		Type = serialized->get_enum<rivet::ddl::generated::xb44e71fc>(Type_type_id, rivet::ddl::generated::xb44e71fc_values);
		Value = serialized->get_field(Value_type_id);
		HoudiniChoiceList = serialized->get_strings(HoudiniChoiceList_type_id);
		HoudiniSortValue = serialized->get_int32(HoudiniSortValue_type_id); 
	}

	[[nodiscard]] auto
	TweakVarVariable::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TweakVarVariable::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TweakVarVariable> {
		if (incoming_type_id == TweakVarVariable::type_id) {
			return std::make_shared<TweakVarVariable>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
