// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HeroMoveAbilities.hpp>

namespace rivet::ddl::generated {
	HeroMoveAbilities::HeroMoveAbilities([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Move = serialized->get_bool(Move_type_id);
		Run = serialized->get_bool(Run_type_id);
		Jump = serialized->get_bool(Jump_type_id);
		DoubleJump = serialized->get_bool(DoubleJump_type_id);
		Shoot = serialized->get_bool(Shoot_type_id);
		Melee = serialized->get_bool(Melee_type_id);
		Ledge = serialized->get_bool(Ledge_type_id);
		Interact = serialized->get_bool(Interact_type_id);
		Grind = serialized->get_bool(Grind_type_id);
		Glide = serialized->get_bool(Glide_type_id);
		Mount = serialized->get_bool(Mount_type_id);
		WallStick = serialized->get_bool(WallStick_type_id);
		WallRun = serialized->get_bool(WallRun_type_id);
		Dash = serialized->get_bool(Dash_type_id);
		AirDash = serialized->get_bool(AirDash_type_id);
		Hoverboot = serialized->get_bool(Hoverboot_type_id);
		MagbootLaunch = serialized->get_bool(MagbootLaunch_type_id);
		PortalZip = serialized->get_bool(PortalZip_type_id);
		WeaponWheel = serialized->get_bool(WeaponWheel_type_id);
		WeaponToggle = serialized->get_bool(WeaponToggle_type_id);
		Sprint = serialized->get_bool(Sprint_type_id); 
	}

	auto
	HeroMoveAbilities::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	HeroMoveAbilities::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HeroMoveAbilities::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroMoveAbilities> {
		if (incoming_type_id == HeroMoveAbilities::type_id) {
			return std::make_shared<HeroMoveAbilities>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
