// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GameAwardWeaponLevelUpPrius.hpp>
#include <rivet/ddl/generated/GameAwardPurchaseWeaponPrius.hpp>
#include <rivet/ddl/generated/GameAwardActorKillCountPrius.hpp>
#include <rivet/ddl/generated/GameAwardLightningRodChainCountPrius.hpp>
#include <rivet/ddl/generated/GameAwardStatusEffectMeleeCountPrius.hpp>
#include <rivet/ddl/generated/GameAwardRicochetKillCountPrius.hpp>
#include <rivet/ddl/generated/AwardPrizeBasePrius.hpp>
#include <rivet/ddl/generated/GameAwardMagShieldKillCountPrius.hpp>
#include <rivet/ddl/generated/GameAwardVanityBundleStatusPrius.hpp>
#include <rivet/ddl/generated/AwardCompleteObjectivesPrius.hpp>
#include <rivet/ddl/generated/GameAwardStatusEffectKillCountPrius.hpp>
#include <rivet/ddl/generated/AwardPickupsPrius.hpp>
#include <rivet/ddl/generated/GameAwardWeaponFullUpgradePrius.hpp>
#include <rivet/ddl/generated/GameAwardDetachingBotKillCountPrius.hpp>
#include <rivet/ddl/generated/GameAwardHoverbootDoubleJumpPrius.hpp>
#include <rivet/ddl/generated/GameAwardFossilizerHeadshotPrius.hpp>
#include <rivet/ddl/generated/AwardPlatinumPrius.hpp>
#include <rivet/ddl/generated/AwardGlobalSaveKeyPrius.hpp>
#include <rivet/ddl/generated/GameAwardMrFunGuyAppearPrius.hpp>
#include <rivet/ddl/generated/GameAwardGrindrailDoubleJumpPrius.hpp> 

#include <rivet/ddl/generated/AwardBasePrius.hpp>

