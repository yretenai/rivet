// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/OnStartCloseEvent.hpp>

namespace rivet::ddl::generated {
	OnStartCloseEvent::OnStartCloseEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		SourceSyncId = serialized->get_uint64(SourceSyncId_type_id); 
	}

	[[nodiscard]] auto
	OnStartCloseEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	OnStartCloseEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<OnStartCloseEvent> {
		if (incoming_type_id == OnStartCloseEvent::type_id) {
			return std::make_shared<OnStartCloseEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
