// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/FocusTrackingNamedSolver.hpp>
#include <rivet/ddl/generated/FocusTrackingSolverData.hpp>
#include <rivet/ddl/generated/FocusTrackingInstData.hpp>
#include <rivet/ddl/generated/FocusTrackingNamedPosition.hpp>
#include <rivet/ddl/generated/FocusJointChainDef.hpp> 

#include <rivet/ddl/generated/FocusTrackingManagerData.hpp>

namespace rivet::ddl::generated {
	FocusTrackingManagerData::FocusTrackingManagerData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		JointChains = serialized->unwrap_into_many<rivet::ddl::generated::FocusJointChainDef>(JointChains_type_id);
		NamedFocusPositions = serialized->unwrap_into_many<rivet::ddl::generated::FocusTrackingNamedPosition>(NamedFocusPositions_type_id);
		DefaultTracking = serialized->unwrap_into<rivet::ddl::generated::FocusTrackingInstData>(DefaultTracking_type_id);
		DefaultSolverDefinitions = serialized->unwrap_into_many<rivet::ddl::generated::FocusTrackingSolverData>(DefaultSolverDefinitions_type_id);
		NamedSolverDefinitions = serialized->unwrap_into_many<rivet::ddl::generated::FocusTrackingNamedSolver>(NamedSolverDefinitions_type_id); 
	}

	[[nodiscard]] auto
	FocusTrackingManagerData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	FocusTrackingManagerData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FocusTrackingManagerData> {
		if (incoming_type_id == FocusTrackingManagerData::type_id) {
			return std::make_shared<FocusTrackingManagerData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
