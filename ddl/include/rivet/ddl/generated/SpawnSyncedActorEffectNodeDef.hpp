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

#include <rivet/ddl/generated/NodalShotEffectNodeBaseDef.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED SpawnSyncedActorEffectNodeDef : NodalShotEffectNodeBaseDef {
		constexpr static std::string_view type_name = "SpawnSyncedActorEffectNodeDef";
		constexpr static rivet::rivet_type_id type_id = 0x2a2439ad;

		constexpr static std::string_view ActorAsset_type_name = "ActorAsset";
		constexpr static rivet::rivet_type_id ActorAsset_type_id = 0x75356989;
		constexpr static std::string_view NumToSpawn_type_name = "NumToSpawn";
		constexpr static rivet::rivet_type_id NumToSpawn_type_id = 0xbf9d56a9; 

		explicit SpawnSyncedActorEffectNodeDef() = default;
		explicit SpawnSyncedActorEffectNodeDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view ActorAsset {};
		int32_t NumToSpawn {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SpawnSyncedActorEffectNodeDef>;
	};
} // namespace rivet::ddl::generated

// clang-format on
