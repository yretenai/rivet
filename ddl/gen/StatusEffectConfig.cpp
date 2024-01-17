// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/StatusEffectPixelizedConfig.hpp>
#include <rivet/ddl/generated/StatusEffectProtoGrenadeConfig.hpp>
#include <rivet/ddl/generated/StatusEffectPoisonConfig.hpp>
#include <rivet/ddl/generated/StatusEffectConfuseConfig.hpp>
#include <rivet/ddl/generated/StatusEffectFreezeConfig.hpp>
#include <rivet/ddl/generated/StatusEffectLightningRodConfig.hpp>
#include <rivet/ddl/generated/StatusEffectFossilizeConfig.hpp>
#include <rivet/ddl/generated/StatusEffectWrapper.hpp>
#include <rivet/ddl/generated/StatusEffectFireConfig.hpp>
#include <rivet/ddl/generated/StatusEffectRynotizeConfig.hpp>
#include <rivet/ddl/generated/StatusEffectShrubberyConfig.hpp>
#include <rivet/ddl/generated/StatusEffectWarpRifleImplosionConfig.hpp>
#include <rivet/ddl/generated/StatusEffectElectricityConfig.hpp>
#include <rivet/ddl/generated/StatusEffectMagnaMissileConfig.hpp> 

#include <rivet/ddl/generated/StatusEffectConfig.hpp>

namespace rivet::ddl::generated {
	StatusEffectConfig::StatusEffectConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		DamageType = serialized->get_enum<rivet::ddl::generated::DamageTypes>(DamageType_type_id, rivet::ddl::generated::DamageTypes_values, rivet::ddl::generated::DamageTypes::None);
		StatusEffect = serialized->unwrap_into<rivet::ddl::generated::StatusEffectWrapper>(StatusEffect_type_id); 
	}

	[[nodiscard]] auto
	StatusEffectConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	StatusEffectConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StatusEffectConfig> {
		if (incoming_type_id == StatusEffectConfig::type_id) {
			return std::make_shared<StatusEffectConfig>(serialized);
		}

		auto StatusEffectProtoGrenadeConfig_ptr = StatusEffectProtoGrenadeConfig::from_substruct(incoming_type_id, serialized);
		if (StatusEffectProtoGrenadeConfig_ptr != nullptr) {
			return StatusEffectProtoGrenadeConfig_ptr;
		}

		auto StatusEffectPoisonConfig_ptr = StatusEffectPoisonConfig::from_substruct(incoming_type_id, serialized);
		if (StatusEffectPoisonConfig_ptr != nullptr) {
			return StatusEffectPoisonConfig_ptr;
		}

		auto StatusEffectConfuseConfig_ptr = StatusEffectConfuseConfig::from_substruct(incoming_type_id, serialized);
		if (StatusEffectConfuseConfig_ptr != nullptr) {
			return StatusEffectConfuseConfig_ptr;
		}

		auto StatusEffectFreezeConfig_ptr = StatusEffectFreezeConfig::from_substruct(incoming_type_id, serialized);
		if (StatusEffectFreezeConfig_ptr != nullptr) {
			return StatusEffectFreezeConfig_ptr;
		}

		auto StatusEffectFossilizeConfig_ptr = StatusEffectFossilizeConfig::from_substruct(incoming_type_id, serialized);
		if (StatusEffectFossilizeConfig_ptr != nullptr) {
			return StatusEffectFossilizeConfig_ptr;
		}

		auto StatusEffectShrubberyConfig_ptr = StatusEffectShrubberyConfig::from_substruct(incoming_type_id, serialized);
		if (StatusEffectShrubberyConfig_ptr != nullptr) {
			return StatusEffectShrubberyConfig_ptr;
		}

		auto StatusEffectWarpRifleImplosionConfig_ptr = StatusEffectWarpRifleImplosionConfig::from_substruct(incoming_type_id, serialized);
		if (StatusEffectWarpRifleImplosionConfig_ptr != nullptr) {
			return StatusEffectWarpRifleImplosionConfig_ptr;
		}

		auto StatusEffectRynotizeConfig_ptr = StatusEffectRynotizeConfig::from_substruct(incoming_type_id, serialized);
		if (StatusEffectRynotizeConfig_ptr != nullptr) {
			return StatusEffectRynotizeConfig_ptr;
		}

		auto StatusEffectFireConfig_ptr = StatusEffectFireConfig::from_substruct(incoming_type_id, serialized);
		if (StatusEffectFireConfig_ptr != nullptr) {
			return StatusEffectFireConfig_ptr;
		}

		auto StatusEffectElectricityConfig_ptr = StatusEffectElectricityConfig::from_substruct(incoming_type_id, serialized);
		if (StatusEffectElectricityConfig_ptr != nullptr) {
			return StatusEffectElectricityConfig_ptr;
		}

		auto StatusEffectLightningRodConfig_ptr = StatusEffectLightningRodConfig::from_substruct(incoming_type_id, serialized);
		if (StatusEffectLightningRodConfig_ptr != nullptr) {
			return StatusEffectLightningRodConfig_ptr;
		}

		auto StatusEffectMagnaMissileConfig_ptr = StatusEffectMagnaMissileConfig::from_substruct(incoming_type_id, serialized);
		if (StatusEffectMagnaMissileConfig_ptr != nullptr) {
			return StatusEffectMagnaMissileConfig_ptr;
		}

		auto StatusEffectPixelizedConfig_ptr = StatusEffectPixelizedConfig::from_substruct(incoming_type_id, serialized);
		if (StatusEffectPixelizedConfig_ptr != nullptr) {
			return StatusEffectPixelizedConfig_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
