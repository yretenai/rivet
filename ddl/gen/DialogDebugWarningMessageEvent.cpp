// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DialogDebugWarningMessageEvent.hpp>

namespace rivet::ddl::generated {
	DialogDebugWarningMessageEvent::DialogDebugWarningMessageEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		Message = serialized->get_enum<rivet::ddl::generated::x7f6273a0>(Message_type_id, rivet::ddl::generated::x7f6273a0_values); 
	}

	[[nodiscard]] auto
	DialogDebugWarningMessageEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DialogDebugWarningMessageEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DialogDebugWarningMessageEvent> {
		if (incoming_type_id == DialogDebugWarningMessageEvent::type_id) {
			return std::make_shared<DialogDebugWarningMessageEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
