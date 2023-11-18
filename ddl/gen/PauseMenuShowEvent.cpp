// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PauseMenuShowEvent.hpp>

namespace rivet::ddl::generated {
	PauseMenuShowEvent::PauseMenuShowEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	PauseMenuShowEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PauseMenuShowEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PauseMenuShowEvent> {
		if (incoming_type_id == PauseMenuShowEvent::type_id) {
			return std::make_shared<PauseMenuShowEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
