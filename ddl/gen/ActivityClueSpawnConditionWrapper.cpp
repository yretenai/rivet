// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ActivityClueSpawnConditionBase.hpp> 

#include <rivet/ddl/generated/ActivityClueSpawnConditionWrapper.hpp>

namespace rivet::ddl::generated {
	ActivityClueSpawnConditionWrapper::ActivityClueSpawnConditionWrapper([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Condition = serialized->unwrap_into<rivet::ddl::generated::ActivityClueSpawnConditionBase>(Condition_type_id); 
	}

	[[nodiscard]] auto
	ActivityClueSpawnConditionWrapper::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ActivityClueSpawnConditionWrapper::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ActivityClueSpawnConditionWrapper> {
		if (incoming_type_id == ActivityClueSpawnConditionWrapper::type_id) {
			return std::make_shared<ActivityClueSpawnConditionWrapper>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
