// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/NestBotSpawnerPrius.hpp>
#include <rivet/ddl/generated/NestBotBlockerPrius.hpp>
#include <rivet/ddl/generated/NestBotTurretPrius.hpp>
#include <rivet/ddl/generated/POIInstanceDataBase.hpp> 

#include <rivet/ddl/generated/NestBotBasePrius.hpp>

namespace rivet::ddl::generated {
	NestBotBasePrius::NestBotBasePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): BotPrius(serialized) {
		ShieldActor = serialized->get_string(ShieldActor_type_id, {});
		ExplosionRadius = serialized->get_float(ExplosionRadius_type_id, 6.000000);
		ExplosionDamage = serialized->get_float(ExplosionDamage_type_id, 2.000000);
		ShieldHealth = serialized->get_float(ShieldHealth_type_id, 100.000000);
		ShieldRespawnDelay = serialized->get_float(ShieldRespawnDelay_type_id, 2.000000);
		InstanceData = serialized->unwrap_into<rivet::ddl::generated::POIInstanceDataBase>(InstanceData_type_id);
		ShieldLink = serialized->get_uint64(ShieldLink_type_id, 0);
		WireGroup = serialized->get_uint64(WireGroup_type_id, 0);
		RedWireMaterial = serialized->get_string(RedWireMaterial_type_id, "materials\\gl_default_grid\\gl_default_red_glow.material");
		GreenWireMaterial = serialized->get_string(GreenWireMaterial_type_id, "materials\\gl_default_grid\\gbl_gp_pressure_pad_cable_on.material");
		LookTest = serialized->get_string(LookTest_type_id, "Default"); 
	}

	[[nodiscard]] auto
	NestBotBasePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	NestBotBasePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<NestBotBasePrius> {
		if (incoming_type_id == NestBotBasePrius::type_id) {
			return std::make_shared<NestBotBasePrius>(serialized);
		}

		auto NestBotTurretPrius_ptr = NestBotTurretPrius::from_substruct(incoming_type_id, serialized);
		if (NestBotTurretPrius_ptr != nullptr) {
			return NestBotTurretPrius_ptr;
		}

		auto NestBotBlockerPrius_ptr = NestBotBlockerPrius::from_substruct(incoming_type_id, serialized);
		if (NestBotBlockerPrius_ptr != nullptr) {
			return NestBotBlockerPrius_ptr;
		}

		auto NestBotSpawnerPrius_ptr = NestBotSpawnerPrius::from_substruct(incoming_type_id, serialized);
		if (NestBotSpawnerPrius_ptr != nullptr) {
			return NestBotSpawnerPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
