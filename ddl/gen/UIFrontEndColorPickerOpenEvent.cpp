// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/UIFrontEndColorPickerOpenEvent.hpp>

namespace rivet::ddl::generated {
	UIFrontEndColorPickerOpenEvent::UIFrontEndColorPickerOpenEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	UIFrontEndColorPickerOpenEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UIFrontEndColorPickerOpenEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UIFrontEndColorPickerOpenEvent> {
		if (incoming_type_id == UIFrontEndColorPickerOpenEvent::type_id) {
			return std::make_shared<UIFrontEndColorPickerOpenEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
