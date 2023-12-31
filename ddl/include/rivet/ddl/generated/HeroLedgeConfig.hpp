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
	struct RecoveryLedgeModeParams; 

	struct RIVET_DDL_SHARED HeroLedgeConfig : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "HeroLedgeConfig";
		constexpr static rivet::rivet_type_id type_id = 0x5ac85441;

		constexpr static std::string_view FromGroundDistanceForward_type_name = "FromGroundDistanceForward";
		constexpr static rivet::rivet_type_id FromGroundDistanceForward_type_id = 0x2bc834ce;
		constexpr static std::string_view FromGroundDistanceSide_type_name = "FromGroundDistanceSide";
		constexpr static rivet::rivet_type_id FromGroundDistanceSide_type_id = 0x82098b58;
		constexpr static std::string_view FromGroundHeightMax_type_name = "FromGroundHeightMax";
		constexpr static rivet::rivet_type_id FromGroundHeightMax_type_id = 0x6319fc5;
		constexpr static std::string_view FromGroundHeightMin_type_name = "FromGroundHeightMin";
		constexpr static rivet::rivet_type_id FromGroundHeightMin_type_id = 0x3a3ca09c;
		constexpr static std::string_view FromGroundInputAngleTol_type_name = "FromGroundInputAngleTol";
		constexpr static rivet::rivet_type_id FromGroundInputAngleTol_type_id = 0x399f530a;
		constexpr static std::string_view FromAirDistanceForward_type_name = "FromAirDistanceForward";
		constexpr static rivet::rivet_type_id FromAirDistanceForward_type_id = 0x3bfb5adf;
		constexpr static std::string_view FromAirDistanceSide_type_name = "FromAirDistanceSide";
		constexpr static rivet::rivet_type_id FromAirDistanceSide_type_id = 0x6b961b59;
		constexpr static std::string_view FromAirHeightMax_type_name = "FromAirHeightMax";
		constexpr static rivet::rivet_type_id FromAirHeightMax_type_id = 0x6937379b;
		constexpr static std::string_view FromAirHeightMin_type_name = "FromAirHeightMin";
		constexpr static rivet::rivet_type_id FromAirHeightMin_type_id = 0x553a08c2;
		constexpr static std::string_view FromAirInputAngleTol_type_name = "FromAirInputAngleTol";
		constexpr static rivet::rivet_type_id FromAirInputAngleTol_type_id = 0x4e71fc0c;
		constexpr static std::string_view FromLedgeDistanceForward_type_name = "FromLedgeDistanceForward";
		constexpr static rivet::rivet_type_id FromLedgeDistanceForward_type_id = 0x9ed81bcb;
		constexpr static std::string_view FromLedgeDistanceSide_type_name = "FromLedgeDistanceSide";
		constexpr static rivet::rivet_type_id FromLedgeDistanceSide_type_id = 0xdfc6efa6;
		constexpr static std::string_view FromLedgeHeightMax_type_name = "FromLedgeHeightMax";
		constexpr static rivet::rivet_type_id FromLedgeHeightMax_type_id = 0x6bed0c12;
		constexpr static std::string_view FromLedgeHeightMin_type_name = "FromLedgeHeightMin";
		constexpr static rivet::rivet_type_id FromLedgeHeightMin_type_id = 0x57e0334b;
		constexpr static std::string_view FromLedgeInputAngleTol_type_name = "FromLedgeInputAngleTol";
		constexpr static rivet::rivet_type_id FromLedgeInputAngleTol_type_id = 0x63c74375;
		constexpr static std::string_view RecoveryFrontJumpParams_type_name = "RecoveryFrontJumpParams";
		constexpr static rivet::rivet_type_id RecoveryFrontJumpParams_type_id = 0x5a44e293;
		constexpr static std::string_view RecoveryRunOffParams_type_name = "RecoveryRunOffParams";
		constexpr static rivet::rivet_type_id RecoveryRunOffParams_type_id = 0x5d331ed0;
		constexpr static std::string_view RecoveryKnockOffParams_type_name = "RecoveryKnockOffParams";
		constexpr static rivet::rivet_type_id RecoveryKnockOffParams_type_id = 0xee7454df;
		constexpr static std::string_view RecoveryIntroDriver_type_name = "RecoveryIntroDriver";
		constexpr static rivet::rivet_type_id RecoveryIntroDriver_type_id = 0x619eb012;
		constexpr static std::string_view RecoveryLoopDriver_type_name = "RecoveryLoopDriver";
		constexpr static rivet::rivet_type_id RecoveryLoopDriver_type_id = 0x83076aaa;
		constexpr static std::string_view RecoveryClimbDriver_type_name = "RecoveryClimbDriver";
		constexpr static rivet::rivet_type_id RecoveryClimbDriver_type_id = 0x1e07dfca;
		constexpr static std::string_view RecoveryLetGoDriver_type_name = "RecoveryLetGoDriver";
		constexpr static rivet::rivet_type_id RecoveryLetGoDriver_type_id = 0x2504babe;
		constexpr static std::string_view RecoveryHandsLocator_type_name = "RecoveryHandsLocator";
		constexpr static rivet::rivet_type_id RecoveryHandsLocator_type_id = 0x689dc401;
		constexpr static std::string_view RecoveryIKHandLocator_type_name = "RecoveryIKHandLocator";
		constexpr static rivet::rivet_type_id RecoveryIKHandLocator_type_id = 0x62673271;
		constexpr static std::string_view RecoveryIKHandQueryMaxOffsetY_type_name = "RecoveryIKHandQueryMaxOffsetY";
		constexpr static rivet::rivet_type_id RecoveryIKHandQueryMaxOffsetY_type_id = 0xa58785;
		constexpr static std::string_view RecoveryIKHandQueryMinOffsetY_type_name = "RecoveryIKHandQueryMinOffsetY";
		constexpr static rivet::rivet_type_id RecoveryIKHandQueryMinOffsetY_type_id = 0x1a91d31;
		constexpr static std::string_view RecoveryIKHandRadius_type_name = "RecoveryIKHandRadius";
		constexpr static rivet::rivet_type_id RecoveryIKHandRadius_type_id = 0xa21d77ab; 

		explicit HeroLedgeConfig() = default;
		explicit HeroLedgeConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float FromGroundDistanceForward {};
		float FromGroundDistanceSide {};
		float FromGroundHeightMax {};
		float FromGroundHeightMin {};
		float FromGroundInputAngleTol {};
		float FromAirDistanceForward {};
		float FromAirDistanceSide {};
		float FromAirHeightMax {};
		float FromAirHeightMin {};
		float FromAirInputAngleTol {};
		float FromLedgeDistanceForward {};
		float FromLedgeDistanceSide {};
		float FromLedgeHeightMax {};
		float FromLedgeHeightMin {};
		float FromLedgeInputAngleTol {};
		std::shared_ptr<rivet::ddl::generated::RecoveryLedgeModeParams> RecoveryFrontJumpParams {};
		std::shared_ptr<rivet::ddl::generated::RecoveryLedgeModeParams> RecoveryRunOffParams {};
		std::shared_ptr<rivet::ddl::generated::RecoveryLedgeModeParams> RecoveryKnockOffParams {};
		std::string_view RecoveryIntroDriver {};
		std::string_view RecoveryLoopDriver {};
		std::string_view RecoveryClimbDriver {};
		std::string_view RecoveryLetGoDriver {};
		std::string_view RecoveryHandsLocator {};
		std::string_view RecoveryIKHandLocator {};
		float RecoveryIKHandQueryMaxOffsetY {};
		float RecoveryIKHandQueryMinOffsetY {};
		float RecoveryIKHandRadius {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroLedgeConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
