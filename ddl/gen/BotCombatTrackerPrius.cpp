// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BotCombatTrackerPrius.hpp>

namespace rivet::ddl::generated {
	BotCombatTrackerPrius::BotCombatTrackerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): CombatTrackerPrius(serialized) {

	}

	[[nodiscard]] auto
	BotCombatTrackerPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BotCombatTrackerPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotCombatTrackerPrius> {
		if (incoming_type_id == BotCombatTrackerPrius::type_id) {
			return std::make_shared<BotCombatTrackerPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
