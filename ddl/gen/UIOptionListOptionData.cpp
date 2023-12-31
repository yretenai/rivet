// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/UIOptionListOptionData.hpp>

namespace rivet::ddl::generated {
	UIOptionListOptionData::UIOptionListOptionData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Label = serialized->get_string(Label_type_id);
		Description = serialized->get_string(Description_type_id);
		DescriptionAlt = serialized->get_string(DescriptionAlt_type_id);
		AccessibilityIcon = serialized->get_string(AccessibilityIcon_type_id);
		PreviewImage = serialized->get_string(PreviewImage_type_id);
		EnumValue = serialized->get_string(EnumValue_type_id); 
	}

	[[nodiscard]] auto
	UIOptionListOptionData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UIOptionListOptionData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UIOptionListOptionData> {
		if (incoming_type_id == UIOptionListOptionData::type_id) {
			return std::make_shared<UIOptionListOptionData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
