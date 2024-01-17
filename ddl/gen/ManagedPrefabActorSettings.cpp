// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ManagedPrefabActorSettings.hpp>

namespace rivet::ddl::generated {
	ManagedPrefabActorSettings::ManagedPrefabActorSettings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		AllSystemsEnabled = serialized->get_bool(AllSystemsEnabled_type_id, true);
		MaxSpawnedAllSystemsTotal = serialized->get_int32(MaxSpawnedAllSystemsTotal_type_id, -1); 
	}

	[[nodiscard]] auto
	ManagedPrefabActorSettings::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ManagedPrefabActorSettings::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ManagedPrefabActorSettings> {
		if (incoming_type_id == ManagedPrefabActorSettings::type_id) {
			return std::make_shared<ManagedPrefabActorSettings>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
