// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ActivityReward.hpp> 

#include <rivet/ddl/generated/ArenaCupActivityData.hpp>

namespace rivet::ddl::generated {
	ArenaCupActivityData::ArenaCupActivityData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Enabled = serialized->get_bool(Enabled_type_id, true);
		ActivityId = serialized->get_string(ActivityId_type_id, {});
		NameLocTag = serialized->get_string(NameLocTag_type_id, {});
		DescLocTag = serialized->get_string(DescLocTag_type_id, {});
		SmallImage = serialized->get_string(SmallImage_type_id, {});
		LargeImage = serialized->get_string(LargeImage_type_id, {});
		PlaytimeEstimate = serialized->get_uint32(PlaytimeEstimate_type_id, 30);
		Reward = serialized->unwrap_into<rivet::ddl::generated::ActivityReward>(Reward_type_id); 
	}

	[[nodiscard]] auto
	ArenaCupActivityData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ArenaCupActivityData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ArenaCupActivityData> {
		if (incoming_type_id == ArenaCupActivityData::type_id) {
			return std::make_shared<ArenaCupActivityData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
