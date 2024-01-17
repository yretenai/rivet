// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/QueryVolumeShapeCylinder.hpp>

namespace rivet::ddl::generated {
	QueryVolumeShapeCylinder::QueryVolumeShapeCylinder([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): QueryVolumeShape(serialized) {
		Length = serialized->get_float(Length_type_id, 1.000000);
		Radius = serialized->get_float(Radius_type_id, 1.000000); 
	}

	[[nodiscard]] auto
	QueryVolumeShapeCylinder::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	QueryVolumeShapeCylinder::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<QueryVolumeShapeCylinder> {
		if (incoming_type_id == QueryVolumeShapeCylinder::type_id) {
			return std::make_shared<QueryVolumeShapeCylinder>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
