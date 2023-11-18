// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ActivityReward.hpp> 

#include <rivet/ddl/generated/MissionActivityCardInfo.hpp>

namespace rivet::ddl::generated {
	MissionActivityCardInfo::MissionActivityCardInfo([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Enabled = serialized->get_bool(Enabled_type_id);
		ActivityDescTagOverride = serialized->get_string(ActivityDescTagOverride_type_id);
		ActivitySmallImage = serialized->get_string(ActivitySmallImage_type_id);
		ActivityLargeImage = serialized->get_string(ActivityLargeImage_type_id);
		Reward = serialized->unwrap_into<rivet::ddl::generated::ActivityReward>(Reward_type_id); 
	}

	[[nodiscard]] auto
	MissionActivityCardInfo::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MissionActivityCardInfo::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MissionActivityCardInfo> {
		if (incoming_type_id == MissionActivityCardInfo::type_id) {
			return std::make_shared<MissionActivityCardInfo>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
