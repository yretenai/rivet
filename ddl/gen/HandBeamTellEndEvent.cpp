// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HandBeamTellEndEvent.hpp>

namespace rivet::ddl::generated {
	HandBeamTellEndEvent::HandBeamTellEndEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		Is_Right_Hand = serialized->get_bool(Is_Right_Hand_type_id); 
	}

	[[nodiscard]] auto
	HandBeamTellEndEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HandBeamTellEndEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HandBeamTellEndEvent> {
		if (incoming_type_id == HandBeamTellEndEvent::type_id) {
			return std::make_shared<HandBeamTellEndEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
