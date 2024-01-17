// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GoldBoltRewardCost.hpp> 

#include <rivet/ddl/generated/GoldBoltSystemConfig.hpp>

namespace rivet::ddl::generated {
	GoldBoltSystemConfig::GoldBoltSystemConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		Rewards = serialized->unwrap_into_many<rivet::ddl::generated::GoldBoltRewardCost>(Rewards_type_id);
		HeadSizeConfig = serialized->get_string(HeadSizeConfig_type_id, {});
		MeleeModelSwapConfig = serialized->get_string(MeleeModelSwapConfig_type_id, {});
		HomeRunHitterConfig = serialized->get_string(HomeRunHitterConfig_type_id, {});
		RewardRenderModeConfig = serialized->get_string(RewardRenderModeConfig_type_id, {});
		ShipSkinConfig = serialized->get_string(ShipSkinConfig_type_id, {}); 
	}

	[[nodiscard]] auto
	GoldBoltSystemConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GoldBoltSystemConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GoldBoltSystemConfig> {
		if (incoming_type_id == GoldBoltSystemConfig::type_id) {
			return std::make_shared<GoldBoltSystemConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
