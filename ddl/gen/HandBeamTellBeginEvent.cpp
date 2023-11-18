// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HandBeamTellBeginEvent.hpp>

namespace rivet::ddl::generated {
	HandBeamTellBeginEvent::HandBeamTellBeginEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		Is_Right_Hand = serialized->get_bool(Is_Right_Hand_type_id); 
	}

	[[nodiscard]] auto
	HandBeamTellBeginEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HandBeamTellBeginEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HandBeamTellBeginEvent> {
		if (incoming_type_id == HandBeamTellBeginEvent::type_id) {
			return std::make_shared<HandBeamTellBeginEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
