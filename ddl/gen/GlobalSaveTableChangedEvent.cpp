// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GlobalSaveTableChangedEvent.hpp>

namespace rivet::ddl::generated {
	GlobalSaveTableChangedEvent::GlobalSaveTableChangedEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		Reason = serialized->get_enum<rivet::ddl::generated::x5d051641>(Reason_type_id, rivet::ddl::generated::x5d051641_values); 
	}

	[[nodiscard]] auto
	GlobalSaveTableChangedEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GlobalSaveTableChangedEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GlobalSaveTableChangedEvent> {
		if (incoming_type_id == GlobalSaveTableChangedEvent::type_id) {
			return std::make_shared<GlobalSaveTableChangedEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
