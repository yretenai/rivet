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

#include <rivet/ddl/generated/BotPrius.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED GameBotMountFlyerPrius : BotPrius {
		constexpr static std::string_view type_name = "GameBotMountFlyerPrius";
		constexpr static rivet::rivet_type_id type_id = 0x71da7cbc;

		constexpr static std::string_view GunWeapon_type_name = "GunWeapon";
		constexpr static rivet::rivet_type_id GunWeapon_type_id = 0xbc92ccf0;
		constexpr static std::string_view BreathWeapon_type_name = "BreathWeapon";
		constexpr static rivet::rivet_type_id BreathWeapon_type_id = 0xe9b42302;
		constexpr static std::string_view MountData_type_name = "MountData";
		constexpr static rivet::rivet_type_id MountData_type_id = 0x6c6a0bae; 

		explicit GameBotMountFlyerPrius() = default;
		explicit GameBotMountFlyerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view GunWeapon {};
		std::string_view BreathWeapon {};
		std::string_view MountData {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GameBotMountFlyerPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
