// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/FocusTrackingSolverData.hpp>
#include <rivet/ddl/generated/FocusTrackingInstData.hpp> 

#include <rivet/ddl/generated/GameFocusTrackingManagerData.hpp>

namespace rivet::ddl::generated {
	GameFocusTrackingManagerData::GameFocusTrackingManagerData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		AlwaysEngaged = serialized->get_bool(AlwaysEngaged_type_id);
		DefaultTracking_Engaged = serialized->unwrap_into<rivet::ddl::generated::FocusTrackingInstData>(DefaultTracking_Engaged_type_id);
		DefaultSolverDefinitions_Engaged = serialized->unwrap_into_many<rivet::ddl::generated::FocusTrackingSolverData>(DefaultSolverDefinitions_Engaged_type_id); 
	}

	[[nodiscard]] auto
	GameFocusTrackingManagerData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GameFocusTrackingManagerData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GameFocusTrackingManagerData> {
		if (incoming_type_id == GameFocusTrackingManagerData::type_id) {
			return std::make_shared<GameFocusTrackingManagerData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
