// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/UICollectibleTypeGoldBolt.hpp>
#include <rivet/ddl/generated/UICollectibleTypeRuinToken.hpp>
#include <rivet/ddl/generated/UICollectibleTypeRynoPlan.hpp> 

#include <rivet/ddl/generated/UICollectibleTypeBase.hpp>

namespace rivet::ddl::generated {
	UICollectibleTypeBase::UICollectibleTypeBase([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {

	}

	[[nodiscard]] auto
	UICollectibleTypeBase::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UICollectibleTypeBase::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UICollectibleTypeBase> {
		if (incoming_type_id == UICollectibleTypeBase::type_id) {
			return std::make_shared<UICollectibleTypeBase>(serialized);
		}

		auto UICollectibleTypeRynoPlan_ptr = UICollectibleTypeRynoPlan::from_substruct(incoming_type_id, serialized);
		if (UICollectibleTypeRynoPlan_ptr != nullptr) {
			return UICollectibleTypeRynoPlan_ptr;
		}

		auto UICollectibleTypeGoldBolt_ptr = UICollectibleTypeGoldBolt::from_substruct(incoming_type_id, serialized);
		if (UICollectibleTypeGoldBolt_ptr != nullptr) {
			return UICollectibleTypeGoldBolt_ptr;
		}

		auto UICollectibleTypeRuinToken_ptr = UICollectibleTypeRuinToken::from_substruct(incoming_type_id, serialized);
		if (UICollectibleTypeRuinToken_ptr != nullptr) {
			return UICollectibleTypeRuinToken_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
