// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/RicochetAttemptEvent.hpp>

namespace rivet::ddl::generated {
	RicochetAttemptEvent::RicochetAttemptEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): RicochetBaseEvent(serialized) {

	}

	[[nodiscard]] auto
	RicochetAttemptEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	RicochetAttemptEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RicochetAttemptEvent> {
		if (incoming_type_id == RicochetAttemptEvent::type_id) {
			return std::make_shared<RicochetAttemptEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
