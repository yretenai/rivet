// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GoldBoltRewardItem.hpp>

namespace rivet::ddl::generated {
	GoldBoltRewardItem::GoldBoltRewardItem([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Name = serialized->get_string(Name_type_id, {});
		GoldBoltType = serialized->get_enum<rivet::ddl::generated::xf06c6830>(GoldBoltType_type_id, rivet::ddl::generated::xf06c6830_values, rivet::ddl::generated::xf06c6830::None); 
	}

	[[nodiscard]] auto
	GoldBoltRewardItem::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GoldBoltRewardItem::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GoldBoltRewardItem> {
		if (incoming_type_id == GoldBoltRewardItem::type_id) {
			return std::make_shared<GoldBoltRewardItem>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
