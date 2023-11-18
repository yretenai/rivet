// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/FocusTrackingAddSolverByNameEvent.hpp>

namespace rivet::ddl::generated {
	FocusTrackingAddSolverByNameEvent::FocusTrackingAddSolverByNameEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		Name = serialized->get_string(Name_type_id);
		ReferencePoseTime = serialized->get_float(ReferencePoseTime_type_id); 
	}

	[[nodiscard]] auto
	FocusTrackingAddSolverByNameEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	FocusTrackingAddSolverByNameEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FocusTrackingAddSolverByNameEvent> {
		if (incoming_type_id == FocusTrackingAddSolverByNameEvent::type_id) {
			return std::make_shared<FocusTrackingAddSolverByNameEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
