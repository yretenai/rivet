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

#include <rivet/ddl/generated/enums/xdcbe36a2.hpp>
#include <rivet/ddl/generated/ConfigBase.hpp> 

namespace rivet::ddl::generated {
	struct NavCapsule;
	struct SteeringPartnerCurveConfig;
	struct SteeringConfig;
	struct CVCShapeConfig;
	struct MoverConfig;
	struct MovementConfig; 

	struct RIVET_DDL_SHARED BotConfigMovement : ConfigBase {
		constexpr static std::string_view type_name = "BotConfigMovement";
		constexpr static rivet::rivet_type_id type_id = 0xcba93f3;

		constexpr static std::string_view MovementConfigs_type_name = "MovementConfigs";
		constexpr static rivet::rivet_type_id MovementConfigs_type_id = 0x1a2c289d;
		constexpr static std::string_view MoverConfig_type_name = "MoverConfig";
		constexpr static rivet::rivet_type_id MoverConfig_type_id = 0x5f563a9e;
		constexpr static std::string_view EventuallyDiesWhileFalling_type_name = "EventuallyDiesWhileFalling";
		constexpr static rivet::rivet_type_id EventuallyDiesWhileFalling_type_id = 0x92564f1c;
		constexpr static std::string_view LethalFallTime_type_name = "LethalFallTime";
		constexpr static rivet::rivet_type_id LethalFallTime_type_id = 0x701b1e13;
		constexpr static std::string_view TakesFallDamage_type_name = "TakesFallDamage";
		constexpr static rivet::rivet_type_id TakesFallDamage_type_id = 0xc389c971;
		constexpr static std::string_view MinDamagingHeight_type_name = "MinDamagingHeight";
		constexpr static rivet::rivet_type_id MinDamagingHeight_type_id = 0xd9b0809;
		constexpr static std::string_view MaxDamagingHeight_type_name = "MaxDamagingHeight";
		constexpr static rivet::rivet_type_id MaxDamagingHeight_type_id = 0x1810dcfb;
		constexpr static std::string_view SteeringConfig_type_name = "SteeringConfig";
		constexpr static rivet::rivet_type_id SteeringConfig_type_id = 0x153a00dc;
		constexpr static std::string_view SteeringPartnerCurveConfig_type_name = "SteeringPartnerCurveConfig";
		constexpr static rivet::rivet_type_id SteeringPartnerCurveConfig_type_id = 0x75fa7dfb;
		constexpr static std::string_view CVCShape_type_name = "CVCShape";
		constexpr static rivet::rivet_type_id CVCShape_type_id = 0xd25d46cf;
		constexpr static std::string_view UseSingleMoveSweep_type_name = "UseSingleMoveSweep";
		constexpr static rivet::rivet_type_id UseSingleMoveSweep_type_id = 0x981cd1bd;
		constexpr static std::string_view PushOnEqual_type_name = "PushOnEqual";
		constexpr static rivet::rivet_type_id PushOnEqual_type_id = 0x6bcc1e52;
		constexpr static std::string_view UseFullSpeedDeflection_type_name = "UseFullSpeedDeflection";
		constexpr static rivet::rivet_type_id UseFullSpeedDeflection_type_id = 0x71222edc;
		constexpr static std::string_view UseSoftCollisions_type_name = "UseSoftCollisions";
		constexpr static rivet::rivet_type_id UseSoftCollisions_type_id = 0xf7e3f4b6;
		constexpr static std::string_view SoftCVCInner_type_name = "SoftCVCInner";
		constexpr static rivet::rivet_type_id SoftCVCInner_type_id = 0x5d1c9b6a;
		constexpr static std::string_view SoftCVCOuter_type_name = "SoftCVCOuter";
		constexpr static rivet::rivet_type_id SoftCVCOuter_type_id = 0x44f598f2;
		constexpr static std::string_view NavObstacle_type_name = "NavObstacle";
		constexpr static rivet::rivet_type_id NavObstacle_type_id = 0x98e6896;
		constexpr static std::string_view Weight_type_name = "Weight";
		constexpr static rivet::rivet_type_id Weight_type_id = 0x39b51b26;
		constexpr static std::string_view NavMeshLayer_type_name = "NavMeshLayer";
		constexpr static rivet::rivet_type_id NavMeshLayer_type_id = 0x7efc09d3; 

		explicit BotConfigMovement() = default;
		explicit BotConfigMovement([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::shared_ptr<rivet::ddl::generated::MovementConfig>> MovementConfigs {};
		std::shared_ptr<rivet::ddl::generated::MoverConfig> MoverConfig {};
		bool EventuallyDiesWhileFalling {};
		float LethalFallTime {};
		bool TakesFallDamage {};
		float MinDamagingHeight {};
		float MaxDamagingHeight {};
		std::shared_ptr<rivet::ddl::generated::SteeringConfig> SteeringConfig {};
		std::shared_ptr<rivet::ddl::generated::SteeringPartnerCurveConfig> SteeringPartnerCurveConfig {};
		std::shared_ptr<rivet::ddl::generated::CVCShapeConfig> CVCShape {};
		bool UseSingleMoveSweep {};
		bool PushOnEqual {};
		bool UseFullSpeedDeflection {};
		bool UseSoftCollisions {};
		float SoftCVCInner {};
		float SoftCVCOuter {};
		std::shared_ptr<rivet::ddl::generated::NavCapsule> NavObstacle {};
		float Weight {};
		rivet::ddl::generated::xdcbe36a2 NavMeshLayer {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotConfigMovement>;
	};
} // namespace rivet::ddl::generated

// clang-format on
