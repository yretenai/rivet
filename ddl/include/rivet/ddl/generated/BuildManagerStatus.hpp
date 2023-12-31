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
	struct RIVET_DDL_SHARED BuildManagerStatus : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "BuildManagerStatus";
		constexpr static rivet::rivet_type_id type_id = 0xa093cfdb;

		constexpr static std::string_view PausedByUser_type_name = "PausedByUser";
		constexpr static rivet::rivet_type_id PausedByUser_type_id = 0x8940ceb4;
		constexpr static std::string_view PausedUpdatingBuilders_type_name = "PausedUpdatingBuilders";
		constexpr static rivet::rivet_type_id PausedUpdatingBuilders_type_id = 0x29ef6f9f;
		constexpr static std::string_view BackgroundBuildPausedForTracker_type_name = "BackgroundBuildPausedForTracker";
		constexpr static rivet::rivet_type_id BackgroundBuildPausedForTracker_type_id = 0xb665f602;
		constexpr static std::string_view BackgroundPlatforms_type_name = "BackgroundPlatforms";
		constexpr static rivet::rivet_type_id BackgroundPlatforms_type_id = 0xf7b2b3b0; 

		explicit BuildManagerStatus() = default;
		explicit BuildManagerStatus([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool PausedByUser {};
		bool PausedUpdatingBuilders {};
		bool BackgroundBuildPausedForTracker {};
		std::vector<std::string_view> BackgroundPlatforms {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BuildManagerStatus>;
	};
} // namespace rivet::ddl::generated

// clang-format on
