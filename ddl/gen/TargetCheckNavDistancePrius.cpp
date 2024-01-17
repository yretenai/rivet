// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TargetCheckNavDistancePrius.hpp>

namespace rivet::ddl::generated {
	TargetCheckNavDistancePrius::TargetCheckNavDistancePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): TargetCheckBasePrius(serialized) {
		ActorHandle = serialized->get_uint32(ActorHandle_type_id, 0);
		DistanceMin = serialized->get_float(DistanceMin_type_id, 0.000000);
		DistanceMax = serialized->get_float(DistanceMax_type_id, 30.000000); 
	}

	[[nodiscard]] auto
	TargetCheckNavDistancePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TargetCheckNavDistancePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TargetCheckNavDistancePrius> {
		if (incoming_type_id == TargetCheckNavDistancePrius::type_id) {
			return std::make_shared<TargetCheckNavDistancePrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
