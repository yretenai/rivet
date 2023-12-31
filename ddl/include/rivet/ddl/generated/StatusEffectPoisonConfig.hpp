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

#include <rivet/ddl/generated/StatusEffectConfig.hpp> 

namespace rivet::ddl::generated {
	struct DamageModifierExplosionPrius; 

	struct RIVET_DDL_SHARED StatusEffectPoisonConfig : StatusEffectConfig {
		constexpr static std::string_view type_name = "StatusEffectPoisonConfig";
		constexpr static rivet::rivet_type_id type_id = 0x4a8c9c12;

		constexpr static std::string_view DamagePerSecond_type_name = "DamagePerSecond";
		constexpr static rivet::rivet_type_id DamagePerSecond_type_id = 0x287ed02a;
		constexpr static std::string_view Duration_type_name = "Duration";
		constexpr static rivet::rivet_type_id Duration_type_id = 0x7c5e3db0;
		constexpr static std::string_view ExplosionData_type_name = "ExplosionData";
		constexpr static rivet::rivet_type_id ExplosionData_type_id = 0x7860aa8f;
		constexpr static std::string_view VictimMaterialGraph_type_name = "VictimMaterialGraph";
		constexpr static rivet::rivet_type_id VictimMaterialGraph_type_id = 0xee2f28cb; 

		explicit StatusEffectPoisonConfig() = default;
		explicit StatusEffectPoisonConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float DamagePerSecond {};
		float Duration {};
		std::shared_ptr<rivet::ddl::generated::DamageModifierExplosionPrius> ExplosionData {};
		std::string_view VictimMaterialGraph {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StatusEffectPoisonConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
