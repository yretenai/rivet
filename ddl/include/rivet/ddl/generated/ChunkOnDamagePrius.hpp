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
	struct ChunkOnDamageValueData; 

	struct RIVET_DDL_SHARED ChunkOnDamagePrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "ChunkOnDamagePrius";
		constexpr static rivet::rivet_type_id type_id = 0x1770c426;

		constexpr static std::string_view UseHitPoints_type_name = "UseHitPoints";
		constexpr static rivet::rivet_type_id UseHitPoints_type_id = 0x77a137c6;
		constexpr static std::string_view LookChunkingName_type_name = "LookChunkingName";
		constexpr static rivet::rivet_type_id LookChunkingName_type_id = 0x6a284e99;
		constexpr static std::string_view ValueData_type_name = "ValueData";
		constexpr static rivet::rivet_type_id ValueData_type_id = 0x91a25047; 

		explicit ChunkOnDamagePrius() = default;
		explicit ChunkOnDamagePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool UseHitPoints {};
		std::string_view LookChunkingName {};
		std::vector<std::shared_ptr<rivet::ddl::generated::ChunkOnDamageValueData>> ValueData {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ChunkOnDamagePrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
