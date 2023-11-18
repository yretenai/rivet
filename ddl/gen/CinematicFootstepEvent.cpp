// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CinematicFootstepEvent.hpp>

namespace rivet::ddl::generated {
	CinematicFootstepEvent::CinematicFootstepEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): FootstepEvent(serialized) {

	}

	[[nodiscard]] auto
	CinematicFootstepEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CinematicFootstepEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CinematicFootstepEvent> {
		if (incoming_type_id == CinematicFootstepEvent::type_id) {
			return std::make_shared<CinematicFootstepEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
