// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ToggleHeroMovesListDisable.hpp>
#include <rivet/ddl/generated/ToggleHeroMovesListEnable.hpp>
#include <rivet/ddl/generated/HeroMoveAbilities.hpp> 

#include <rivet/ddl/generated/ToggleHeroMovesListToggle.hpp>

namespace rivet::ddl::generated {
	ToggleHeroMovesListToggle::ToggleHeroMovesListToggle([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ToggleHeroMovesListBase(serialized) {
		ToggleList = serialized->unwrap_into<rivet::ddl::generated::HeroMoveAbilities>(ToggleList_type_id); 
	}

	[[nodiscard]] auto
	ToggleHeroMovesListToggle::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ToggleHeroMovesListToggle::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ToggleHeroMovesListToggle> {
		if (incoming_type_id == ToggleHeroMovesListToggle::type_id) {
			return std::make_shared<ToggleHeroMovesListToggle>(serialized);
		}

		auto ToggleHeroMovesListEnable_ptr = ToggleHeroMovesListEnable::from_substruct(incoming_type_id, serialized);
		if (ToggleHeroMovesListEnable_ptr != nullptr) {
			return ToggleHeroMovesListEnable_ptr;
		}

		auto ToggleHeroMovesListDisable_ptr = ToggleHeroMovesListDisable::from_substruct(incoming_type_id, serialized);
		if (ToggleHeroMovesListDisable_ptr != nullptr) {
			return ToggleHeroMovesListDisable_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
