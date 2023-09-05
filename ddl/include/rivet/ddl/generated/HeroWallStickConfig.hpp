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
	struct RIVET_DDL_SHARED HeroWallStickConfig : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "HeroWallStickConfig";
		constexpr const static rivet::rivet_type_id type_id = 0xcd1ef6f2;

		constexpr const static std::string_view WallStickGravity_type_name = "WallStickGravity";
		constexpr const static rivet::rivet_type_id WallStickGravity_type_id = 0x8ec75cad;
		constexpr const static std::string_view WallStickTerminalVelocity_type_name = "WallStickTerminalVelocity";
		constexpr const static rivet::rivet_type_id WallStickTerminalVelocity_type_id = 0x8308091d;
		constexpr const static std::string_view WallStickNoSlideTime_type_name = "WallStickNoSlideTime";
		constexpr const static rivet::rivet_type_id WallStickNoSlideTime_type_id = 0x589998b7;
		constexpr const static std::string_view WallStickMinGroundHeight_type_name = "WallStickMinGroundHeight";
		constexpr const static rivet::rivet_type_id WallStickMinGroundHeight_type_id = 0x7c69d5c9;
		constexpr const static std::string_view WallStickFacingIntoWallThreshold_type_name = "WallStickFacingIntoWallThreshold";
		constexpr const static rivet::rivet_type_id WallStickFacingIntoWallThreshold_type_id = 0x26d4c680;
		constexpr const static std::string_view WallJumpCameraAccel_type_name = "WallJumpCameraAccel";
		constexpr const static rivet::rivet_type_id WallJumpCameraAccel_type_id = 0x7c7c8fe;
		constexpr const static std::string_view WallJumpCameraDecel_type_name = "WallJumpCameraDecel";
		constexpr const static rivet::rivet_type_id WallJumpCameraDecel_type_id = 0xea4c1852;
		constexpr const static std::string_view WallJumpCameraMaxSpeedYaw_type_name = "WallJumpCameraMaxSpeedYaw";
		constexpr const static rivet::rivet_type_id WallJumpCameraMaxSpeedYaw_type_id = 0xb7cb8499;
		constexpr const static std::string_view WallJumpCameraMaxSpeedPitch_type_name = "WallJumpCameraMaxSpeedPitch";
		constexpr const static rivet::rivet_type_id WallJumpCameraMaxSpeedPitch_type_id = 0x8d0de468;
		constexpr const static std::string_view WallJumpUpMinHeightGain_type_name = "WallJumpUpMinHeightGain";
		constexpr const static rivet::rivet_type_id WallJumpUpMinHeightGain_type_id = 0xd850e548; 

		explicit HeroWallStickConfig() = default;
		explicit HeroWallStickConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float WallStickGravity {};
		float WallStickTerminalVelocity {};
		float WallStickNoSlideTime {};
		float WallStickMinGroundHeight {};
		float WallStickFacingIntoWallThreshold {};
		float WallJumpCameraAccel {};
		float WallJumpCameraDecel {};
		float WallJumpCameraMaxSpeedYaw {};
		float WallJumpCameraMaxSpeedPitch {};
		float WallJumpUpMinHeightGain {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroWallStickConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
