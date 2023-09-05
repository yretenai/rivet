// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/UIOption.hpp>
#include <rivet/ddl/generated/UIOptionTypeSettingSlider.hpp>
#include <rivet/ddl/generated/UIOptionTypeSettingList.hpp>
#include <rivet/ddl/generated/UIOptionTypeKeyBinding.hpp>
#include <rivet/ddl/generated/UIOptionTypeSettingColor.hpp>
#include <rivet/ddl/generated/UIOptionTypeShortcut.hpp> 

#include <rivet/ddl/generated/UIOptionTypeSettingBase.hpp>

namespace rivet::ddl::generated {
	UIOptionTypeSettingBase::UIOptionTypeSettingBase([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): UIOptionTypeBase(serialized) {
		ChildOptions = serialized->unwrap_into_many<rivet::ddl::generated::UIOption>(ChildOptions_type_id);
		PresetValues = serialized->get_floats(PresetValues_type_id); 
	}

	auto
	UIOptionTypeSettingBase::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	UIOptionTypeSettingBase::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UIOptionTypeSettingBase::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UIOptionTypeSettingBase> {
		if (incoming_type_id == UIOptionTypeSettingBase::type_id) {
			return std::make_shared<UIOptionTypeSettingBase>(serialized);
		}

		auto UIOptionTypeSettingSlider_ptr = UIOptionTypeSettingSlider::from_substruct(incoming_type_id, serialized);
		if (UIOptionTypeSettingSlider_ptr != nullptr) {
			return UIOptionTypeSettingSlider_ptr;
		}

		auto UIOptionTypeSettingList_ptr = UIOptionTypeSettingList::from_substruct(incoming_type_id, serialized);
		if (UIOptionTypeSettingList_ptr != nullptr) {
			return UIOptionTypeSettingList_ptr;
		}

		auto UIOptionTypeKeyBinding_ptr = UIOptionTypeKeyBinding::from_substruct(incoming_type_id, serialized);
		if (UIOptionTypeKeyBinding_ptr != nullptr) {
			return UIOptionTypeKeyBinding_ptr;
		}

		auto UIOptionTypeSettingColor_ptr = UIOptionTypeSettingColor::from_substruct(incoming_type_id, serialized);
		if (UIOptionTypeSettingColor_ptr != nullptr) {
			return UIOptionTypeSettingColor_ptr;
		}

		auto UIOptionTypeShortcut_ptr = UIOptionTypeShortcut::from_substruct(incoming_type_id, serialized);
		if (UIOptionTypeShortcut_ptr != nullptr) {
			return UIOptionTypeShortcut_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
