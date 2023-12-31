// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ConduitScriptEvent.hpp>

namespace rivet::ddl::generated {
	ConduitScriptEvent::ConduitScriptEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		Label = serialized->get_string(Label_type_id);
		Value = serialized->get_float(Value_type_id); 
	}

	[[nodiscard]] auto
	ConduitScriptEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ConduitScriptEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ConduitScriptEvent> {
		if (incoming_type_id == ConduitScriptEvent::type_id) {
			return std::make_shared<ConduitScriptEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
