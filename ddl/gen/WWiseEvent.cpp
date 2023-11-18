// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/WWiseEvent.hpp>

namespace rivet::ddl::generated {
	WWiseEvent::WWiseEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		Action = serialized->get_enum<rivet::ddl::generated::x38ca42>(Action_type_id, rivet::ddl::generated::x38ca42_values);
		Name = serialized->get_string(Name_type_id);
		ValueName = serialized->get_string(ValueName_type_id);
		Value = serialized->get_float(Value_type_id); 
	}

	[[nodiscard]] auto
	WWiseEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	WWiseEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WWiseEvent> {
		if (incoming_type_id == WWiseEvent::type_id) {
			return std::make_shared<WWiseEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
