// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TargetShapeSphere.hpp>

namespace rivet::ddl::generated {
	TargetShapeSphere::TargetShapeSphere([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Radius = serialized->get_float(Radius_type_id); 
	}

	[[nodiscard]] auto
	TargetShapeSphere::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TargetShapeSphere::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TargetShapeSphere> {
		if (incoming_type_id == TargetShapeSphere::type_id) {
			return std::make_shared<TargetShapeSphere>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
