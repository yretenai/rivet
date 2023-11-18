// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ActivityClueConditionFacingMatch.hpp>

namespace rivet::ddl::generated {
	ActivityClueConditionFacingMatch::ActivityClueConditionFacingMatch([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		MaxAngle = serialized->get_float(MaxAngle_type_id); 
	}

	[[nodiscard]] auto
	ActivityClueConditionFacingMatch::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ActivityClueConditionFacingMatch::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ActivityClueConditionFacingMatch> {
		if (incoming_type_id == ActivityClueConditionFacingMatch::type_id) {
			return std::make_shared<ActivityClueConditionFacingMatch>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