namespace rivet::ddl::generated {
	AwardBasePrius::AwardBasePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		CodeName = serialized->get_string(CodeName_type_id);
		NameLocTag = serialized->get_string(NameLocTag_type_id);
		DescLocTag = serialized->get_string(DescLocTag_type_id);
		ImagePath = serialized->get_string(ImagePath_type_id);
		Level = serialized->get_enum<rivet::ddl::generated::xfb81cf7c>(Level_type_id, rivet::ddl::generated::xfb81cf7c_values);
		Hidden = serialized->get_bool(Hidden_type_id);
		Progressive = serialized->get_bool(Progressive_type_id);
		TargetValue = serialized->get_uint32(TargetValue_type_id);
		Prize = serialized->unwrap_into<rivet::ddl::generated::AwardPrizeBasePrius>(Prize_type_id); 
	}

	[[nodiscard]] auto
	AwardBasePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AwardBasePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AwardBasePrius> {
		if (incoming_type_id == AwardBasePrius::type_id) {
			return std::make_shared<AwardBasePrius>(serialized);
		}

		auto GameAwardMagShieldKillCountPrius_ptr = GameAwardMagShieldKillCountPrius::from_substruct(incoming_type_id, serialized);
		if (GameAwardMagShieldKillCountPrius_ptr != nullptr) {
			return GameAwardMagShieldKillCountPrius_ptr;
		}

		auto AwardCompleteObjectivesPrius_ptr = AwardCompleteObjectivesPrius::from_substruct(incoming_type_id, serialized);
		if (AwardCompleteObjectivesPrius_ptr != nullptr) {
			return AwardCompleteObjectivesPrius_ptr;
		}

		auto GameAwardDetachingBotKillCountPrius_ptr = GameAwardDetachingBotKillCountPrius::from_substruct(incoming_type_id, serialized);
		if (GameAwardDetachingBotKillCountPrius_ptr != nullptr) {
			return GameAwardDetachingBotKillCountPrius_ptr;
		}

		auto GameAwardFossilizerHeadshotPrius_ptr = GameAwardFossilizerHeadshotPrius::from_substruct(incoming_type_id, serialized);
		if (GameAwardFossilizerHeadshotPrius_ptr != nullptr) {
			return GameAwardFossilizerHeadshotPrius_ptr;
		}

		auto GameAwardStatusEffectKillCountPrius_ptr = GameAwardStatusEffectKillCountPrius::from_substruct(incoming_type_id, serialized);
		if (GameAwardStatusEffectKillCountPrius_ptr != nullptr) {
			return GameAwardStatusEffectKillCountPrius_ptr;
		}

		auto GameAwardVanityBundleStatusPrius_ptr = GameAwardVanityBundleStatusPrius::from_substruct(incoming_type_id, serialized);
		if (GameAwardVanityBundleStatusPrius_ptr != nullptr) {
			return GameAwardVanityBundleStatusPrius_ptr;
		}

		auto AwardGlobalSaveKeyPrius_ptr = AwardGlobalSaveKeyPrius::from_substruct(incoming_type_id, serialized);
		if (AwardGlobalSaveKeyPrius_ptr != nullptr) {
			return AwardGlobalSaveKeyPrius_ptr;
		}

		auto GameAwardHoverbootDoubleJumpPrius_ptr = GameAwardHoverbootDoubleJumpPrius::from_substruct(incoming_type_id, serialized);
		if (GameAwardHoverbootDoubleJumpPrius_ptr != nullptr) {
			return GameAwardHoverbootDoubleJumpPrius_ptr;
		}

		auto GameAwardMrFunGuyAppearPrius_ptr = GameAwardMrFunGuyAppearPrius::from_substruct(incoming_type_id, serialized);
		if (GameAwardMrFunGuyAppearPrius_ptr != nullptr) {
			return GameAwardMrFunGuyAppearPrius_ptr;
		}

		auto GameAwardGrindrailDoubleJumpPrius_ptr = GameAwardGrindrailDoubleJumpPrius::from_substruct(incoming_type_id, serialized);
		if (GameAwardGrindrailDoubleJumpPrius_ptr != nullptr) {
			return GameAwardGrindrailDoubleJumpPrius_ptr;
		}

		auto AwardPlatinumPrius_ptr = AwardPlatinumPrius::from_substruct(incoming_type_id, serialized);
		if (AwardPlatinumPrius_ptr != nullptr) {
			return AwardPlatinumPrius_ptr;
		}

		auto AwardPickupsPrius_ptr = AwardPickupsPrius::from_substruct(incoming_type_id, serialized);
		if (AwardPickupsPrius_ptr != nullptr) {
			return AwardPickupsPrius_ptr;
		}

		auto GameAwardRicochetKillCountPrius_ptr = GameAwardRicochetKillCountPrius::from_substruct(incoming_type_id, serialized);
		if (GameAwardRicochetKillCountPrius_ptr != nullptr) {
			return GameAwardRicochetKillCountPrius_ptr;
		}

		auto GameAwardLightningRodChainCountPrius_ptr = GameAwardLightningRodChainCountPrius::from_substruct(incoming_type_id, serialized);
		if (GameAwardLightningRodChainCountPrius_ptr != nullptr) {
			return GameAwardLightningRodChainCountPrius_ptr;
		}

		auto GameAwardStatusEffectMeleeCountPrius_ptr = GameAwardStatusEffectMeleeCountPrius::from_substruct(incoming_type_id, serialized);
		if (GameAwardStatusEffectMeleeCountPrius_ptr != nullptr) {
			return GameAwardStatusEffectMeleeCountPrius_ptr;
		}

		auto GameAwardWeaponFullUpgradePrius_ptr = GameAwardWeaponFullUpgradePrius::from_substruct(incoming_type_id, serialized);
		if (GameAwardWeaponFullUpgradePrius_ptr != nullptr) {
			return GameAwardWeaponFullUpgradePrius_ptr;
		}

		auto GameAwardPurchaseWeaponPrius_ptr = GameAwardPurchaseWeaponPrius::from_substruct(incoming_type_id, serialized);
		if (GameAwardPurchaseWeaponPrius_ptr != nullptr) {
			return GameAwardPurchaseWeaponPrius_ptr;
		}

		auto GameAwardActorKillCountPrius_ptr = GameAwardActorKillCountPrius::from_substruct(incoming_type_id, serialized);
		if (GameAwardActorKillCountPrius_ptr != nullptr) {
			return GameAwardActorKillCountPrius_ptr;
		}

		auto GameAwardWeaponLevelUpPrius_ptr = GameAwardWeaponLevelUpPrius::from_substruct(incoming_type_id, serialized);
		if (GameAwardWeaponLevelUpPrius_ptr != nullptr) {
			return GameAwardWeaponLevelUpPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
