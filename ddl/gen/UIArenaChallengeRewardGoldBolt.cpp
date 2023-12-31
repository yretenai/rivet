// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/UIArenaChallengeRewardGoldBolt.hpp>

namespace rivet::ddl::generated {
	UIArenaChallengeRewardGoldBolt::UIArenaChallengeRewardGoldBolt([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): UIArenaChallengeReward(serialized) {

	}

	[[nodiscard]] auto
	UIArenaChallengeRewardGoldBolt::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UIArenaChallengeRewardGoldBolt::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UIArenaChallengeRewardGoldBolt> {
		if (incoming_type_id == UIArenaChallengeRewardGoldBolt::type_id) {
			return std::make_shared<UIArenaChallengeRewardGoldBolt>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
