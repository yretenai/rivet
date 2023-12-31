// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/LoadStateChangedEvent.hpp>

namespace rivet::ddl::generated {
	LoadStateChangedEvent::LoadStateChangedEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		ChangeType = serialized->get_enum<rivet::ddl::generated::x6b4f547f>(ChangeType_type_id, rivet::ddl::generated::x6b4f547f_values); 
	}

	[[nodiscard]] auto
	LoadStateChangedEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	LoadStateChangedEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LoadStateChangedEvent> {
		if (incoming_type_id == LoadStateChangedEvent::type_id) {
			return std::make_shared<LoadStateChangedEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
