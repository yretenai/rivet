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

#include <rivet/ddl/generated/bitsets/xd00d73b0.hpp>
#include <rivet/ddl/generated/enums/GameStage.hpp>
#include <rivet/ddl/generated/CampaignSave.hpp> 

namespace rivet::ddl::generated {
	struct SaveControlRemapData; 

	struct RIVET_DDL_SHARED GameCampaignSave : CampaignSave {
		constexpr static std::string_view type_name = "GameCampaignSave";
		constexpr static rivet::rivet_type_id type_id = 0x5da4b89f;

		constexpr static std::string_view CareerRaritanium_type_name = "CareerRaritanium";
		constexpr static rivet::rivet_type_id CareerRaritanium_type_id = 0x876a54ce;
		constexpr static std::string_view CareerRaritaniumSpend_type_name = "CareerRaritaniumSpend";
		constexpr static rivet::rivet_type_id CareerRaritaniumSpend_type_id = 0xc8f97111;
		constexpr static std::string_view Playtime_type_name = "Playtime";
		constexpr static rivet::rivet_type_id Playtime_type_id = 0x6dfcc00;
		constexpr static std::string_view GameStage_type_name = "GameStage";
		constexpr static rivet::rivet_type_id GameStage_type_id = 0x37703f56;
		constexpr static std::string_view GameFlags_type_name = "GameFlags";
		constexpr static rivet::rivet_type_id GameFlags_type_id = 0xfe09ed85;
		constexpr static std::string_view BoltMultiplier_type_name = "BoltMultiplier";
		constexpr static rivet::rivet_type_id BoltMultiplier_type_id = 0xac3d0e89;
		constexpr static std::string_view BoltMultiplierKillsLeft_type_name = "BoltMultiplierKillsLeft";
		constexpr static rivet::rivet_type_id BoltMultiplierKillsLeft_type_id = 0x9d36738e;
		constexpr static std::string_view QuickSelectWeaponUp_type_name = "QuickSelectWeaponUp";
		constexpr static rivet::rivet_type_id QuickSelectWeaponUp_type_id = 0x88fb26ef;
		constexpr static std::string_view QuickSelectWeaponRight_type_name = "QuickSelectWeaponRight";
		constexpr static rivet::rivet_type_id QuickSelectWeaponRight_type_id = 0x63ea728f;
		constexpr static std::string_view QuickSelectWeaponDown_type_name = "QuickSelectWeaponDown";
		constexpr static rivet::rivet_type_id QuickSelectWeaponDown_type_id = 0x3e4095fc;
		constexpr static std::string_view QuickSelectWeaponLeft_type_name = "QuickSelectWeaponLeft";
		constexpr static rivet::rivet_type_id QuickSelectWeaponLeft_type_id = 0x58d8e2af;
		constexpr static std::string_view VendorWeaponNowInStockShown_type_name = "VendorWeaponNowInStockShown";
		constexpr static rivet::rivet_type_id VendorWeaponNowInStockShown_type_id = 0xed84f3b5;
		constexpr static std::string_view UITutorialsComplete_type_name = "UITutorialsComplete";
		constexpr static rivet::rivet_type_id UITutorialsComplete_type_id = 0xa139e33c;
		constexpr static std::string_view NewItemsViewed_type_name = "NewItemsViewed";
		constexpr static rivet::rivet_type_id NewItemsViewed_type_id = 0x147057d2;
		constexpr static std::string_view NewMissionsViewed_type_name = "NewMissionsViewed";
		constexpr static rivet::rivet_type_id NewMissionsViewed_type_id = 0xd0526a4f;
		constexpr static std::string_view ControlRemap_type_name = "ControlRemap";
		constexpr static rivet::rivet_type_id ControlRemap_type_id = 0x88a00900;
		constexpr static std::string_view CompletionPercent_type_name = "CompletionPercent";
		constexpr static rivet::rivet_type_id CompletionPercent_type_id = 0x712e5ab7; 

		explicit GameCampaignSave() = default;
		explicit GameCampaignSave([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float CareerRaritanium {};
		float CareerRaritaniumSpend {};
		double Playtime {};
		rivet::ddl::generated::GameStage GameStage {};
		rivet::ddl::generated::xd00d73b0 GameFlags {};
		uint8_t BoltMultiplier {};
		uint8_t BoltMultiplierKillsLeft {};
		std::string_view QuickSelectWeaponUp {};
		std::string_view QuickSelectWeaponRight {};
		std::string_view QuickSelectWeaponDown {};
		std::string_view QuickSelectWeaponLeft {};
		std::vector<std::string_view> VendorWeaponNowInStockShown {};
		std::vector<std::string_view> UITutorialsComplete {};
		std::vector<std::string_view> NewItemsViewed {};
		std::vector<std::string_view> NewMissionsViewed {};
		std::shared_ptr<rivet::ddl::generated::SaveControlRemapData> ControlRemap {};
		float CompletionPercent {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GameCampaignSave>;
	};
} // namespace rivet::ddl::generated

// clang-format on
