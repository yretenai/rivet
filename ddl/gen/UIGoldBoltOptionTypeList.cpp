// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/UIGoldBoltOptionTypeList.hpp>

namespace rivet::ddl::generated {
	UIGoldBoltOptionTypeList::UIGoldBoltOptionTypeList([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): UIGoldBoltOptionTypeBase(serialized) {
		Options = serialized->get_strings(Options_type_id); 
	}

	[[nodiscard]] auto
	UIGoldBoltOptionTypeList::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UIGoldBoltOptionTypeList::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UIGoldBoltOptionTypeList> {
		if (incoming_type_id == UIGoldBoltOptionTypeList::type_id) {
			return std::make_shared<UIGoldBoltOptionTypeList>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
