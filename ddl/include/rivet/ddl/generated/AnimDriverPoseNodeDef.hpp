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
	struct RIVET_DDL_SHARED AnimDriverPoseNodeDef : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "AnimDriverPoseNodeDef";
		constexpr static rivet::rivet_type_id type_id = 0x7722f40a;

		constexpr static std::string_view Name_type_name = "Name";
		constexpr static rivet::rivet_type_id Name_type_id = 0x6eb3beb6;
		constexpr static std::string_view DisplayName_type_name = "DisplayName";
		constexpr static rivet::rivet_type_id DisplayName_type_id = 0xeaf33243;
		constexpr static std::string_view x_type_name = "x";
		constexpr static rivet::rivet_type_id x_type_id = 0x655d6145;
		constexpr static std::string_view y_type_name = "y";
		constexpr static rivet::rivet_type_id y_type_id = 0x125a51d3;
		constexpr static std::string_view ClipName_type_name = "ClipName";
		constexpr static rivet::rivet_type_id ClipName_type_id = 0x842d53a9;
		constexpr static std::string_view PoseFrameIds_type_name = "PoseFrameIds";
		constexpr static rivet::rivet_type_id PoseFrameIds_type_id = 0xd996bda5;
		constexpr static std::string_view IsAdditive_type_name = "IsAdditive";
		constexpr static rivet::rivet_type_id IsAdditive_type_id = 0xa60f98d3; 

		explicit AnimDriverPoseNodeDef() = default;
		explicit AnimDriverPoseNodeDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view Name {};
		std::string_view DisplayName {};
		float x {};
		float y {};
		std::string_view ClipName {};
		std::vector<int32_t> PoseFrameIds {};
		bool IsAdditive {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimDriverPoseNodeDef>;
	};
} // namespace rivet::ddl::generated

// clang-format on