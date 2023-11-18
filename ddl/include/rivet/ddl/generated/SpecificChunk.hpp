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

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED SpecificChunk : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "SpecificChunk";
		constexpr static rivet::rivet_type_id type_id = 0xecc5f396;

		constexpr static std::string_view Joint_type_name = "Joint";
		constexpr static rivet::rivet_type_id Joint_type_id = 0x84a6b0c6;
		constexpr static std::string_view Chunk_type_name = "Chunk";
		constexpr static rivet::rivet_type_id Chunk_type_id = 0x8c55bdef;
		constexpr static std::string_view SpawnChance_type_name = "SpawnChance";
		constexpr static rivet::rivet_type_id SpawnChance_type_id = 0xd383f43a;
		constexpr static std::string_view OnlySpawnChunkOnAnimEvent_type_name = "OnlySpawnChunkOnAnimEvent";
		constexpr static rivet::rivet_type_id OnlySpawnChunkOnAnimEvent_type_id = 0x73906c9; 

		explicit SpecificChunk() = default;
		explicit SpecificChunk([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view Joint {};
		std::string_view Chunk {};
		float SpawnChance {};
		bool OnlySpawnChunkOnAnimEvent {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SpecificChunk>;
	};
} // namespace rivet::ddl::generated

// clang-format on
