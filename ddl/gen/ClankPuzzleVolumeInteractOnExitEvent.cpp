// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ClankPuzzleVolumeInteractOnExitEvent.hpp>

namespace rivet::ddl::generated {
	ClankPuzzleVolumeInteractOnExitEvent::ClankPuzzleVolumeInteractOnExitEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ClankPuzzleVolumeInteractEventBase(serialized) {

	}

	[[nodiscard]] auto
	ClankPuzzleVolumeInteractOnExitEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ClankPuzzleVolumeInteractOnExitEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ClankPuzzleVolumeInteractOnExitEvent> {
		if (incoming_type_id == ClankPuzzleVolumeInteractOnExitEvent::type_id) {
			return std::make_shared<ClankPuzzleVolumeInteractOnExitEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
