// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/UIArenaChallenge.hpp> 

#include <rivet/ddl/generated/UIArenaCup.hpp>

namespace rivet::ddl::generated {
	UIArenaCup::UIArenaCup([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Title = serialized->get_string(Title_type_id);
		Description = serialized->get_string(Description_type_id);
		MissionUnlock = serialized->get_string(MissionUnlock_type_id);
		Challenges = serialized->unwrap_into_many<rivet::ddl::generated::UIArenaChallenge>(Challenges_type_id); 
	}

	[[nodiscard]] auto
	UIArenaCup::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UIArenaCup::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UIArenaCup> {
		if (incoming_type_id == UIArenaCup::type_id) {
			return std::make_shared<UIArenaCup>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
