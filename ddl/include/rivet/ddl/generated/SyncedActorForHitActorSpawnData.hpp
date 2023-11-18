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

#include <rivet/ddl/generated/ActorSpawnData.hpp> 

namespace rivet::ddl::generated {
	struct DDLVector3; 

	struct RIVET_DDL_SHARED SyncedActorForHitActorSpawnData : ActorSpawnData {
		constexpr static std::string_view type_name = "SyncedActorForHitActorSpawnData";
		constexpr static rivet::rivet_type_id type_id = 0xc0fcc304;

		constexpr static std::string_view ShotOwner_type_name = "ShotOwner";
		constexpr static rivet::rivet_type_id ShotOwner_type_id = 0x8b1a8202;
		constexpr static std::string_view HitActor_type_name = "HitActor";
		constexpr static rivet::rivet_type_id HitActor_type_id = 0x51261116;
		constexpr static std::string_view AssetId_type_name = "AssetId";
		constexpr static rivet::rivet_type_id AssetId_type_id = 0xb6e788d7;
		constexpr static std::string_view Pos_type_name = "Pos";
		constexpr static rivet::rivet_type_id Pos_type_id = 0xaa8ccf65;
		constexpr static std::string_view Facing_type_name = "Facing";
		constexpr static rivet::rivet_type_id Facing_type_id = 0xb37847ee;
		constexpr static std::string_view Up_type_name = "Up";
		constexpr static rivet::rivet_type_id Up_type_id = 0x76fcc3ad;
		constexpr static std::string_view MatchCreatorZone_type_name = "MatchCreatorZone";
		constexpr static rivet::rivet_type_id MatchCreatorZone_type_id = 0xfc7075c0;
		constexpr static std::string_view MatchCreatorAllegiance_type_name = "MatchCreatorAllegiance";
		constexpr static rivet::rivet_type_id MatchCreatorAllegiance_type_id = 0x60d5eba5; 

		explicit SyncedActorForHitActorSpawnData() = default;
		explicit SyncedActorForHitActorSpawnData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint32_t ShotOwner {};
		uint32_t HitActor {};
		uint64_t AssetId {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> Pos {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> Facing {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> Up {};
		bool MatchCreatorZone {};
		bool MatchCreatorAllegiance {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SyncedActorForHitActorSpawnData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
