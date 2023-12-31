// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/WwiseSwitch.hpp> 

#include <rivet/ddl/generated/WwiseSwitchSelectItem.hpp>

namespace rivet::ddl::generated {
	WwiseSwitchSelectItem::WwiseSwitchSelectItem([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		SwitchGroupList = serialized->unwrap_into_many<rivet::ddl::generated::WwiseSwitch>(SwitchGroupList_type_id); 
	}

	[[nodiscard]] auto
	WwiseSwitchSelectItem::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	WwiseSwitchSelectItem::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WwiseSwitchSelectItem> {
		if (incoming_type_id == WwiseSwitchSelectItem::type_id) {
			return std::make_shared<WwiseSwitchSelectItem>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
