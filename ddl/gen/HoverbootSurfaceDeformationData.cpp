// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/HoverbootSurfaceDeformationData.hpp>

namespace rivet::ddl::generated {
	HoverbootSurfaceDeformationData::HoverbootSurfaceDeformationData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		SurfaceDeformerActor = serialized->get_string(SurfaceDeformerActor_type_id, {});
		LeftFootLocator = serialized->get_string(LeftFootLocator_type_id, {});
		RightFootLocator = serialized->get_string(RightFootLocator_type_id, {});
		AttachmentOffset = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(AttachmentOffset_type_id); 
	}

	[[nodiscard]] auto
	HoverbootSurfaceDeformationData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HoverbootSurfaceDeformationData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HoverbootSurfaceDeformationData> {
		if (incoming_type_id == HoverbootSurfaceDeformationData::type_id) {
			return std::make_shared<HoverbootSurfaceDeformationData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
