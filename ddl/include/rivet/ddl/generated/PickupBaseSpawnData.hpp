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

	struct RIVET_DDL_SHARED PickupBaseSpawnData : ActorSpawnData {
		constexpr static std::string_view type_name = "PickupBaseSpawnData";
		constexpr static rivet::rivet_type_id type_id = 0x5ee41946;

		constexpr static std::string_view SpawnPosition_type_name = "SpawnPosition";
		constexpr static rivet::rivet_type_id SpawnPosition_type_id = 0xd86fe14c;
		constexpr static std::string_view SpawnVelocity_type_name = "SpawnVelocity";
		constexpr static rivet::rivet_type_id SpawnVelocity_type_id = 0x209bd310;
		constexpr static std::string_view SourceActor_type_name = "SourceActor";
		constexpr static rivet::rivet_type_id SourceActor_type_id = 0x54c7dd3e;
		constexpr static std::string_view ActorAsset_type_name = "ActorAsset";
		constexpr static rivet::rivet_type_id ActorAsset_type_id = 0x75356989;
		constexpr static std::string_view LocationIndex_type_name = "LocationIndex";
		constexpr static rivet::rivet_type_id LocationIndex_type_id = 0xa3ea6fcb; 

		explicit PickupBaseSpawnData() = default;
		explicit PickupBaseSpawnData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::DDLVector3> SpawnPosition {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> SpawnVelocity {};
		uint32_t SourceActor {};
		uint32_t ActorAsset {};
		int8_t LocationIndex {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PickupBaseSpawnData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
