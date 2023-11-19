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

#include <rivet/ddl/generated/BotMovementBase.hpp> 

namespace rivet::ddl::generated {
	struct MountAbilityFlyPickup;
	struct MovementFlyOnRails;
	struct DamageModifierDamageHashPrius; 

	struct RIVET_DDL_SHARED BotMovementFly : BotMovementBase {
		constexpr static std::string_view type_name = "BotMovementFly";
		constexpr static rivet::rivet_type_id type_id = 0x229c38f8;

		constexpr static std::string_view BoostDamageMod_type_name = "BoostDamageMod";
		constexpr static rivet::rivet_type_id BoostDamageMod_type_id = 0x44934dc7;
		constexpr static std::string_view OnRailsMovement_type_name = "OnRailsMovement";
		constexpr static rivet::rivet_type_id OnRailsMovement_type_id = 0x1e0cb67b;
		constexpr static std::string_view PickupData_type_name = "PickupData";
		constexpr static rivet::rivet_type_id PickupData_type_id = 0x6758c493; 

		explicit BotMovementFly() = default;
		explicit BotMovementFly([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::DamageModifierDamageHashPrius> BoostDamageMod {};
		std::shared_ptr<rivet::ddl::generated::MovementFlyOnRails> OnRailsMovement {};
		std::shared_ptr<rivet::ddl::generated::MountAbilityFlyPickup> PickupData {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotMovementFly>;
	};
} // namespace rivet::ddl::generated

// clang-format on