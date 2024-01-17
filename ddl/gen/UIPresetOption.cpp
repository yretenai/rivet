// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/UIPresetOption.hpp>

namespace rivet::ddl::generated {
	UIPresetOption::UIPresetOption([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		OptionID = serialized->get_enum<rivet::ddl::generated::x33afe7f4>(OptionID_type_id, rivet::ddl::generated::x33afe7f4_values, rivet::ddl::generated::x33afe7f4::Resume);
		NumberValue = serialized->get_float(NumberValue_type_id, 1.000000);
		StringValue = serialized->get_string(StringValue_type_id, ""); 
	}

	[[nodiscard]] auto
	UIPresetOption::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UIPresetOption::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UIPresetOption> {
		if (incoming_type_id == UIPresetOption::type_id) {
			return std::make_shared<UIPresetOption>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
