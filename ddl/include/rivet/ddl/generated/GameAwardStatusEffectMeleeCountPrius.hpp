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

#include <rivet/ddl/generated/AwardBasePrius.hpp> 

namespace rivet::ddl::generated {
	struct StatusEffectBasePrius;
	struct ActorAssetReferenceDef; 

	struct RIVET_DDL_SHARED GameAwardStatusEffectMeleeCountPrius : AwardBasePrius {
		constexpr const static std::string_view type_name = "GameAwardStatusEffectMeleeCountPrius";
		constexpr const static rivet::rivet_type_id type_id = 0x6e1d0533;

		constexpr const static std::string_view RequiredStatusEffect_type_name = "RequiredStatusEffect";
		constexpr const static rivet::rivet_type_id RequiredStatusEffect_type_id = 0xedfb7a1b;
		constexpr const static std::string_view MeleeWeaponAssets_type_name = "MeleeWeaponAssets";
		constexpr const static rivet::rivet_type_id MeleeWeaponAssets_type_id = 0x4f96d2e; 

		explicit GameAwardStatusEffectMeleeCountPrius() = default;
		explicit GameAwardStatusEffectMeleeCountPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::StatusEffectBasePrius> RequiredStatusEffect {};
		std::vector<std::shared_ptr<rivet::ddl::generated::ActorAssetReferenceDef>> MeleeWeaponAssets {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GameAwardStatusEffectMeleeCountPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
