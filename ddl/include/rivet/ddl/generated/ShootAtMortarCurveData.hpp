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
	struct ShootAtMortarFiringStyle;
	struct ShootAtCurveFiringEmitData; 

	struct RIVET_DDL_SHARED ShootAtMortarCurveData : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "ShootAtMortarCurveData";
		constexpr const static rivet::rivet_type_id type_id = 0xd5bba073;

		constexpr const static std::string_view ShotConfig_type_name = "ShotConfig";
		constexpr const static rivet::rivet_type_id ShotConfig_type_id = 0xb171e6ae;
		constexpr const static std::string_view ShotTimeToTarget_type_name = "ShotTimeToTarget";
		constexpr const static rivet::rivet_type_id ShotTimeToTarget_type_id = 0xc34db6b;
		constexpr const static std::string_view DamageHash_type_name = "DamageHash";
		constexpr const static rivet::rivet_type_id DamageHash_type_id = 0xd96a20dc;
		constexpr const static std::string_view IntroDriver_type_name = "IntroDriver";
		constexpr const static rivet::rivet_type_id IntroDriver_type_id = 0x9b209c3d;
		constexpr const static std::string_view TargetingLoopDriver_type_name = "TargetingLoopDriver";
		constexpr const static rivet::rivet_type_id TargetingLoopDriver_type_id = 0x561df71d;
		constexpr const static std::string_view ShootingLoopDriver_type_name = "ShootingLoopDriver";
		constexpr const static rivet::rivet_type_id ShootingLoopDriver_type_id = 0x578f9e77;
		constexpr const static std::string_view OutroDriver_type_name = "OutroDriver";
		constexpr const static rivet::rivet_type_id OutroDriver_type_id = 0xacdb2c61;
		constexpr const static std::string_view FiringEmitData_type_name = "FiringEmitData";
		constexpr const static rivet::rivet_type_id FiringEmitData_type_id = 0xee6e8942;
		constexpr const static std::string_view FiringCurveActor_type_name = "FiringCurveActor";
		constexpr const static rivet::rivet_type_id FiringCurveActor_type_id = 0x7c1fc445;
		constexpr const static std::string_view FiringRate_type_name = "FiringRate";
		constexpr const static rivet::rivet_type_id FiringRate_type_id = 0xa3a86030;
		constexpr const static std::string_view FiringCurveStride_type_name = "FiringCurveStride";
		constexpr const static rivet::rivet_type_id FiringCurveStride_type_id = 0x9ab241b7;
		constexpr const static std::string_view FaceTargetWhenFiring_type_name = "FaceTargetWhenFiring";
		constexpr const static rivet::rivet_type_id FaceTargetWhenFiring_type_id = 0xc86c6e16;
		constexpr const static std::string_view TargetingDuration_type_name = "TargetingDuration";
		constexpr const static rivet::rivet_type_id TargetingDuration_type_id = 0xb5b9f12f;
		constexpr const static std::string_view FiringDuration_type_name = "FiringDuration";
		constexpr const static rivet::rivet_type_id FiringDuration_type_id = 0x7055cecd;
		constexpr const static std::string_view EarlyOutroAtRange_type_name = "EarlyOutroAtRange";
		constexpr const static rivet::rivet_type_id EarlyOutroAtRange_type_id = 0xa62c6966;
		constexpr const static std::string_view ShotTargetWarningRadius_type_name = "ShotTargetWarningRadius";
		constexpr const static rivet::rivet_type_id ShotTargetWarningRadius_type_id = 0x7b582825;
		constexpr const static std::string_view ShowShotWarningIndicators_type_name = "ShowShotWarningIndicators";
		constexpr const static rivet::rivet_type_id ShowShotWarningIndicators_type_id = 0x2d68f627;
		constexpr const static std::string_view StopFiringOnDamage_type_name = "StopFiringOnDamage";
		constexpr const static rivet::rivet_type_id StopFiringOnDamage_type_id = 0xeab9e46e;
		constexpr const static std::string_view TargetingEmitLocator_type_name = "TargetingEmitLocator";
		constexpr const static rivet::rivet_type_id TargetingEmitLocator_type_id = 0xbce27508;
		constexpr const static std::string_view MortarFiringStyle_type_name = "MortarFiringStyle";
		constexpr const static rivet::rivet_type_id MortarFiringStyle_type_id = 0xe8ed45f5; 

		explicit ShootAtMortarCurveData() = default;
		explicit ShootAtMortarCurveData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view ShotConfig {};
		float ShotTimeToTarget {};
		std::string_view DamageHash {};
		std::string_view IntroDriver {};
		std::string_view TargetingLoopDriver {};
		std::string_view ShootingLoopDriver {};
		std::string_view OutroDriver {};
		std::vector<std::shared_ptr<rivet::ddl::generated::ShootAtCurveFiringEmitData>> FiringEmitData {};
		uint64_t FiringCurveActor {};
		float FiringRate {};
		uint32_t FiringCurveStride {};
		bool FaceTargetWhenFiring {};
		float TargetingDuration {};
		float FiringDuration {};
		float EarlyOutroAtRange {};
		float ShotTargetWarningRadius {};
		bool ShowShotWarningIndicators {};
		bool StopFiringOnDamage {};
		std::string_view TargetingEmitLocator {};
		std::shared_ptr<rivet::ddl::generated::ShootAtMortarFiringStyle> MortarFiringStyle {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ShootAtMortarCurveData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
