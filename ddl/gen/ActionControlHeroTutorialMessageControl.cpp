// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ActionControlHeroTutorialMessageControl.hpp>

namespace rivet::ddl::generated {
	ActionControlHeroTutorialMessageControl::ActionControlHeroTutorialMessageControl([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Control = serialized->get_enum<rivet::ddl::generated::xd8ef6541>(Control_type_id, rivet::ddl::generated::xd8ef6541_values, rivet::ddl::generated::xd8ef6541::TutorialTouchpadX); 
	}

	[[nodiscard]] auto
	ActionControlHeroTutorialMessageControl::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ActionControlHeroTutorialMessageControl::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ActionControlHeroTutorialMessageControl> {
		if (incoming_type_id == ActionControlHeroTutorialMessageControl::type_id) {
			return std::make_shared<ActionControlHeroTutorialMessageControl>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
