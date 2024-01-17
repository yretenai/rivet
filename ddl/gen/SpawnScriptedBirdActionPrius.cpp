// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SoundSourceComponentPrius.hpp> 

#include <rivet/ddl/generated/SpawnScriptedBirdActionPrius.hpp>

namespace rivet::ddl::generated {
	SpawnScriptedBirdActionPrius::SpawnScriptedBirdActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActionType = serialized->get_enum<rivet::ddl::generated::x10228b34>(ActionType_type_id, rivet::ddl::generated::x10228b34_values, rivet::ddl::generated::x10228b34::Gameplay);
		WaitAllSpawned = serialized->get_bool(WaitAllSpawned_type_id, false);
		MinSeparation = serialized->get_float(MinSeparation_type_id, 0.250000);
		FlockSize = serialized->get_int32(FlockSize_type_id, 16);
		FleeDistance = serialized->get_float(FleeDistance_type_id, -1.000000);
		FleeOnNearbyCombat = serialized->get_bool(FleeOnNearbyCombat_type_id, false);
		FlockSoundSource = serialized->unwrap_into<rivet::ddl::generated::SoundSourceComponentPrius>(FlockSoundSource_type_id); 
	}

	[[nodiscard]] auto
	SpawnScriptedBirdActionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SpawnScriptedBirdActionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SpawnScriptedBirdActionPrius> {
		if (incoming_type_id == SpawnScriptedBirdActionPrius::type_id) {
			return std::make_shared<SpawnScriptedBirdActionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
