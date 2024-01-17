// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/Beam2JointStartEvent.hpp>

namespace rivet::ddl::generated {
	Beam2JointStartEvent::Beam2JointStartEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		StartLocator = serialized->get_string(StartLocator_type_id, {});
		EndLocator = serialized->get_string(EndLocator_type_id, {}); 
	}

	[[nodiscard]] auto
	Beam2JointStartEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	Beam2JointStartEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<Beam2JointStartEvent> {
		if (incoming_type_id == Beam2JointStartEvent::type_id) {
			return std::make_shared<Beam2JointStartEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
