// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SaveControlRemapData.hpp> 

#include <rivet/ddl/generated/GameCampaignSave.hpp>

namespace rivet::ddl::generated {
	GameCampaignSave::GameCampaignSave([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): CampaignSave(serialized) {
		CareerRaritanium = serialized->get_float(CareerRaritanium_type_id);
		CareerRaritaniumSpend = serialized->get_float(CareerRaritaniumSpend_type_id);
		Playtime = serialized->get_double(Playtime_type_id);
		GameStage = serialized->get_enum<rivet::ddl::generated::GameStage>(GameStage_type_id, rivet::ddl::generated::GameStage_values);
		GameFlags = serialized->get_bitset<rivet::ddl::generated::xd00d73b0>(GameFlags_type_id, rivet::ddl::generated::xd00d73b0_values);
		BoltMultiplier = serialized->get_uint8(BoltMultiplier_type_id);
		BoltMultiplierKillsLeft = serialized->get_uint8(BoltMultiplierKillsLeft_type_id);
		QuickSelectWeaponUp = serialized->get_string(QuickSelectWeaponUp_type_id);
		QuickSelectWeaponRight = serialized->get_string(QuickSelectWeaponRight_type_id);
		QuickSelectWeaponDown = serialized->get_string(QuickSelectWeaponDown_type_id);
		QuickSelectWeaponLeft = serialized->get_string(QuickSelectWeaponLeft_type_id);
		VendorWeaponNowInStockShown = serialized->get_strings(VendorWeaponNowInStockShown_type_id);
		UITutorialsComplete = serialized->get_strings(UITutorialsComplete_type_id);
		NewItemsViewed = serialized->get_strings(NewItemsViewed_type_id);
		NewMissionsViewed = serialized->get_strings(NewMissionsViewed_type_id);
		ControlRemap = serialized->unwrap_into<rivet::ddl::generated::SaveControlRemapData>(ControlRemap_type_id);
		CompletionPercent = serialized->get_float(CompletionPercent_type_id); 
	}

	[[nodiscard]] auto
	GameCampaignSave::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GameCampaignSave::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GameCampaignSave> {
		if (incoming_type_id == GameCampaignSave::type_id) {
			return std::make_shared<GameCampaignSave>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
