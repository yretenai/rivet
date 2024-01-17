// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/QuickNavItem.hpp>

namespace rivet::ddl::generated {
	QuickNavItem::QuickNavItem([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Label = serialized->get_string(Label_type_id, {});
		Row = serialized->get_uint32(Row_type_id, 0);
		Column = serialized->get_uint32(Column_type_id, 0); 
	}

	[[nodiscard]] auto
	QuickNavItem::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	QuickNavItem::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<QuickNavItem> {
		if (incoming_type_id == QuickNavItem::type_id) {
			return std::make_shared<QuickNavItem>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
