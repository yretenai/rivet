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
	struct HeroDoubleJumpConfig;
	struct HeroJumpConfig; 

	struct RIVET_DDL_SHARED HeroJumpConfigCollection : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "HeroJumpConfigCollection";
		constexpr static rivet::rivet_type_id type_id = 0x1f125913;

		constexpr static std::string_view SingleJumpConfig_type_name = "SingleJumpConfig";
		constexpr static rivet::rivet_type_id SingleJumpConfig_type_id = 0xa18207f5;
		constexpr static std::string_view AimModeSingleJumpConfig_type_name = "AimModeSingleJumpConfig";
		constexpr static rivet::rivet_type_id AimModeSingleJumpConfig_type_id = 0x2fded1b0;
		constexpr static std::string_view DoubleJumpConfig_type_name = "DoubleJumpConfig";
		constexpr static rivet::rivet_type_id DoubleJumpConfig_type_id = 0xac03a17e;
		constexpr static std::string_view AimModeDoubleJumpConfig_type_name = "AimModeDoubleJumpConfig";
		constexpr static rivet::rivet_type_id AimModeDoubleJumpConfig_type_id = 0x225f773b;
		constexpr static std::string_view FlipJumpConfig_type_name = "FlipJumpConfig";
		constexpr static rivet::rivet_type_id FlipJumpConfig_type_id = 0xdea2d468;
		constexpr static std::string_view FallJumpConfig_type_name = "FallJumpConfig";
		constexpr static rivet::rivet_type_id FallJumpConfig_type_id = 0xa5c1950a;
		constexpr static std::string_view GlideJumpConfig_type_name = "GlideJumpConfig";
		constexpr static rivet::rivet_type_id GlideJumpConfig_type_id = 0xde50c577;
		constexpr static std::string_view MeleeSmashJumpConfig_type_name = "MeleeSmashJumpConfig";
		constexpr static rivet::rivet_type_id MeleeSmashJumpConfig_type_id = 0xe3d6df17;
		constexpr static std::string_view LedgeJumpConfig_type_name = "LedgeJumpConfig";
		constexpr static rivet::rivet_type_id LedgeJumpConfig_type_id = 0x9e402e47;
		constexpr static std::string_view GrindJumpConfig_type_name = "GrindJumpConfig";
		constexpr static rivet::rivet_type_id GrindJumpConfig_type_id = 0x58c09b3a;
		constexpr static std::string_view GrindDoubleJumpConfig_type_name = "GrindDoubleJumpConfig";
		constexpr static rivet::rivet_type_id GrindDoubleJumpConfig_type_id = 0x8aac60bd;
		constexpr static std::string_view GrindJumpTransferConfig_type_name = "GrindJumpTransferConfig";
		constexpr static rivet::rivet_type_id GrindJumpTransferConfig_type_id = 0x7ea538a7;
		constexpr static std::string_view WallJumpConfig_type_name = "WallJumpConfig";
		constexpr static rivet::rivet_type_id WallJumpConfig_type_id = 0x5e7c4810;
		constexpr static std::string_view WallRunJumpConfig_type_name = "WallRunJumpConfig";
		constexpr static rivet::rivet_type_id WallRunJumpConfig_type_id = 0xd377beed;
		constexpr static std::string_view LavaJumpConfig_type_name = "LavaJumpConfig";
		constexpr static rivet::rivet_type_id LavaJumpConfig_type_id = 0x5a4d070b;
		constexpr static std::string_view QuicksandJumpConfig_type_name = "QuicksandJumpConfig";
		constexpr static rivet::rivet_type_id QuicksandJumpConfig_type_id = 0xc310dbf0;
		constexpr static std::string_view SpringJumpConfig_type_name = "SpringJumpConfig";
		constexpr static rivet::rivet_type_id SpringJumpConfig_type_id = 0x9164097a;
		constexpr static std::string_view SwimJumpConfig_type_name = "SwimJumpConfig";
		constexpr static rivet::rivet_type_id SwimJumpConfig_type_id = 0xa1f16dc;
		constexpr static std::string_view VaultJumpConfig_type_name = "VaultJumpConfig";
		constexpr static rivet::rivet_type_id VaultJumpConfig_type_id = 0xd3fa835f;
		constexpr static std::string_view TransformJumpConfig_type_name = "TransformJumpConfig";
		constexpr static rivet::rivet_type_id TransformJumpConfig_type_id = 0x12adc268;
		constexpr static std::string_view HoverbootJumpConfig_type_name = "HoverbootJumpConfig";
		constexpr static rivet::rivet_type_id HoverbootJumpConfig_type_id = 0xb66df6d2;
		constexpr static std::string_view HoverbootDoubleJumpConfig_type_name = "HoverbootDoubleJumpConfig";
		constexpr static rivet::rivet_type_id HoverbootDoubleJumpConfig_type_id = 0xd6476dc;
		constexpr static std::string_view HoverbootFallJumpConfig_type_name = "HoverbootFallJumpConfig";
		constexpr static rivet::rivet_type_id HoverbootFallJumpConfig_type_id = 0x87300935;
		constexpr static std::string_view HoverbootBoostJumpConfig_type_name = "HoverbootBoostJumpConfig";
		constexpr static rivet::rivet_type_id HoverbootBoostJumpConfig_type_id = 0x90ef4223;
		constexpr static std::string_view SwingshotJumpConfig_type_name = "SwingshotJumpConfig";
		constexpr static rivet::rivet_type_id SwingshotJumpConfig_type_id = 0x4c09df73;
		constexpr static std::string_view BounceMomentumJumpConfig_type_name = "BounceMomentumJumpConfig";
		constexpr static rivet::rivet_type_id BounceMomentumJumpConfig_type_id = 0xb79ffab9; 

		explicit HeroJumpConfigCollection() = default;
		explicit HeroJumpConfigCollection([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::HeroJumpConfig> SingleJumpConfig {};
		std::shared_ptr<rivet::ddl::generated::HeroJumpConfig> AimModeSingleJumpConfig {};
		std::shared_ptr<rivet::ddl::generated::HeroDoubleJumpConfig> DoubleJumpConfig {};
		std::shared_ptr<rivet::ddl::generated::HeroDoubleJumpConfig> AimModeDoubleJumpConfig {};
		std::shared_ptr<rivet::ddl::generated::HeroJumpConfig> FlipJumpConfig {};
		std::shared_ptr<rivet::ddl::generated::HeroJumpConfig> FallJumpConfig {};
		std::shared_ptr<rivet::ddl::generated::HeroJumpConfig> GlideJumpConfig {};
		std::shared_ptr<rivet::ddl::generated::HeroJumpConfig> MeleeSmashJumpConfig {};
		std::shared_ptr<rivet::ddl::generated::HeroJumpConfig> LedgeJumpConfig {};
		std::shared_ptr<rivet::ddl::generated::HeroJumpConfig> GrindJumpConfig {};
		std::shared_ptr<rivet::ddl::generated::HeroDoubleJumpConfig> GrindDoubleJumpConfig {};
		std::shared_ptr<rivet::ddl::generated::HeroJumpConfig> GrindJumpTransferConfig {};
		std::shared_ptr<rivet::ddl::generated::HeroJumpConfig> WallJumpConfig {};
		std::shared_ptr<rivet::ddl::generated::HeroJumpConfig> WallRunJumpConfig {};
		std::shared_ptr<rivet::ddl::generated::HeroJumpConfig> LavaJumpConfig {};
		std::shared_ptr<rivet::ddl::generated::HeroJumpConfig> QuicksandJumpConfig {};
		std::shared_ptr<rivet::ddl::generated::HeroJumpConfig> SpringJumpConfig {};
		std::shared_ptr<rivet::ddl::generated::HeroJumpConfig> SwimJumpConfig {};
		std::shared_ptr<rivet::ddl::generated::HeroJumpConfig> VaultJumpConfig {};
		std::shared_ptr<rivet::ddl::generated::HeroJumpConfig> TransformJumpConfig {};
		std::shared_ptr<rivet::ddl::generated::HeroJumpConfig> HoverbootJumpConfig {};
		std::shared_ptr<rivet::ddl::generated::HeroDoubleJumpConfig> HoverbootDoubleJumpConfig {};
		std::shared_ptr<rivet::ddl::generated::HeroJumpConfig> HoverbootFallJumpConfig {};
		std::shared_ptr<rivet::ddl::generated::HeroJumpConfig> HoverbootBoostJumpConfig {};
		std::shared_ptr<rivet::ddl::generated::HeroJumpConfig> SwingshotJumpConfig {};
		std::shared_ptr<rivet::ddl::generated::HeroJumpConfig> BounceMomentumJumpConfig {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroJumpConfigCollection>;
	};
} // namespace rivet::ddl::generated

// clang-format on
