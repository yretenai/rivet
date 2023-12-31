// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ObjSysUnlockSequence.hpp> 

#include <rivet/ddl/generated/CrowdSpawnerType.hpp>

namespace rivet::ddl::generated {
	CrowdSpawnerType::CrowdSpawnerType([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		TypeConfig = serialized->get_string(TypeConfig_type_id);
		EnabledContainerRegions = serialized->get_strings(EnabledContainerRegions_type_id);
		MissionUnlocks = serialized->unwrap_into<rivet::ddl::generated::ObjSysUnlockSequence>(MissionUnlocks_type_id); 
	}

	[[nodiscard]] auto
	CrowdSpawnerType::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CrowdSpawnerType::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CrowdSpawnerType> {
		if (incoming_type_id == CrowdSpawnerType::type_id) {
			return std::make_shared<CrowdSpawnerType>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
