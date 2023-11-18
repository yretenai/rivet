// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/OnStartOpenEvent.hpp>

namespace rivet::ddl::generated {
	OnStartOpenEvent::OnStartOpenEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		SourceSyncId = serialized->get_uint64(SourceSyncId_type_id); 
	}

	[[nodiscard]] auto
	OnStartOpenEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	OnStartOpenEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<OnStartOpenEvent> {
		if (incoming_type_id == OnStartOpenEvent::type_id) {
			return std::make_shared<OnStartOpenEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
