// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/FusionGrenadeSubShotPrius.hpp>
#include <rivet/ddl/generated/ShockwaveGrenadeShotPrius.hpp>
#include <rivet/ddl/generated/ShotBouncerPrius.hpp>
#include <rivet/ddl/generated/DamageModifierExplosionPrius.hpp>
#include <rivet/ddl/generated/ShotProtoGrenadePrius.hpp>
#include <rivet/ddl/generated/ShotBouncerMiniBombPrius.hpp>
#include <rivet/ddl/generated/PyrocitorEmberShotPrius.hpp>
#include <rivet/ddl/generated/GrenadeShotGamePrius.hpp>
#include <rivet/ddl/generated/ShotFusionGrenadePrius.hpp>
#include <rivet/ddl/generated/ShotZapperPrius.hpp>
#include <rivet/ddl/generated/ShotCarpetBomberPrius.hpp>
#include <rivet/ddl/generated/ShotStunWebPrius.hpp>
#include <rivet/ddl/generated/GroovitronShotPrius.hpp>
#include <rivet/ddl/generated/CarpetBomberSubShotPrius.hpp>
#include <rivet/ddl/generated/ShotTopiaryBlasterPrius.hpp>
#include <rivet/ddl/generated/GrenadeExplosionMode.hpp>
#include <rivet/ddl/generated/ShotFlingGrenadePrius.hpp> 

#include <rivet/ddl/generated/GrenadeShotPrius.hpp>

namespace rivet::ddl::generated {
	GrenadeShotPrius::GrenadeShotPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): LobbedShotPrius(serialized) {
		ExplosionMode = serialized->unwrap_into<rivet::ddl::generated::GrenadeExplosionMode>(ExplosionMode_type_id);
		ExplosionDamageType = serialized->get_enum<rivet::ddl::generated::DamageTypes>(ExplosionDamageType_type_id, rivet::ddl::generated::DamageTypes_values, rivet::ddl::generated::DamageTypes::Explosion);
		ExplosionData = serialized->unwrap_into<rivet::ddl::generated::DamageModifierExplosionPrius>(ExplosionData_type_id);
		DamageLOSType = serialized->get_enum<rivet::ddl::generated::DamageLOSTypes>(DamageLOSType_type_id, rivet::ddl::generated::DamageLOSTypes_values, rivet::ddl::generated::DamageLOSTypes::LOS); 
	}

	[[nodiscard]] auto
	GrenadeShotPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GrenadeShotPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GrenadeShotPrius> {
		if (incoming_type_id == GrenadeShotPrius::type_id) {
			return std::make_shared<GrenadeShotPrius>(serialized);
		}

		auto ShotProtoGrenadePrius_ptr = ShotProtoGrenadePrius::from_substruct(incoming_type_id, serialized);
		if (ShotProtoGrenadePrius_ptr != nullptr) {
			return ShotProtoGrenadePrius_ptr;
		}

		auto ShotBouncerMiniBombPrius_ptr = ShotBouncerMiniBombPrius::from_substruct(incoming_type_id, serialized);
		if (ShotBouncerMiniBombPrius_ptr != nullptr) {
			return ShotBouncerMiniBombPrius_ptr;
		}

		auto CarpetBomberSubShotPrius_ptr = CarpetBomberSubShotPrius::from_substruct(incoming_type_id, serialized);
		if (CarpetBomberSubShotPrius_ptr != nullptr) {
			return CarpetBomberSubShotPrius_ptr;
		}

		auto PyrocitorEmberShotPrius_ptr = PyrocitorEmberShotPrius::from_substruct(incoming_type_id, serialized);
		if (PyrocitorEmberShotPrius_ptr != nullptr) {
			return PyrocitorEmberShotPrius_ptr;
		}

		auto GrenadeShotGamePrius_ptr = GrenadeShotGamePrius::from_substruct(incoming_type_id, serialized);
		if (GrenadeShotGamePrius_ptr != nullptr) {
			return GrenadeShotGamePrius_ptr;
		}

		auto ShotZapperPrius_ptr = ShotZapperPrius::from_substruct(incoming_type_id, serialized);
		if (ShotZapperPrius_ptr != nullptr) {
			return ShotZapperPrius_ptr;
		}

		auto ShotTopiaryBlasterPrius_ptr = ShotTopiaryBlasterPrius::from_substruct(incoming_type_id, serialized);
		if (ShotTopiaryBlasterPrius_ptr != nullptr) {
			return ShotTopiaryBlasterPrius_ptr;
		}

		auto ShotCarpetBomberPrius_ptr = ShotCarpetBomberPrius::from_substruct(incoming_type_id, serialized);
		if (ShotCarpetBomberPrius_ptr != nullptr) {
			return ShotCarpetBomberPrius_ptr;
		}

		auto ShotFusionGrenadePrius_ptr = ShotFusionGrenadePrius::from_substruct(incoming_type_id, serialized);
		if (ShotFusionGrenadePrius_ptr != nullptr) {
			return ShotFusionGrenadePrius_ptr;
		}

		auto ShotStunWebPrius_ptr = ShotStunWebPrius::from_substruct(incoming_type_id, serialized);
		if (ShotStunWebPrius_ptr != nullptr) {
			return ShotStunWebPrius_ptr;
		}

		auto ShotFlingGrenadePrius_ptr = ShotFlingGrenadePrius::from_substruct(incoming_type_id, serialized);
		if (ShotFlingGrenadePrius_ptr != nullptr) {
			return ShotFlingGrenadePrius_ptr;
		}

		auto ShotBouncerPrius_ptr = ShotBouncerPrius::from_substruct(incoming_type_id, serialized);
		if (ShotBouncerPrius_ptr != nullptr) {
			return ShotBouncerPrius_ptr;
		}

		auto ShockwaveGrenadeShotPrius_ptr = ShockwaveGrenadeShotPrius::from_substruct(incoming_type_id, serialized);
		if (ShockwaveGrenadeShotPrius_ptr != nullptr) {
			return ShockwaveGrenadeShotPrius_ptr;
		}

		auto FusionGrenadeSubShotPrius_ptr = FusionGrenadeSubShotPrius::from_substruct(incoming_type_id, serialized);
		if (FusionGrenadeSubShotPrius_ptr != nullptr) {
			return FusionGrenadeSubShotPrius_ptr;
		}

		auto GroovitronShotPrius_ptr = GroovitronShotPrius::from_substruct(incoming_type_id, serialized);
		if (GroovitronShotPrius_ptr != nullptr) {
			return GroovitronShotPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
