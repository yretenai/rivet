// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GrindLeanStartEvent.hpp>

namespace rivet::ddl::generated {
	GrindLeanStartEvent::GrindLeanStartEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		IsLeft = serialized->get_bool(IsLeft_type_id); 
	}

	[[nodiscard]] auto
	GrindLeanStartEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GrindLeanStartEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GrindLeanStartEvent> {
		if (incoming_type_id == GrindLeanStartEvent::type_id) {
			return std::make_shared<GrindLeanStartEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
