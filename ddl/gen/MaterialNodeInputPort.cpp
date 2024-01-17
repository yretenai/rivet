// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MaterialNodeInputVisibilityCondition.hpp>
#include <rivet/ddl/generated/MaterialNodeInputSelectItem.hpp> 

#include <rivet/ddl/generated/MaterialNodeInputPort.hpp>

namespace rivet::ddl::generated {
	MaterialNodeInputPort::MaterialNodeInputPort([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		InternalName = serialized->get_string(InternalName_type_id, {});
		DisplayName = serialized->get_string(DisplayName_type_id, {});
		Minimums = serialized->get_string(Minimums_type_id, {});
		Maximums = serialized->get_string(Maximums_type_id, {});
		Values = serialized->get_string(Values_type_id, {});
		Type = serialized->get_string(Type_type_id, "float4");
		Description = serialized->get_string(Description_type_id, {});
		Documentation = serialized->get_string(Documentation_type_id, {});
		UIType = serialized->get_string(UIType_type_id, {});
		Group = serialized->get_string(Group_type_id, {});
		SortOrder = serialized->get_string(SortOrder_type_id, {});
		Labels = serialized->get_string(Labels_type_id, {});
		Global = serialized->get_bool(Global_type_id, false);
		Visible = serialized->get_bool(Visible_type_id, true);
		Exposed = serialized->get_bool(Exposed_type_id, false);
		TestingOnly = serialized->get_bool(TestingOnly_type_id, false);
		InheritName = serialized->get_bool(InheritName_type_id, false);
		LinearFilter = serialized->get_bool(LinearFilter_type_id, false);
		ShowPreview = serialized->get_bool(ShowPreview_type_id, true);
		DeveloperMode = serialized->get_bool(DeveloperMode_type_id, false);
		UserDefinedLabels = serialized->get_bool(UserDefinedLabels_type_id, false);
		SelectItems = serialized->unwrap_into_many<rivet::ddl::generated::MaterialNodeInputSelectItem>(SelectItems_type_id);
		VisibilityCondition = serialized->unwrap_into<rivet::ddl::generated::MaterialNodeInputVisibilityCondition>(VisibilityCondition_type_id); 
	}

	[[nodiscard]] auto
	MaterialNodeInputPort::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MaterialNodeInputPort::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MaterialNodeInputPort> {
		if (incoming_type_id == MaterialNodeInputPort::type_id) {
			return std::make_shared<MaterialNodeInputPort>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
