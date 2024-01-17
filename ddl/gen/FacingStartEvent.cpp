// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/FacingStartEvent.hpp>

namespace rivet::ddl::generated {
	FacingStartEvent::FacingStartEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		Direction = serialized->get_enum<rivet::ddl::generated::xfa020271>(Direction_type_id, rivet::ddl::generated::xfa020271_values, rivet::ddl::generated::xfa020271::Both); 
	}

	[[nodiscard]] auto
	FacingStartEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	FacingStartEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FacingStartEvent> {
		if (incoming_type_id == FacingStartEvent::type_id) {
			return std::make_shared<FacingStartEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
