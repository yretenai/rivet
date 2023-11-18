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
	struct RIVET_DDL_SHARED CrowdSpawnerSettings : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "CrowdSpawnerSettings";
		constexpr static rivet::rivet_type_id type_id = 0x786e1ab5;

		constexpr static std::string_view InitialMaxSpawners_type_name = "InitialMaxSpawners";
		constexpr static rivet::rivet_type_id InitialMaxSpawners_type_id = 0xc80b5da4;
		constexpr static std::string_view MaxModels_type_name = "MaxModels";
		constexpr static rivet::rivet_type_id MaxModels_type_id = 0x58a647a4;
		constexpr static std::string_view ModelSwitchesPerFrame_type_name = "ModelSwitchesPerFrame";
		constexpr static rivet::rivet_type_id ModelSwitchesPerFrame_type_id = 0x3006ed07;
		constexpr static std::string_view MaxDisallowVolumes_type_name = "MaxDisallowVolumes";
		constexpr static rivet::rivet_type_id MaxDisallowVolumes_type_id = 0xc193f390; 

		explicit CrowdSpawnerSettings() = default;
		explicit CrowdSpawnerSettings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		int32_t InitialMaxSpawners {};
		int32_t MaxModels {};
		int32_t ModelSwitchesPerFrame {};
		int32_t MaxDisallowVolumes {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CrowdSpawnerSettings>;
	};
} // namespace rivet::ddl::generated

// clang-format on
