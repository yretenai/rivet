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

#include <rivet/ddl/generated/AmbientShooterPrius.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED AmbientAimingShooterPrius : AmbientShooterPrius {
		constexpr static std::string_view type_name = "AmbientAimingShooterPrius";
		constexpr static rivet::rivet_type_id type_id = 0x6c407dc;

		constexpr static std::string_view AimAnimName_type_name = "AimAnimName";
		constexpr static rivet::rivet_type_id AimAnimName_type_id = 0x586df607;
		constexpr static std::string_view FireAnimName_type_name = "FireAnimName";
		constexpr static rivet::rivet_type_id FireAnimName_type_id = 0x1f571875;
		constexpr static std::string_view AimLocatorName_type_name = "AimLocatorName";
		constexpr static rivet::rivet_type_id AimLocatorName_type_id = 0x957966c1;
		constexpr static std::string_view DegYawMin_type_name = "DegYawMin";
		constexpr static rivet::rivet_type_id DegYawMin_type_id = 0xac2d9a7b;
		constexpr static std::string_view DegYawMax_type_name = "DegYawMax";
		constexpr static rivet::rivet_type_id DegYawMax_type_id = 0x9020a522;
		constexpr static std::string_view DegPitchMin_type_name = "DegPitchMin";
		constexpr static rivet::rivet_type_id DegPitchMin_type_id = 0x9456c3a0;
		constexpr static std::string_view DegPitchMax_type_name = "DegPitchMax";
		constexpr static rivet::rivet_type_id DegPitchMax_type_id = 0xa85bfcf9;
		constexpr static std::string_view GameplayDegYawMin_type_name = "GameplayDegYawMin";
		constexpr static rivet::rivet_type_id GameplayDegYawMin_type_id = 0xb45a1c5e;
		constexpr static std::string_view GameplayDegYawMax_type_name = "GameplayDegYawMax";
		constexpr static rivet::rivet_type_id GameplayDegYawMax_type_id = 0x88572307;
		constexpr static std::string_view GameplayDegPitchMin_type_name = "GameplayDegPitchMin";
		constexpr static rivet::rivet_type_id GameplayDegPitchMin_type_id = 0x787e2d25;
		constexpr static std::string_view GameplayDegPitchMax_type_name = "GameplayDegPitchMax";
		constexpr static rivet::rivet_type_id GameplayDegPitchMax_type_id = 0x4473127c; 

		explicit AmbientAimingShooterPrius() = default;
		explicit AmbientAimingShooterPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view AimAnimName {};
		std::string_view FireAnimName {};
		std::string_view AimLocatorName {};
		float DegYawMin {};
		float DegYawMax {};
		float DegPitchMin {};
		float DegPitchMax {};
		float GameplayDegYawMin {};
		float GameplayDegYawMax {};
		float GameplayDegPitchMin {};
		float GameplayDegPitchMax {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AmbientAimingShooterPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
