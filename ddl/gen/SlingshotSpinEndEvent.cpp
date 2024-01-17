// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SlingshotSpinEndEvent.hpp>

namespace rivet::ddl::generated {
	SlingshotSpinEndEvent::SlingshotSpinEndEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		Launched = serialized->get_bool(Launched_type_id, false); 
	}

	[[nodiscard]] auto
	SlingshotSpinEndEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SlingshotSpinEndEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SlingshotSpinEndEvent> {
		if (incoming_type_id == SlingshotSpinEndEvent::type_id) {
			return std::make_shared<SlingshotSpinEndEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
