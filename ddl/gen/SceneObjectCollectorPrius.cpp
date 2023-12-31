// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SceneObjectCollectorPrius.hpp>

namespace rivet::ddl::generated {
	SceneObjectCollectorPrius::SceneObjectCollectorPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		EncompassingVolume = serialized->get_uint64(EncompassingVolume_type_id);
		MaxModels = serialized->get_uint32(MaxModels_type_id);
		MaxLights = serialized->get_uint32(MaxLights_type_id);
		MaxVolumes = serialized->get_uint32(MaxVolumes_type_id);
		MaxDecals = serialized->get_uint32(MaxDecals_type_id);
		MaxCurves = serialized->get_uint32(MaxCurves_type_id);
		MaxVisualEffects = serialized->get_uint32(MaxVisualEffects_type_id);
		IncludeEnvProbes = serialized->get_bool(IncludeEnvProbes_type_id);
		ExcludeCollectors = serialized->get_uint64s(ExcludeCollectors_type_id);
		IncludeZones = serialized->get_strings(IncludeZones_type_id); 
	}

	[[nodiscard]] auto
	SceneObjectCollectorPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SceneObjectCollectorPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SceneObjectCollectorPrius> {
		if (incoming_type_id == SceneObjectCollectorPrius::type_id) {
			return std::make_shared<SceneObjectCollectorPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
