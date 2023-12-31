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

#include <rivet/ddl/generated/enums/xc3e5efea.hpp>
#include <rivet/ddl/generated/enums/x2512d89d.hpp>
#include <rivet/ddl/generated/BotPrius.hpp> 

namespace rivet::ddl::generated {
	struct CelebrateDifficultyData; 

	struct RIVET_DDL_SHARED GameBotSargassoCentipedeBossPrius : BotPrius {
		constexpr static std::string_view type_name = "GameBotSargassoCentipedeBossPrius";
		constexpr static rivet::rivet_type_id type_id = 0xe6887e26;

		constexpr static std::string_view IntroAnimName_type_name = "IntroAnimName";
		constexpr static rivet::rivet_type_id IntroAnimName_type_id = 0xe827e797;
		constexpr static std::string_view FlyoverOutroAnimName_type_name = "FlyoverOutroAnimName";
		constexpr static rivet::rivet_type_id FlyoverOutroAnimName_type_id = 0xcc550a62;
		constexpr static std::string_view FlyOverMinHealthPercentThreshold_type_name = "FlyOverMinHealthPercentThreshold";
		constexpr static rivet::rivet_type_id FlyOverMinHealthPercentThreshold_type_id = 0x677935c8;
		constexpr static std::string_view DeathType_type_name = "DeathType";
		constexpr static rivet::rivet_type_id DeathType_type_id = 0xe4e8e6d4;
		constexpr static std::string_view RetreatAnim_type_name = "RetreatAnim";
		constexpr static rivet::rivet_type_id RetreatAnim_type_id = 0xc4482dce;
		constexpr static std::string_view DeathAnim_type_name = "DeathAnim";
		constexpr static rivet::rivet_type_id DeathAnim_type_id = 0xf9dd5a6;
		constexpr static std::string_view PilotActor_type_name = "PilotActor";
		constexpr static rivet::rivet_type_id PilotActor_type_id = 0x17aacce7;
		constexpr static std::string_view PilotScale_type_name = "PilotScale";
		constexpr static rivet::rivet_type_id PilotScale_type_id = 0xbf99bf9a;
		constexpr static std::string_view LocatorToAttachPilot_type_name = "LocatorToAttachPilot";
		constexpr static rivet::rivet_type_id LocatorToAttachPilot_type_id = 0xd1ba870;
		constexpr static std::string_view DamageReactionThresholds_type_name = "DamageReactionThresholds";
		constexpr static rivet::rivet_type_id DamageReactionThresholds_type_id = 0xf746e5f2;
		constexpr static std::string_view DamageReactionAnim_type_name = "DamageReactionAnim";
		constexpr static rivet::rivet_type_id DamageReactionAnim_type_id = 0x4b34244a;
		constexpr static std::string_view CelebrateAnim_type_name = "CelebrateAnim";
		constexpr static rivet::rivet_type_id CelebrateAnim_type_id = 0xc8581959;
		constexpr static std::string_view DefaultCelebrateCooldown_type_name = "DefaultCelebrateCooldown";
		constexpr static rivet::rivet_type_id DefaultCelebrateCooldown_type_id = 0xc17a637c;
		constexpr static std::string_view DifficultyCelebrateCooldowns_type_name = "DifficultyCelebrateCooldowns";
		constexpr static rivet::rivet_type_id DifficultyCelebrateCooldowns_type_id = 0xcc2476f2;
		constexpr static std::string_view DamageStateBotVariantExlusionList_type_name = "DamageStateBotVariantExlusionList";
		constexpr static rivet::rivet_type_id DamageStateBotVariantExlusionList_type_id = 0x13cd409c; 

		explicit GameBotSargassoCentipedeBossPrius() = default;
		explicit GameBotSargassoCentipedeBossPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view IntroAnimName {};
		std::string_view FlyoverOutroAnimName {};
		float FlyOverMinHealthPercentThreshold {};
		rivet::ddl::generated::x2512d89d DeathType {};
		std::string_view RetreatAnim {};
		std::string_view DeathAnim {};
		std::string_view PilotActor {};
		float PilotScale {};
		std::string_view LocatorToAttachPilot {};
		std::vector<float> DamageReactionThresholds {};
		std::string_view DamageReactionAnim {};
		std::string_view CelebrateAnim {};
		float DefaultCelebrateCooldown {};
		std::vector<std::shared_ptr<rivet::ddl::generated::CelebrateDifficultyData>> DifficultyCelebrateCooldowns {};
		std::vector<rivet::ddl::generated::xc3e5efea> DamageStateBotVariantExlusionList {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GameBotSargassoCentipedeBossPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
