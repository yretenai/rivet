// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ActivityClueConditionWrapper.hpp> 

#include <rivet/ddl/generated/ActivityClueConditionOr.hpp>

namespace rivet::ddl::generated {
	ActivityClueConditionOr::ActivityClueConditionOr([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		AnyConditions = serialized->unwrap_into_many<rivet::ddl::generated::ActivityClueConditionWrapper>(AnyConditions_type_id); 
	}

	[[nodiscard]] auto
	ActivityClueConditionOr::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ActivityClueConditionOr::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ActivityClueConditionOr> {
		if (incoming_type_id == ActivityClueConditionOr::type_id) {
			return std::make_shared<ActivityClueConditionOr>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
