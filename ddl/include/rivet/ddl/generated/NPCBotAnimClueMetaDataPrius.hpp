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
	struct RIVET_DDL_SHARED NPCBotAnimClueMetaDataPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "NPCBotAnimClueMetaDataPrius";
		constexpr static rivet::rivet_type_id type_id = 0xd5aa3bb8;

		constexpr static std::string_view PrimaryClue_type_name = "PrimaryClue";
		constexpr static rivet::rivet_type_id PrimaryClue_type_id = 0x69fed122;
		constexpr static std::string_view AnimClues_type_name = "AnimClues";
		constexpr static rivet::rivet_type_id AnimClues_type_id = 0xadd6c683; 

		explicit NPCBotAnimClueMetaDataPrius() = default;
		explicit NPCBotAnimClueMetaDataPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint64_t PrimaryClue {};
		std::vector<uint64_t> AnimClues {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<NPCBotAnimClueMetaDataPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on