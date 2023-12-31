// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BotCommandGotoScriptActionPrius.hpp>

namespace rivet::ddl::generated {
	BotCommandGotoScriptActionPrius::BotCommandGotoScriptActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActionType = serialized->get_enum<rivet::ddl::generated::x10228b34>(ActionType_type_id, rivet::ddl::generated::x10228b34_values);
		MoveStyle = serialized->get_enum<rivet::ddl::generated::MovementStyle>(MoveStyle_type_id, rivet::ddl::generated::MovementStyle_values);
		SkipIntro = serialized->get_bool(SkipIntro_type_id);
		SkipOutro = serialized->get_bool(SkipOutro_type_id);
		UseDestinationFacing = serialized->get_bool(UseDestinationFacing_type_id);
		IgnoreHero = serialized->get_bool(IgnoreHero_type_id);
		StopForHero = serialized->get_bool(StopForHero_type_id);
		FollowCurve = serialized->get_bool(FollowCurve_type_id); 
	}

	[[nodiscard]] auto
	BotCommandGotoScriptActionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BotCommandGotoScriptActionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotCommandGotoScriptActionPrius> {
		if (incoming_type_id == BotCommandGotoScriptActionPrius::type_id) {
			return std::make_shared<BotCommandGotoScriptActionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
