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

	struct RIVET_DDL_SHARED SheepSpawnData : ActorSpawnData {
		constexpr static std::string_view type_name = "SheepSpawnData";
		constexpr static rivet::rivet_type_id type_id = 0xf0c86f52;

		constexpr static std::string_view AssetId_type_name = "AssetId";
		constexpr static rivet::rivet_type_id AssetId_type_id = 0xb6e788d7;
		constexpr static std::string_view ShockwaveRingAssetId_type_name = "ShockwaveRingAssetId";
		constexpr static rivet::rivet_type_id ShockwaveRingAssetId_type_id = 0xf8442c05;
		constexpr static std::string_view SheepStatusMaterialGraphAssetId_type_name = "SheepStatusMaterialGraphAssetId";
		constexpr static rivet::rivet_type_id SheepStatusMaterialGraphAssetId_type_id = 0x90d6a54a;
		constexpr static std::string_view Position_type_name = "Position";
		constexpr static rivet::rivet_type_id Position_type_id = 0xbc2d5985;
		constexpr static std::string_view Facing_type_name = "Facing";
		constexpr static rivet::rivet_type_id Facing_type_id = 0xb37847ee;
		constexpr static std::string_view Up_type_name = "Up";
		constexpr static rivet::rivet_type_id Up_type_id = 0x76fcc3ad;
		constexpr static std::string_view ZoneIndex_type_name = "ZoneIndex";
		constexpr static rivet::rivet_type_id ZoneIndex_type_id = 0xc9266b7;
		constexpr static std::string_view DamagerHandle_type_name = "DamagerHandle";
		constexpr static rivet::rivet_type_id DamagerHandle_type_id = 0x14c58735;
		constexpr static std::string_view SourceHandle_type_name = "SourceHandle";
		constexpr static rivet::rivet_type_id SourceHandle_type_id = 0x46922acc; 

		explicit SheepSpawnData() = default;
		explicit SheepSpawnData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint64_t AssetId {};
		uint64_t ShockwaveRingAssetId {};
		uint64_t SheepStatusMaterialGraphAssetId {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> Position {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> Facing {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> Up {};
		int32_t ZoneIndex {};
		uint32_t DamagerHandle {};
		uint32_t SourceHandle {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SheepSpawnData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
