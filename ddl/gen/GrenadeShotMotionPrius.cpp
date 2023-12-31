// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PyrocitorEmberShotMotionPrius.hpp>
#include <rivet/ddl/generated/GrenadeLandMode.hpp>
#include <rivet/ddl/generated/PirateHeavyMiniBounceBombShotMotionPrius.hpp>
#include <rivet/ddl/generated/GrenadeVelocityMode.hpp>
#include <rivet/ddl/generated/GrenadeShotMotionGamePrius.hpp>
#include <rivet/ddl/generated/ShotMotionCarpetBomberSubShotPrius.hpp>
#include <rivet/ddl/generated/GroovitronShotMotionPrius.hpp>
#include <rivet/ddl/generated/ShotMotionThumperPrius.hpp>
#include <rivet/ddl/generated/ShotMotionFusionGrenadeSubShotPrius.hpp>
#include <rivet/ddl/generated/ShotMotionVolcanicEruptorPrius.hpp>
#include <rivet/ddl/generated/ShotMotionBouncerMiniBombPrius.hpp>
#include <rivet/ddl/generated/ShotMotionClankPuzzlePrius.hpp>
#include <rivet/ddl/generated/ExtermibotSprayShotMotionPrius.hpp>
#include <rivet/ddl/generated/TargetedGrenadeShotMotionPrius.hpp>
#include <rivet/ddl/generated/ShotMotionFusionGrenadePrius.hpp> 

#include <rivet/ddl/generated/GrenadeShotMotionPrius.hpp>

namespace rivet::ddl::generated {
	GrenadeShotMotionPrius::GrenadeShotMotionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): BasicShotMotionPrius(serialized) {
		LandMode = serialized->unwrap_into<rivet::ddl::generated::GrenadeLandMode>(LandMode_type_id);
		VelocityMode = serialized->unwrap_into<rivet::ddl::generated::GrenadeVelocityMode>(VelocityMode_type_id); 
	}

	[[nodiscard]] auto
	GrenadeShotMotionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GrenadeShotMotionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GrenadeShotMotionPrius> {
		if (incoming_type_id == GrenadeShotMotionPrius::type_id) {
			return std::make_shared<GrenadeShotMotionPrius>(serialized);
		}

		auto ShotMotionClankPuzzlePrius_ptr = ShotMotionClankPuzzlePrius::from_substruct(incoming_type_id, serialized);
		if (ShotMotionClankPuzzlePrius_ptr != nullptr) {
			return ShotMotionClankPuzzlePrius_ptr;
		}

		auto GrenadeShotMotionGamePrius_ptr = GrenadeShotMotionGamePrius::from_substruct(incoming_type_id, serialized);
		if (GrenadeShotMotionGamePrius_ptr != nullptr) {
			return GrenadeShotMotionGamePrius_ptr;
		}

		auto ShotMotionCarpetBomberSubShotPrius_ptr = ShotMotionCarpetBomberSubShotPrius::from_substruct(incoming_type_id, serialized);
		if (ShotMotionCarpetBomberSubShotPrius_ptr != nullptr) {
			return ShotMotionCarpetBomberSubShotPrius_ptr;
		}

		auto ShotMotionThumperPrius_ptr = ShotMotionThumperPrius::from_substruct(incoming_type_id, serialized);
		if (ShotMotionThumperPrius_ptr != nullptr) {
			return ShotMotionThumperPrius_ptr;
		}

		auto TargetedGrenadeShotMotionPrius_ptr = TargetedGrenadeShotMotionPrius::from_substruct(incoming_type_id, serialized);
		if (TargetedGrenadeShotMotionPrius_ptr != nullptr) {
			return TargetedGrenadeShotMotionPrius_ptr;
		}

		auto ShotMotionFusionGrenadeSubShotPrius_ptr = ShotMotionFusionGrenadeSubShotPrius::from_substruct(incoming_type_id, serialized);
		if (ShotMotionFusionGrenadeSubShotPrius_ptr != nullptr) {
			return ShotMotionFusionGrenadeSubShotPrius_ptr;
		}

		auto GroovitronShotMotionPrius_ptr = GroovitronShotMotionPrius::from_substruct(incoming_type_id, serialized);
		if (GroovitronShotMotionPrius_ptr != nullptr) {
			return GroovitronShotMotionPrius_ptr;
		}

		auto ShotMotionBouncerMiniBombPrius_ptr = ShotMotionBouncerMiniBombPrius::from_substruct(incoming_type_id, serialized);
		if (ShotMotionBouncerMiniBombPrius_ptr != nullptr) {
			return ShotMotionBouncerMiniBombPrius_ptr;
		}

		auto ExtermibotSprayShotMotionPrius_ptr = ExtermibotSprayShotMotionPrius::from_substruct(incoming_type_id, serialized);
		if (ExtermibotSprayShotMotionPrius_ptr != nullptr) {
			return ExtermibotSprayShotMotionPrius_ptr;
		}

		auto ShotMotionVolcanicEruptorPrius_ptr = ShotMotionVolcanicEruptorPrius::from_substruct(incoming_type_id, serialized);
		if (ShotMotionVolcanicEruptorPrius_ptr != nullptr) {
			return ShotMotionVolcanicEruptorPrius_ptr;
		}

		auto ShotMotionFusionGrenadePrius_ptr = ShotMotionFusionGrenadePrius::from_substruct(incoming_type_id, serialized);
		if (ShotMotionFusionGrenadePrius_ptr != nullptr) {
			return ShotMotionFusionGrenadePrius_ptr;
		}

		auto PyrocitorEmberShotMotionPrius_ptr = PyrocitorEmberShotMotionPrius::from_substruct(incoming_type_id, serialized);
		if (PyrocitorEmberShotMotionPrius_ptr != nullptr) {
			return PyrocitorEmberShotMotionPrius_ptr;
		}

		auto PirateHeavyMiniBounceBombShotMotionPrius_ptr = PirateHeavyMiniBounceBombShotMotionPrius::from_substruct(incoming_type_id, serialized);
		if (PirateHeavyMiniBounceBombShotMotionPrius_ptr != nullptr) {
			return PirateHeavyMiniBounceBombShotMotionPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
