// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

// clang-format off

#include <cstdint>
#include <memory>
#include <string_view>
#include <vector>

#include <rivet/hash/type_id.hpp>
#include <rivet/rivet_array.hpp>
#include <rivet/rivet_keywords.hpp>
#include <rivet/structures/rivet_serialization.hpp>

#include <rivet/ddl/generated/enums/x10228b34.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED BotAwarenessSetPriorityTargetsScriptActionPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "BotAwarenessSetPriorityTargetsScriptActionPrius";
		constexpr static rivet::rivet_type_id type_id = 0x7e03fcb4;

		constexpr static std::string_view ActionType_type_name = "ActionType";
		constexpr static rivet::rivet_type_id ActionType_type_id = 0x874b2194;
		constexpr static std::string_view IgnoreBotAreaLimitations_type_name = "IgnoreBotAreaLimitations";
		constexpr static rivet::rivet_type_id IgnoreBotAreaLimitations_type_id = 0xf57c54db;
		constexpr static std::string_view RoundRobinTargetVictims_type_name = "RoundRobinTargetVictims";
		constexpr static rivet::rivet_type_id RoundRobinTargetVictims_type_id = 0x186b6dae;
		constexpr static std::string_view RoundRobinSwitchTimer_type_name = "RoundRobinSwitchTimer";
		constexpr static rivet::rivet_type_id RoundRobinSwitchTimer_type_id = 0x9dd80647; 

		explicit BotAwarenessSetPriorityTargetsScriptActionPrius() = default;
		explicit BotAwarenessSetPriorityTargetsScriptActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x10228b34 ActionType {};
		bool IgnoreBotAreaLimitations {};
		bool RoundRobinTargetVictims {};
		float RoundRobinSwitchTimer {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotAwarenessSetPriorityTargetsScriptActionPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
