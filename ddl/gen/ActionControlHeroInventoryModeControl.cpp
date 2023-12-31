// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ActionControlHeroInventoryModeControl.hpp>

namespace rivet::ddl::generated {
	ActionControlHeroInventoryModeControl::ActionControlHeroInventoryModeControl([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Control = serialized->get_enum<rivet::ddl::generated::x6a041ccf>(Control_type_id, rivet::ddl::generated::x6a041ccf_values); 
	}

	[[nodiscard]] auto
	ActionControlHeroInventoryModeControl::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ActionControlHeroInventoryModeControl::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ActionControlHeroInventoryModeControl> {
		if (incoming_type_id == ActionControlHeroInventoryModeControl::type_id) {
			return std::make_shared<ActionControlHeroInventoryModeControl>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
