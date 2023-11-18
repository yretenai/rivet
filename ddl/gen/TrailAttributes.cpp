// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TrailAttributes.hpp>

namespace rivet::ddl::generated {
	TrailAttributes::TrailAttributes([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		DistanceThreshold = serialized->get_float(DistanceThreshold_type_id);
		ParticleLifetime = serialized->get_float(ParticleLifetime_type_id);
		CreaseFading = serialized->get_bool(CreaseFading_type_id);
		Subdivision = serialized->get_float(Subdivision_type_id);
		MaxLength = serialized->get_float(MaxLength_type_id);
		UV0Tiling = serialized->get_float(UV0Tiling_type_id);
		UV1Tiling = serialized->get_float(UV1Tiling_type_id); 
	}

	[[nodiscard]] auto
	TrailAttributes::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TrailAttributes::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TrailAttributes> {
		if (incoming_type_id == TrailAttributes::type_id) {
			return std::make_shared<TrailAttributes>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
