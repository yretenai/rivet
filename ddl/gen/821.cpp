// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/UIArenaChallengeRewardGeneric.hpp>

namespace rivet::ddl::generated {
	UIArenaChallengeRewardGeneric::UIArenaChallengeRewardGeneric([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): UIArenaChallengeReward(serialized) {
		Name = serialized->get_string(Name_type_id);
		Icon = serialized->get_string(Icon_type_id); 
	}

	auto
	UIArenaChallengeRewardGeneric::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	UIArenaChallengeRewardGeneric::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UIArenaChallengeRewardGeneric::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UIArenaChallengeRewardGeneric> {
		if (incoming_type_id == UIArenaChallengeRewardGeneric::type_id) {
			return std::make_shared<UIArenaChallengeRewardGeneric>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
