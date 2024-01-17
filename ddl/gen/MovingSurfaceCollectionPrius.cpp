// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MovingSurfacePrius.hpp> 

#include <rivet/ddl/generated/MovingSurfaceCollectionPrius.hpp>

namespace rivet::ddl::generated {
	MovingSurfaceCollectionPrius::MovingSurfaceCollectionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		SurfacePrius = serialized->unwrap_into<rivet::ddl::generated::MovingSurfacePrius>(SurfacePrius_type_id);
		MaxCollisionDistance = serialized->get_float(MaxCollisionDistance_type_id, 0.000000);
		AutoAddCollision = serialized->get_bool(AutoAddCollision_type_id, true); 
	}

	[[nodiscard]] auto
	MovingSurfaceCollectionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MovingSurfaceCollectionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MovingSurfaceCollectionPrius> {
		if (incoming_type_id == MovingSurfaceCollectionPrius::type_id) {
			return std::make_shared<MovingSurfaceCollectionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
