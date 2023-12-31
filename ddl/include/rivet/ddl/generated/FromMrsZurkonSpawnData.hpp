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

	struct RIVET_DDL_SHARED FromMrsZurkonSpawnData : ActorSpawnData {
		constexpr static std::string_view type_name = "FromMrsZurkonSpawnData";
		constexpr static rivet::rivet_type_id type_id = 0xa1c093ea;

		constexpr static std::string_view Parent_type_name = "Parent";
		constexpr static rivet::rivet_type_id Parent_type_id = 0x3f62e28;
		constexpr static std::string_view AssetId_type_name = "AssetId";
		constexpr static rivet::rivet_type_id AssetId_type_id = 0xb6e788d7;
		constexpr static std::string_view Pos_type_name = "Pos";
		constexpr static rivet::rivet_type_id Pos_type_id = 0xaa8ccf65;
		constexpr static std::string_view Facing_type_name = "Facing";
		constexpr static rivet::rivet_type_id Facing_type_id = 0xb37847ee;
		constexpr static std::string_view WantsIntro_type_name = "WantsIntro";
		constexpr static rivet::rivet_type_id WantsIntro_type_id = 0x2a2719ae; 

		explicit FromMrsZurkonSpawnData() = default;
		explicit FromMrsZurkonSpawnData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint32_t Parent {};
		uint64_t AssetId {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> Pos {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> Facing {};
		uint8_t WantsIntro {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FromMrsZurkonSpawnData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
