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
	struct RIVET_DDL_SHARED AnimInfoEngineItem : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "AnimInfoEngineItem";
		constexpr static rivet::rivet_type_id type_id = 0x6dcf85db;

		constexpr static std::string_view AnimationDuration_type_name = "AnimationDuration";
		constexpr static rivet::rivet_type_id AnimationDuration_type_id = 0x13d5b73d;
		constexpr static std::string_view AnimationTime_type_name = "AnimationTime";
		constexpr static rivet::rivet_type_id AnimationTime_type_id = 0x61e5a0d8;
		constexpr static std::string_view AnimLayers_type_name = "AnimLayers";
		constexpr static rivet::rivet_type_id AnimLayers_type_id = 0xe71bdc47;
		constexpr static std::string_view AnimPlaying_type_name = "AnimPlaying";
		constexpr static rivet::rivet_type_id AnimPlaying_type_id = 0x8229ca99; 

		explicit AnimInfoEngineItem() = default;
		explicit AnimInfoEngineItem([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float AnimationDuration {};
		float AnimationTime {};
		std::vector<std::string_view> AnimLayers {};
		bool AnimPlaying {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimInfoEngineItem>;
	};
} // namespace rivet::ddl::generated

// clang-format on