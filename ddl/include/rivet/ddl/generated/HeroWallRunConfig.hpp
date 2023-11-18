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
	struct RIVET_DDL_SHARED HeroWallRunConfig : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "HeroWallRunConfig";
		constexpr static rivet::rivet_type_id type_id = 0x75d47782;

		constexpr static std::string_view WallRunEntrySpeed_type_name = "WallRunEntrySpeed";
		constexpr static rivet::rivet_type_id WallRunEntrySpeed_type_id = 0xbe8ef3ea;
		constexpr static std::string_view WallRunMaxInputAngle_type_name = "WallRunMaxInputAngle";
		constexpr static rivet::rivet_type_id WallRunMaxInputAngle_type_id = 0xe4645f68;
		constexpr static std::string_view WallRunSpeed_type_name = "WallRunSpeed";
		constexpr static rivet::rivet_type_id WallRunSpeed_type_id = 0x9b370ad0;
		constexpr static std::string_view WallRunDecel_type_name = "WallRunDecel";
		constexpr static rivet::rivet_type_id WallRunDecel_type_id = 0x2466126f;
		constexpr static std::string_view WallRunCenteringSpeed_type_name = "WallRunCenteringSpeed";
		constexpr static rivet::rivet_type_id WallRunCenteringSpeed_type_id = 0x765ca345;
		constexpr static std::string_view WallRunCurvatureTolerance_type_name = "WallRunCurvatureTolerance";
		constexpr static rivet::rivet_type_id WallRunCurvatureTolerance_type_id = 0x3f158c17;
		constexpr static std::string_view WallRunMinInputCornerAngle_type_name = "WallRunMinInputCornerAngle";
		constexpr static rivet::rivet_type_id WallRunMinInputCornerAngle_type_id = 0xb12bae1a;
		constexpr static std::string_view WallRunMaxTime_type_name = "WallRunMaxTime";
		constexpr static rivet::rivet_type_id WallRunMaxTime_type_id = 0xab325e02;
		constexpr static std::string_view WallRunForwardJumpAngle_type_name = "WallRunForwardJumpAngle";
		constexpr static rivet::rivet_type_id WallRunForwardJumpAngle_type_id = 0xd4bbd418;
		constexpr static std::string_view WallRunForwardJumpInputAngle_type_name = "WallRunForwardJumpInputAngle";
		constexpr static rivet::rivet_type_id WallRunForwardJumpInputAngle_type_id = 0x8dfe0e92;
		constexpr static std::string_view WallRunNoInputForwardJump_type_name = "WallRunNoInputForwardJump";
		constexpr static rivet::rivet_type_id WallRunNoInputForwardJump_type_id = 0xa1fb9554;
		constexpr static std::string_view CamAdjustInputDelay_type_name = "CamAdjustInputDelay";
		constexpr static rivet::rivet_type_id CamAdjustInputDelay_type_id = 0x81e300ae;
		constexpr static std::string_view CamAdjustSpeedMax_type_name = "CamAdjustSpeedMax";
		constexpr static rivet::rivet_type_id CamAdjustSpeedMax_type_id = 0xb6671c28;
		constexpr static std::string_view CamAdjustAccel_type_name = "CamAdjustAccel";
		constexpr static rivet::rivet_type_id CamAdjustAccel_type_id = 0xe3dcd1da;
		constexpr static std::string_view CamAdjustDecel_type_name = "CamAdjustDecel";
		constexpr static rivet::rivet_type_id CamAdjustDecel_type_id = 0xe570176;
		constexpr static std::string_view CamAdjustRelativeVertAngle_type_name = "CamAdjustRelativeVertAngle";
		constexpr static rivet::rivet_type_id CamAdjustRelativeVertAngle_type_id = 0x6b712ec8;
		constexpr static std::string_view CamAdjustRelativeHorzAngle_type_name = "CamAdjustRelativeHorzAngle";
		constexpr static rivet::rivet_type_id CamAdjustRelativeHorzAngle_type_id = 0xa4b9ca93;
		constexpr static std::string_view CamAdjustAngleTolerance_type_name = "CamAdjustAngleTolerance";
		constexpr static rivet::rivet_type_id CamAdjustAngleTolerance_type_id = 0x77cc8133; 

		explicit HeroWallRunConfig() = default;
		explicit HeroWallRunConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float WallRunEntrySpeed {};
		float WallRunMaxInputAngle {};
		float WallRunSpeed {};
		float WallRunDecel {};
		float WallRunCenteringSpeed {};
		float WallRunCurvatureTolerance {};
		float WallRunMinInputCornerAngle {};
		float WallRunMaxTime {};
		float WallRunForwardJumpAngle {};
		float WallRunForwardJumpInputAngle {};
		bool WallRunNoInputForwardJump {};
		float CamAdjustInputDelay {};
		float CamAdjustSpeedMax {};
		float CamAdjustAccel {};
		float CamAdjustDecel {};
		float CamAdjustRelativeVertAngle {};
		float CamAdjustRelativeHorzAngle {};
		float CamAdjustAngleTolerance {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroWallRunConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
