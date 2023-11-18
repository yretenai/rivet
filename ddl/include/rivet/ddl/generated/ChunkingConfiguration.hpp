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

#include <rivet/ddl/generated/enums/x68a523f1.hpp> 

namespace rivet::ddl::generated {
	struct ChunkingMaterialData;
	struct CustomChunkActor;
	struct CustomChunk; 

	struct RIVET_DDL_SHARED ChunkingConfiguration : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "ChunkingConfiguration";
		constexpr static rivet::rivet_type_id type_id = 0xb78f4eb5;

		constexpr static std::string_view Name_type_name = "Name";
		constexpr static rivet::rivet_type_id Name_type_id = 0x6eb3beb6;
		constexpr static std::string_view Weight_type_name = "Weight";
		constexpr static rivet::rivet_type_id Weight_type_id = 0x39b51b26;
		constexpr static std::string_view ChunkLookGroup_type_name = "ChunkLookGroup";
		constexpr static rivet::rivet_type_id ChunkLookGroup_type_id = 0xf46082b2;
		constexpr static std::string_view CustomChunks_type_name = "CustomChunks";
		constexpr static rivet::rivet_type_id CustomChunks_type_id = 0x4a5aedf6;
		constexpr static std::string_view ChunkActors_type_name = "ChunkActors";
		constexpr static rivet::rivet_type_id ChunkActors_type_id = 0x72fc2cf6;
		constexpr static std::string_view StumpType_type_name = "StumpType";
		constexpr static rivet::rivet_type_id StumpType_type_id = 0x7b80cf14;
		constexpr static std::string_view StumpLookGroup_type_name = "StumpLookGroup";
		constexpr static rivet::rivet_type_id StumpLookGroup_type_id = 0xfac3bde1;
		constexpr static std::string_view MaterialData_type_name = "MaterialData";
		constexpr static rivet::rivet_type_id MaterialData_type_id = 0x351e61d1; 

		explicit ChunkingConfiguration() = default;
		explicit ChunkingConfiguration([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view Name {};
		float Weight {};
		std::string_view ChunkLookGroup {};
		std::vector<std::shared_ptr<rivet::ddl::generated::CustomChunk>> CustomChunks {};
		std::vector<std::shared_ptr<rivet::ddl::generated::CustomChunkActor>> ChunkActors {};
		rivet::ddl::generated::x68a523f1 StumpType {};
		std::string_view StumpLookGroup {};
		std::shared_ptr<rivet::ddl::generated::ChunkingMaterialData> MaterialData {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ChunkingConfiguration>;
	};
} // namespace rivet::ddl::generated

// clang-format on
