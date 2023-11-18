// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TaskDef.hpp>
#include <rivet/ddl/generated/ActivityReward.hpp> 

#include <rivet/ddl/generated/ActivityDef.hpp>

namespace rivet::ddl::generated {
	ActivityDef::ActivityDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ActivityDefBase(serialized) {
		Category = serialized->get_enum<rivet::ddl::generated::xca2817ca>(Category_type_id, rivet::ddl::generated::xca2817ca_values);
		SubCategory = serialized->get_enum<rivet::ddl::generated::xbd8d5c4d>(SubCategory_type_id, rivet::ddl::generated::xbd8d5c4d_values);
		LargeImagePath = serialized->get_string(LargeImagePath_type_id);
		SmallImagePath = serialized->get_string(SmallImagePath_type_id);
		Rewards = serialized->unwrap_into_many<rivet::ddl::generated::ActivityReward>(Rewards_type_id);
		Tasks = serialized->unwrap_into_many<rivet::ddl::generated::TaskDef>(Tasks_type_id); 
	}

	[[nodiscard]] auto
	ActivityDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ActivityDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ActivityDef> {
		if (incoming_type_id == ActivityDef::type_id) {
			return std::make_shared<ActivityDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
