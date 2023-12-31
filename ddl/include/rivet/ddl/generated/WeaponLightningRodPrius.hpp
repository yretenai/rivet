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

#include <rivet/ddl/generated/WeaponGamePrius.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED WeaponLightningRodPrius : WeaponGamePrius {
		constexpr static std::string_view type_name = "WeaponLightningRodPrius";
		constexpr static rivet::rivet_type_id type_id = 0x229f2168;

		constexpr static std::string_view MissAngleMin_type_name = "MissAngleMin";
		constexpr static rivet::rivet_type_id MissAngleMin_type_id = 0xec6d2f49;
		constexpr static std::string_view MissAngleMax_type_name = "MissAngleMax";
		constexpr static rivet::rivet_type_id MissAngleMax_type_id = 0xd0601010;
		constexpr static std::string_view SoftLockBreakAngleYaw_type_name = "SoftLockBreakAngleYaw";
		constexpr static rivet::rivet_type_id SoftLockBreakAngleYaw_type_id = 0x7d013ffe;
		constexpr static std::string_view SoftLockBreakAnglePitch_type_name = "SoftLockBreakAnglePitch";
		constexpr static rivet::rivet_type_id SoftLockBreakAnglePitch_type_id = 0xfb02b9c6;
		constexpr static std::string_view MinChargeForFiringDelay_type_name = "MinChargeForFiringDelay";
		constexpr static rivet::rivet_type_id MinChargeForFiringDelay_type_id = 0x5ba3e7d6;
		constexpr static std::string_view PostChargedShotFiringDelay_type_name = "PostChargedShotFiringDelay";
		constexpr static rivet::rivet_type_id PostChargedShotFiringDelay_type_id = 0x28e25bec; 

		explicit WeaponLightningRodPrius() = default;
		explicit WeaponLightningRodPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float MissAngleMin {};
		float MissAngleMax {};
		float SoftLockBreakAngleYaw {};
		float SoftLockBreakAnglePitch {};
		float MinChargeForFiringDelay {};
		float PostChargedShotFiringDelay {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WeaponLightningRodPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
