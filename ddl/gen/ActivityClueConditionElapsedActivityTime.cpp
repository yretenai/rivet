// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ActivityClueConditionElapsedActivityTime.hpp>

namespace rivet::ddl::generated {
	ActivityClueConditionElapsedActivityTime::ActivityClueConditionElapsedActivityTime([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		MinTime = serialized->get_float(MinTime_type_id, -1.000000);
		MaxTime = serialized->get_float(MaxTime_type_id, 5.000000); 
	}

	[[nodiscard]] auto
	ActivityClueConditionElapsedActivityTime::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ActivityClueConditionElapsedActivityTime::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ActivityClueConditionElapsedActivityTime> {
		if (incoming_type_id == ActivityClueConditionElapsedActivityTime::type_id) {
			return std::make_shared<ActivityClueConditionElapsedActivityTime>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
