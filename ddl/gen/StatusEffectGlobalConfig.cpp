// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/StatusEffectWarpRifleImplosionConfig.hpp>
#include <rivet/ddl/generated/StatusEffectProtoGrenadeConfig.hpp>
#include <rivet/ddl/generated/StatusEffectMagnaMissileConfig.hpp>
#include <rivet/ddl/generated/StatusEffectShrubberyConfig.hpp>
#include <rivet/ddl/generated/StatusEffectPixelizedConfig.hpp>
#include <rivet/ddl/generated/StatusEffectRynotizeConfig.hpp>
#include <rivet/ddl/generated/StatusEffectConfuseConfig.hpp>
#include <rivet/ddl/generated/StatusEffectPoisonConfig.hpp>
#include <rivet/ddl/generated/StatusEffectLightningRodConfig.hpp>
#include <rivet/ddl/generated/StatusEffectFreezeConfig.hpp>
#include <rivet/ddl/generated/StatusEffectFossilizeConfig.hpp>
#include <rivet/ddl/generated/StatusEffectFireConfig.hpp> 

#include <rivet/ddl/generated/StatusEffectGlobalConfig.hpp>

namespace rivet::ddl::generated {
	StatusEffectGlobalConfig::StatusEffectGlobalConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		FireConfig = serialized->unwrap_into<rivet::ddl::generated::StatusEffectFireConfig>(FireConfig_type_id);
		FreezeConfig = serialized->unwrap_into<rivet::ddl::generated::StatusEffectFreezeConfig>(FreezeConfig_type_id);
		PoisonConfig = serialized->unwrap_into<rivet::ddl::generated::StatusEffectPoisonConfig>(PoisonConfig_type_id);
		ConfuseConfig = serialized->unwrap_into<rivet::ddl::generated::StatusEffectConfuseConfig>(ConfuseConfig_type_id);
		PixelizedConfig = serialized->unwrap_into<rivet::ddl::generated::StatusEffectPixelizedConfig>(PixelizedConfig_type_id);
		FossilizeConfig = serialized->unwrap_into<rivet::ddl::generated::StatusEffectFossilizeConfig>(FossilizeConfig_type_id);
		ShrubberyConfig = serialized->unwrap_into<rivet::ddl::generated::StatusEffectShrubberyConfig>(ShrubberyConfig_type_id);
		MagnaMissileConfig = serialized->unwrap_into<rivet::ddl::generated::StatusEffectMagnaMissileConfig>(MagnaMissileConfig_type_id);
		LightningRodConfig = serialized->unwrap_into<rivet::ddl::generated::StatusEffectLightningRodConfig>(LightningRodConfig_type_id);
		ProtoGrenadeConfig = serialized->unwrap_into<rivet::ddl::generated::StatusEffectProtoGrenadeConfig>(ProtoGrenadeConfig_type_id);
		WarpRifleImplosionConfig = serialized->unwrap_into<rivet::ddl::generated::StatusEffectWarpRifleImplosionConfig>(WarpRifleImplosionConfig_type_id);
		RynotizeConfig = serialized->unwrap_into<rivet::ddl::generated::StatusEffectRynotizeConfig>(RynotizeConfig_type_id); 
	}

	[[nodiscard]] auto
	StatusEffectGlobalConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	StatusEffectGlobalConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StatusEffectGlobalConfig> {
		if (incoming_type_id == StatusEffectGlobalConfig::type_id) {
			return std::make_shared<StatusEffectGlobalConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
