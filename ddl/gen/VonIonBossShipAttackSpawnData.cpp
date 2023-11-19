// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VonIonBossShipAttackSpawnData.hpp>

namespace rivet::ddl::generated {
	VonIonBossShipAttackSpawnData::VonIonBossShipAttackSpawnData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ActorSpawnData(serialized) {
		VonIonBossShipHandle = serialized->get_uint32(VonIonBossShipHandle_type_id);
		TargetHandle = serialized->get_uint32(TargetHandle_type_id);
		PatternAction = serialized->get_int32(PatternAction_type_id); 
	}

	[[nodiscard]] auto
	VonIonBossShipAttackSpawnData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VonIonBossShipAttackSpawnData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VonIonBossShipAttackSpawnData> {
		if (incoming_type_id == VonIonBossShipAttackSpawnData::type_id) {
			return std::make_shared<VonIonBossShipAttackSpawnData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated