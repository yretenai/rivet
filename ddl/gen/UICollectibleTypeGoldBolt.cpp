// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/UIGoldBoltOptionTypeBase.hpp> 

#include <rivet/ddl/generated/UICollectibleTypeGoldBolt.hpp>

namespace rivet::ddl::generated {
	UICollectibleTypeGoldBolt::UICollectibleTypeGoldBolt([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): UICollectibleTypeBase(serialized) {
		RewardID = serialized->get_enum<rivet::ddl::generated::xf06c6830>(RewardID_type_id, rivet::ddl::generated::xf06c6830_values);
		Type = serialized->unwrap_into<rivet::ddl::generated::UIGoldBoltOptionTypeBase>(Type_type_id); 
	}

	[[nodiscard]] auto
	UICollectibleTypeGoldBolt::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UICollectibleTypeGoldBolt::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UICollectibleTypeGoldBolt> {
		if (incoming_type_id == UICollectibleTypeGoldBolt::type_id) {
			return std::make_shared<UICollectibleTypeGoldBolt>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
