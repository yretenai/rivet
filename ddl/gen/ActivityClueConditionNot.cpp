// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ActivityClueConditionBase.hpp> 

#include <rivet/ddl/generated/ActivityClueConditionNot.hpp>

namespace rivet::ddl::generated {
	ActivityClueConditionNot::ActivityClueConditionNot([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		InverseCondition = serialized->unwrap_into<rivet::ddl::generated::ActivityClueConditionBase>(InverseCondition_type_id); 
	}

	[[nodiscard]] auto
	ActivityClueConditionNot::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ActivityClueConditionNot::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ActivityClueConditionNot> {
		if (incoming_type_id == ActivityClueConditionNot::type_id) {
			return std::make_shared<ActivityClueConditionNot>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated