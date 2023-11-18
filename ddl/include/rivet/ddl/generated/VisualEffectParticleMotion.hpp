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
	struct SpeedLifeTimeModifier;
	struct VisualEffectPhysicsParam;
	struct VisualEffectAccelerationKeyFrames;
	struct VisualEffectExternalForces;
	struct VisualEffectTurbulenceKeyFrames;
	struct VisualEffectVelocityKeyFrames;
	struct VisualEffectFloatKeyFrames; 

	struct RIVET_DDL_SHARED VisualEffectParticleMotion : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "VisualEffectParticleMotion";
		constexpr static rivet::rivet_type_id type_id = 0x13e0c2c3;

		constexpr static std::string_view FloatKeyFrames_ParticleParentInfluence_type_name = "FloatKeyFrames_ParticleParentInfluence";
		constexpr static rivet::rivet_type_id FloatKeyFrames_ParticleParentInfluence_type_id = 0xaa14f6d2;
		constexpr static std::string_view FloatKeyFrames_EmissionSpawnSpeed_type_name = "FloatKeyFrames_EmissionSpawnSpeed";
		constexpr static rivet::rivet_type_id FloatKeyFrames_EmissionSpawnSpeed_type_id = 0xb84ad87e;
		constexpr static std::string_view Float3KeyFrames_ParticleVelocity_type_name = "Float3KeyFrames_ParticleVelocity";
		constexpr static rivet::rivet_type_id Float3KeyFrames_ParticleVelocity_type_id = 0x11623987;
		constexpr static std::string_view Float3KeyFrames_ParticleTurbulence_type_name = "Float3KeyFrames_ParticleTurbulence";
		constexpr static rivet::rivet_type_id Float3KeyFrames_ParticleTurbulence_type_id = 0x14bf0139;
		constexpr static std::string_view FloatKeyFrames_ParticleAcceleration_type_name = "FloatKeyFrames_ParticleAcceleration";
		constexpr static rivet::rivet_type_id FloatKeyFrames_ParticleAcceleration_type_id = 0xc7dc8e4b;
		constexpr static std::string_view ExternalForces_type_name = "ExternalForces";
		constexpr static rivet::rivet_type_id ExternalForces_type_id = 0xc3ad64ff;
		constexpr static std::string_view SpeedLifeTimeModifier_type_name = "SpeedLifeTimeModifier";
		constexpr static rivet::rivet_type_id SpeedLifeTimeModifier_type_id = 0xd9df35b2;
		constexpr static std::string_view InputPort_PhysicsParam_type_name = "InputPort_PhysicsParam";
		constexpr static rivet::rivet_type_id InputPort_PhysicsParam_type_id = 0x5405ea33;
		constexpr static std::string_view GlobalForceFields_type_name = "GlobalForceFields";
		constexpr static rivet::rivet_type_id GlobalForceFields_type_id = 0x47c1aadc; 

		explicit VisualEffectParticleMotion() = default;
		explicit VisualEffectParticleMotion([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::VisualEffectFloatKeyFrames> FloatKeyFrames_ParticleParentInfluence {};
		std::shared_ptr<rivet::ddl::generated::VisualEffectFloatKeyFrames> FloatKeyFrames_EmissionSpawnSpeed {};
		std::shared_ptr<rivet::ddl::generated::VisualEffectVelocityKeyFrames> Float3KeyFrames_ParticleVelocity {};
		std::shared_ptr<rivet::ddl::generated::VisualEffectTurbulenceKeyFrames> Float3KeyFrames_ParticleTurbulence {};
		std::shared_ptr<rivet::ddl::generated::VisualEffectAccelerationKeyFrames> FloatKeyFrames_ParticleAcceleration {};
		std::shared_ptr<rivet::ddl::generated::VisualEffectExternalForces> ExternalForces {};
		std::shared_ptr<rivet::ddl::generated::SpeedLifeTimeModifier> SpeedLifeTimeModifier {};
		std::shared_ptr<rivet::ddl::generated::VisualEffectPhysicsParam> InputPort_PhysicsParam {};
		bool GlobalForceFields {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VisualEffectParticleMotion>;
	};
} // namespace rivet::ddl::generated

// clang-format on
