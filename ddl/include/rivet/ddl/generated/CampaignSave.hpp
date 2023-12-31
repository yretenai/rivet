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

#include <rivet/ddl/generated/enums/LightingMode.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED CampaignSave : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "CampaignSave";
		constexpr static rivet::rivet_type_id type_id = 0x47fb50db;

		constexpr static std::string_view CurrentLevel_type_name = "CurrentLevel";
		constexpr static rivet::rivet_type_id CurrentLevel_type_id = 0xa33c2ea;
		constexpr static std::string_view CurrentCheckpoint_type_name = "CurrentCheckpoint";
		constexpr static rivet::rivet_type_id CurrentCheckpoint_type_id = 0x9fc0c119;
		constexpr static std::string_view CurrentCheckpointId_type_name = "CurrentCheckpointId";
		constexpr static rivet::rivet_type_id CurrentCheckpointId_type_id = 0x1c0795f3;
		constexpr static std::string_view CurrentLightingMode_type_name = "CurrentLightingMode";
		constexpr static rivet::rivet_type_id CurrentLightingMode_type_id = 0xffd52ac4;
		constexpr static std::string_view CurrentLightingModeValid_type_name = "CurrentLightingModeValid";
		constexpr static rivet::rivet_type_id CurrentLightingModeValid_type_id = 0x4098e60e;
		constexpr static std::string_view PlaythroughSegmentId_type_name = "PlaythroughSegmentId";
		constexpr static rivet::rivet_type_id PlaythroughSegmentId_type_id = 0x591f4379; 

		explicit CampaignSave() = default;
		explicit CampaignSave([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		int32_t CurrentLevel {};
		uint32_t CurrentCheckpoint {};
		uint64_t CurrentCheckpointId {};
		rivet::ddl::generated::LightingMode CurrentLightingMode {};
		bool CurrentLightingModeValid {};
		uint32_t PlaythroughSegmentId {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CampaignSave>;
	};
} // namespace rivet::ddl::generated

// clang-format on
