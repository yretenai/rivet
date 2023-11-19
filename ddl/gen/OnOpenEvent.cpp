// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/OnOpenEvent.hpp>

namespace rivet::ddl::generated {
	OnOpenEvent::OnOpenEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		SourceSyncId = serialized->get_uint64(SourceSyncId_type_id); 
	}

	[[nodiscard]] auto
	OnOpenEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	OnOpenEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<OnOpenEvent> {
		if (incoming_type_id == OnOpenEvent::type_id) {
			return std::make_shared<OnOpenEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated