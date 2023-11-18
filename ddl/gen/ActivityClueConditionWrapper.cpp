// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ActivityClueConditionBase.hpp> 

#include <rivet/ddl/generated/ActivityClueConditionWrapper.hpp>

namespace rivet::ddl::generated {
	ActivityClueConditionWrapper::ActivityClueConditionWrapper([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Condition = serialized->unwrap_into<rivet::ddl::generated::ActivityClueConditionBase>(Condition_type_id); 
	}

	[[nodiscard]] auto
	ActivityClueConditionWrapper::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ActivityClueConditionWrapper::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ActivityClueConditionWrapper> {
		if (incoming_type_id == ActivityClueConditionWrapper::type_id) {
			return std::make_shared<ActivityClueConditionWrapper>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
