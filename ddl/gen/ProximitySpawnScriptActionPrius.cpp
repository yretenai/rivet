// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ProximitySpawnScriptActionPrius.hpp>

namespace rivet::ddl::generated {
	ProximitySpawnScriptActionPrius::ProximitySpawnScriptActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActionType = serialized->get_enum<rivet::ddl::generated::x10228b34>(ActionType_type_id, rivet::ddl::generated::x10228b34_values);
		StopOnDestroy = serialized->get_bool(StopOnDestroy_type_id);
		SpawnConfig = serialized->get_string(SpawnConfig_type_id); 
	}

	[[nodiscard]] auto
	ProximitySpawnScriptActionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ProximitySpawnScriptActionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ProximitySpawnScriptActionPrius> {
		if (incoming_type_id == ProximitySpawnScriptActionPrius::type_id) {
			return std::make_shared<ProximitySpawnScriptActionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
