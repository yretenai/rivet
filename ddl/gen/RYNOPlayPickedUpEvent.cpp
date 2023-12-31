// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/RYNOPlayPickedUpEvent.hpp>

namespace rivet::ddl::generated {
	RYNOPlayPickedUpEvent::RYNOPlayPickedUpEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		RynoId = serialized->get_enum<rivet::ddl::generated::x81d3e717>(RynoId_type_id, rivet::ddl::generated::x81d3e717_values); 
	}

	[[nodiscard]] auto
	RYNOPlayPickedUpEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	RYNOPlayPickedUpEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RYNOPlayPickedUpEvent> {
		if (incoming_type_id == RYNOPlayPickedUpEvent::type_id) {
			return std::make_shared<RYNOPlayPickedUpEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
