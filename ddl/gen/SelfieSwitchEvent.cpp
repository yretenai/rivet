// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SelfieSwitchEvent.hpp>

namespace rivet::ddl::generated {
	SelfieSwitchEvent::SelfieSwitchEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		State = serialized->get_enum<rivet::ddl::generated::xa857c0d1>(State_type_id, rivet::ddl::generated::xa857c0d1_values); 
	}

	[[nodiscard]] auto
	SelfieSwitchEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SelfieSwitchEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SelfieSwitchEvent> {
		if (incoming_type_id == SelfieSwitchEvent::type_id) {
			return std::make_shared<SelfieSwitchEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
