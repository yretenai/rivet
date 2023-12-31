// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/JointDef.hpp> 

#include <rivet/ddl/generated/SkeletonDef.hpp>

namespace rivet::ddl::generated {
	SkeletonDef::SkeletonDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Name = serialized->get_string(Name_type_id);
		Joints = serialized->unwrap_into_many<rivet::ddl::generated::JointDef>(Joints_type_id); 
	}

	[[nodiscard]] auto
	SkeletonDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SkeletonDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SkeletonDef> {
		if (incoming_type_id == SkeletonDef::type_id) {
			return std::make_shared<SkeletonDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
