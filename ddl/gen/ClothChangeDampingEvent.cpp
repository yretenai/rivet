// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ClothChangeDampingEvent.hpp>

namespace rivet::ddl::generated {
	ClothChangeDampingEvent::ClothChangeDampingEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		Damping = serialized->get_float(Damping_type_id); 
	}

	[[nodiscard]] auto
	ClothChangeDampingEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ClothChangeDampingEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ClothChangeDampingEvent> {
		if (incoming_type_id == ClothChangeDampingEvent::type_id) {
			return std::make_shared<ClothChangeDampingEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated