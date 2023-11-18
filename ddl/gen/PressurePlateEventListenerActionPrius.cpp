// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PressurePlateEventListenerActionPrius.hpp>

namespace rivet::ddl::generated {
	PressurePlateEventListenerActionPrius::PressurePlateEventListenerActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActionType = serialized->get_enum<rivet::ddl::generated::x10228b34>(ActionType_type_id, rivet::ddl::generated::x10228b34_values); 
	}

	[[nodiscard]] auto
	PressurePlateEventListenerActionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PressurePlateEventListenerActionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PressurePlateEventListenerActionPrius> {
		if (incoming_type_id == PressurePlateEventListenerActionPrius::type_id) {
			return std::make_shared<PressurePlateEventListenerActionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
