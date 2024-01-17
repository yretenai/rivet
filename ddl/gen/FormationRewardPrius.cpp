// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/FormationRewardPrius.hpp>

namespace rivet::ddl::generated {
	FormationRewardPrius::FormationRewardPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		NumRewards = serialized->get_int32(NumRewards_type_id, 1);
		HealthPickup = serialized->get_string(HealthPickup_type_id, {});
		AmmoPickup = serialized->get_string(AmmoPickup_type_id, {}); 
	}

	[[nodiscard]] auto
	FormationRewardPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	FormationRewardPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FormationRewardPrius> {
		if (incoming_type_id == FormationRewardPrius::type_id) {
			return std::make_shared<FormationRewardPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
