// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SpawnHazardDamageAreaEffectNodeDef.hpp>

namespace rivet::ddl::generated {
	SpawnHazardDamageAreaEffectNodeDef::SpawnHazardDamageAreaEffectNodeDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): NodalShotEffectNodeBaseDef(serialized) {
		ActorAsset = serialized->get_string(ActorAsset_type_id);
		ConfigAsset = serialized->get_string(ConfigAsset_type_id); 
	}

	[[nodiscard]] auto
	SpawnHazardDamageAreaEffectNodeDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SpawnHazardDamageAreaEffectNodeDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SpawnHazardDamageAreaEffectNodeDef> {
		if (incoming_type_id == SpawnHazardDamageAreaEffectNodeDef::type_id) {
			return std::make_shared<SpawnHazardDamageAreaEffectNodeDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
