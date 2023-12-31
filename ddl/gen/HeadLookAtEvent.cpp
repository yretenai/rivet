// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HeadLookAtEvent.hpp>

namespace rivet::ddl::generated {
	HeadLookAtEvent::HeadLookAtEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		ActorToLookAt = serialized->get_uint64(ActorToLookAt_type_id); 
	}

	[[nodiscard]] auto
	HeadLookAtEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HeadLookAtEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeadLookAtEvent> {
		if (incoming_type_id == HeadLookAtEvent::type_id) {
			return std::make_shared<HeadLookAtEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
