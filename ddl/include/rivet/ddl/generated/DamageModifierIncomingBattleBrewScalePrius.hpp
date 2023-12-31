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

#include <rivet/ddl/generated/DamageModifierIncomingPrius.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED DamageModifierIncomingBattleBrewScalePrius : DamageModifierIncomingPrius {
		constexpr static std::string_view type_name = "DamageModifierIncomingBattleBrewScalePrius";
		constexpr static rivet::rivet_type_id type_id = 0x487f854d;

		constexpr static std::string_view IncomingDamageMultiplier_type_name = "IncomingDamageMultiplier";
		constexpr static rivet::rivet_type_id IncomingDamageMultiplier_type_id = 0x7bd0e83a;
		constexpr static std::string_view KnockbackLevelModifier_type_name = "KnockbackLevelModifier";
		constexpr static rivet::rivet_type_id KnockbackLevelModifier_type_id = 0xeb2febd6; 

		explicit DamageModifierIncomingBattleBrewScalePrius() = default;
		explicit DamageModifierIncomingBattleBrewScalePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float IncomingDamageMultiplier {};
		uint8_t KnockbackLevelModifier {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DamageModifierIncomingBattleBrewScalePrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
