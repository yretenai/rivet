// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BotAwarenessSetPriorityTargetsScriptActionPrius.hpp>

namespace rivet::ddl::generated {
	BotAwarenessSetPriorityTargetsScriptActionPrius::BotAwarenessSetPriorityTargetsScriptActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActionType = serialized->get_enum<rivet::ddl::generated::x10228b34>(ActionType_type_id, rivet::ddl::generated::x10228b34_values, rivet::ddl::generated::x10228b34::Enemy_Bot);
		IgnoreBotAreaLimitations = serialized->get_bool(IgnoreBotAreaLimitations_type_id, false);
		RoundRobinTargetVictims = serialized->get_bool(RoundRobinTargetVictims_type_id, false);
		RoundRobinSwitchTimer = serialized->get_float(RoundRobinSwitchTimer_type_id, 2.000000); 
	}

	[[nodiscard]] auto
	BotAwarenessSetPriorityTargetsScriptActionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BotAwarenessSetPriorityTargetsScriptActionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotAwarenessSetPriorityTargetsScriptActionPrius> {
		if (incoming_type_id == BotAwarenessSetPriorityTargetsScriptActionPrius::type_id) {
			return std::make_shared<BotAwarenessSetPriorityTargetsScriptActionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
