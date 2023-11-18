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

	struct RIVET_DDL_SHARED HarpoonLureSpawnData : ActorSpawnData {
		constexpr static std::string_view type_name = "HarpoonLureSpawnData";
		constexpr static rivet::rivet_type_id type_id = 0xb41d5065;

		constexpr static std::string_view ShotOwner_type_name = "ShotOwner";
		constexpr static rivet::rivet_type_id ShotOwner_type_id = 0x8b1a8202;
		constexpr static std::string_view AssetId_type_name = "AssetId";
		constexpr static rivet::rivet_type_id AssetId_type_id = 0xb6e788d7;
		constexpr static std::string_view Position_type_name = "Position";
		constexpr static rivet::rivet_type_id Position_type_id = 0xbc2d5985;
		constexpr static std::string_view Lifetime_type_name = "Lifetime";
		constexpr static rivet::rivet_type_id Lifetime_type_id = 0xc7e68df8;
		constexpr static std::string_view Range_type_name = "Range";
		constexpr static rivet::rivet_type_id Range_type_id = 0x8ad49688; 

		explicit HarpoonLureSpawnData() = default;
		explicit HarpoonLureSpawnData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint32_t ShotOwner {};
		uint32_t AssetId {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> Position {};
		float Lifetime {};
		float Range {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HarpoonLureSpawnData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
