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

#include <rivet/ddl/generated/DamageModifierOutgoingPrius.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED DamageModifierOutgoingBattleBrewScalePrius : DamageModifierOutgoingPrius {
		constexpr static std::string_view type_name = "DamageModifierOutgoingBattleBrewScalePrius";
		constexpr static rivet::rivet_type_id type_id = 0xe500a4f9;

		constexpr static std::string_view OutgoingDamageMultiplier_type_name = "OutgoingDamageMultiplier";
		constexpr static rivet::rivet_type_id OutgoingDamageMultiplier_type_id = 0x9fd14dc6;
		constexpr static std::string_view KnockbackLevelModifier_type_name = "KnockbackLevelModifier";
		constexpr static rivet::rivet_type_id KnockbackLevelModifier_type_id = 0xeb2febd6; 

		explicit DamageModifierOutgoingBattleBrewScalePrius() = default;
		explicit DamageModifierOutgoingBattleBrewScalePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float OutgoingDamageMultiplier {};
		uint8_t KnockbackLevelModifier {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DamageModifierOutgoingBattleBrewScalePrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on