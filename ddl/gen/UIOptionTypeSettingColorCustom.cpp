// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/UIOptionTypeSettingColorCustom.hpp>

namespace rivet::ddl::generated {
	UIOptionTypeSettingColorCustom::UIOptionTypeSettingColorCustom([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): UIOptionTypeSettingColor(serialized) {
		CustomColorOptionID = serialized->get_enum<rivet::ddl::generated::x33afe7f4>(CustomColorOptionID_type_id, rivet::ddl::generated::x33afe7f4_values, rivet::ddl::generated::x33afe7f4::Resume); 
	}

	[[nodiscard]] auto
	UIOptionTypeSettingColorCustom::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UIOptionTypeSettingColorCustom::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UIOptionTypeSettingColorCustom> {
		if (incoming_type_id == UIOptionTypeSettingColorCustom::type_id) {
			return std::make_shared<UIOptionTypeSettingColorCustom>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
