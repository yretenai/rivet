// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/RCPS4EconRewardPrius.hpp>

namespace rivet::ddl::generated {
	RCPS4EconRewardPrius::RCPS4EconRewardPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		RelativeValue = serialized->get_float(RelativeValue_type_id);
		MinRelativeValue = serialized->get_float(MinRelativeValue_type_id);
		GrantsBolts = serialized->get_bool(GrantsBolts_type_id);
		GrantsHeroXP = serialized->get_bool(GrantsHeroXP_type_id);
		GrantsWpnXP = serialized->get_bool(GrantsWpnXP_type_id);
		GrantsRaritanium = serialized->get_bool(GrantsRaritanium_type_id);
		CanGrantCard = serialized->get_bool(CanGrantCard_type_id);
		AutoCollect = serialized->get_bool(AutoCollect_type_id);
		FixedReward = serialized->get_bool(FixedReward_type_id);
		NoSpawn = serialized->get_bool(NoSpawn_type_id);
		OnlyDropForHeroKill = serialized->get_bool(OnlyDropForHeroKill_type_id);
		ScraperSkip = serialized->get_bool(ScraperSkip_type_id);
		SpawnLoc = serialized->get_string(SpawnLoc_type_id);
		GroovitronType = serialized->get_enum<rivet::ddl::generated::x307af5f>(GroovitronType_type_id, rivet::ddl::generated::x307af5f_values); 
	}

	[[nodiscard]] auto
	RCPS4EconRewardPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	RCPS4EconRewardPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RCPS4EconRewardPrius> {
		if (incoming_type_id == RCPS4EconRewardPrius::type_id) {
			return std::make_shared<RCPS4EconRewardPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
