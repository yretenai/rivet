// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HeroCombatTrackerPrius.hpp>
#include <rivet/ddl/generated/BotCombatTrackerPrius.hpp> 

#include <rivet/ddl/generated/CombatTrackerPrius.hpp>

namespace rivet::ddl::generated {
	CombatTrackerPrius::CombatTrackerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		CombatEndedQuietTime = serialized->get_float(CombatEndedQuietTime_type_id); 
	}

	[[nodiscard]] auto
	CombatTrackerPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CombatTrackerPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CombatTrackerPrius> {
		if (incoming_type_id == CombatTrackerPrius::type_id) {
			return std::make_shared<CombatTrackerPrius>(serialized);
		}

		auto BotCombatTrackerPrius_ptr = BotCombatTrackerPrius::from_substruct(incoming_type_id, serialized);
		if (BotCombatTrackerPrius_ptr != nullptr) {
			return BotCombatTrackerPrius_ptr;
		}

		auto HeroCombatTrackerPrius_ptr = HeroCombatTrackerPrius::from_substruct(incoming_type_id, serialized);
		if (HeroCombatTrackerPrius_ptr != nullptr) {
			return HeroCombatTrackerPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
