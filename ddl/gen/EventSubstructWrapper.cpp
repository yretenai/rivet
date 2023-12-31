// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/EventBase.hpp> 

#include <rivet/ddl/generated/EventSubstructWrapper.hpp>

namespace rivet::ddl::generated {
	EventSubstructWrapper::EventSubstructWrapper([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Event = serialized->unwrap_into<rivet::ddl::generated::EventBase>(Event_type_id); 
	}

	[[nodiscard]] auto
	EventSubstructWrapper::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	EventSubstructWrapper::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<EventSubstructWrapper> {
		if (incoming_type_id == EventSubstructWrapper::type_id) {
			return std::make_shared<EventSubstructWrapper>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
