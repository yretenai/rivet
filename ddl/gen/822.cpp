// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/UIArenaChallengeRewardBolts.hpp>

namespace rivet::ddl::generated {
	UIArenaChallengeRewardBolts::UIArenaChallengeRewardBolts([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): UIArenaChallengeReward(serialized) {
		Amount = serialized->get_uint32(Amount_type_id); 
	}

	auto
	UIArenaChallengeRewardBolts::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	UIArenaChallengeRewardBolts::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UIArenaChallengeRewardBolts::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UIArenaChallengeRewardBolts> {
		if (incoming_type_id == UIArenaChallengeRewardBolts::type_id) {
			return std::make_shared<UIArenaChallengeRewardBolts>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
