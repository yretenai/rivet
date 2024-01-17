// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ObstructionShapeCylinder.hpp>
#include <rivet/ddl/generated/ObstructionShapeOBB.hpp>
#include <rivet/ddl/generated/ObstructionShapeAABB.hpp>
#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/NavMeshObstructionShapeBase.hpp>

namespace rivet::ddl::generated {
	NavMeshObstructionShapeBase::NavMeshObstructionShapeBase([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		CenterOffset = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(CenterOffset_type_id);
		UseBoundingBoxInfo = serialized->get_bool(UseBoundingBoxInfo_type_id, true); 
	}

	[[nodiscard]] auto
	NavMeshObstructionShapeBase::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	NavMeshObstructionShapeBase::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<NavMeshObstructionShapeBase> {
		if (incoming_type_id == NavMeshObstructionShapeBase::type_id) {
			return std::make_shared<NavMeshObstructionShapeBase>(serialized);
		}

		auto ObstructionShapeAABB_ptr = ObstructionShapeAABB::from_substruct(incoming_type_id, serialized);
		if (ObstructionShapeAABB_ptr != nullptr) {
			return ObstructionShapeAABB_ptr;
		}

		auto ObstructionShapeOBB_ptr = ObstructionShapeOBB::from_substruct(incoming_type_id, serialized);
		if (ObstructionShapeOBB_ptr != nullptr) {
			return ObstructionShapeOBB_ptr;
		}

		auto ObstructionShapeCylinder_ptr = ObstructionShapeCylinder::from_substruct(incoming_type_id, serialized);
		if (ObstructionShapeCylinder_ptr != nullptr) {
			return ObstructionShapeCylinder_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
