// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/Nav3DSmoothPathStepElement.hpp>
#include <rivet/ddl/generated/SVOAStarDebugStepElement.hpp>
#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/SVOAStarDebugDef.hpp>

namespace rivet::ddl::generated {
	SVOAStarDebugDef::SVOAStarDebugDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Start = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(Start_type_id);
		Steps = serialized->unwrap_into_many<rivet::ddl::generated::SVOAStarDebugStepElement>(Steps_type_id);
		End = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(End_type_id);
		PathPoints = serialized->unwrap_into_many<rivet::ddl::generated::DDLVector3>(PathPoints_type_id);
		PathHandles = serialized->get_uint64s(PathHandles_type_id);
		SmoothingConsideredNeighbors = serialized->get_bools(SmoothingConsideredNeighbors_type_id);
		SmoothPathSteps = serialized->unwrap_into_many<rivet::ddl::generated::Nav3DSmoothPathStepElement>(SmoothPathSteps_type_id); 
	}

	[[nodiscard]] auto
	SVOAStarDebugDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SVOAStarDebugDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SVOAStarDebugDef> {
		if (incoming_type_id == SVOAStarDebugDef::type_id) {
			return std::make_shared<SVOAStarDebugDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated