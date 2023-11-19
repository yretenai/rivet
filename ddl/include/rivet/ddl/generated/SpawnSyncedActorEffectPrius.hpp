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

#include <rivet/ddl/generated/ScriptedShotEffectBasePrius.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED SpawnSyncedActorEffectPrius : ScriptedShotEffectBasePrius {
		constexpr static std::string_view type_name = "SpawnSyncedActorEffectPrius";
		constexpr static rivet::rivet_type_id type_id = 0x91e958ec;

		constexpr static std::string_view ActorAsset_type_name = "ActorAsset";
		constexpr static rivet::rivet_type_id ActorAsset_type_id = 0x75356989;
		constexpr static std::string_view LifeTime_type_name = "LifeTime";
		constexpr static rivet::rivet_type_id LifeTime_type_id = 0x67d422c6;
		constexpr static std::string_view AttachToHitActor_type_name = "AttachToHitActor";
		constexpr static rivet::rivet_type_id AttachToHitActor_type_id = 0x27919c52;
		constexpr static std::string_view MatchCreatorAllegiance_type_name = "MatchCreatorAllegiance";
		constexpr static rivet::rivet_type_id MatchCreatorAllegiance_type_id = 0x60d5eba5;
		constexpr static std::string_view MatchCreatorZone_type_name = "MatchCreatorZone";
		constexpr static rivet::rivet_type_id MatchCreatorZone_type_id = 0xfc7075c0; 

		explicit SpawnSyncedActorEffectPrius() = default;
		explicit SpawnSyncedActorEffectPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view ActorAsset {};
		float LifeTime {};
		bool AttachToHitActor {};
		bool MatchCreatorAllegiance {};
		bool MatchCreatorZone {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SpawnSyncedActorEffectPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on