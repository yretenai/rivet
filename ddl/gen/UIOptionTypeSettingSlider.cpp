// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/UIOptionTypeSettingSlider.hpp>

namespace rivet::ddl::generated {
	UIOptionTypeSettingSlider::UIOptionTypeSettingSlider([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): UIOptionTypeSettingBase(serialized) {
		SliderMinimum = serialized->get_int32(SliderMinimum_type_id);
		SliderFidelity = serialized->get_int32(SliderFidelity_type_id);
		GamePreview = serialized->get_bool(GamePreview_type_id); 
	}

	[[nodiscard]] auto
	UIOptionTypeSettingSlider::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UIOptionTypeSettingSlider::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UIOptionTypeSettingSlider> {
		if (incoming_type_id == UIOptionTypeSettingSlider::type_id) {
			return std::make_shared<UIOptionTypeSettingSlider>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
