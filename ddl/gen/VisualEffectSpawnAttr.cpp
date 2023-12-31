// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VisualEffectSpawnAttr.hpp>

namespace rivet::ddl::generated {
	VisualEffectSpawnAttr::VisualEffectSpawnAttr([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		SpawnCondition = serialized->get_enum<rivet::ddl::generated::SpawnCondition>(SpawnCondition_type_id, rivet::ddl::generated::SpawnCondition_values);
		CoolOffTime = serialized->get_float(CoolOffTime_type_id);
		Radius = serialized->get_float(Radius_type_id); 
	}

	[[nodiscard]] auto
	VisualEffectSpawnAttr::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VisualEffectSpawnAttr::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VisualEffectSpawnAttr> {
		if (incoming_type_id == VisualEffectSpawnAttr::type_id) {
			return std::make_shared<VisualEffectSpawnAttr>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
