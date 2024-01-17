// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MaterialNodeInputSelectItem.hpp>

namespace rivet::ddl::generated {
	MaterialNodeInputSelectItem::MaterialNodeInputSelectItem([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Label = serialized->get_string(Label_type_id, {});
		Value = serialized->get_string(Value_type_id, {}); 
	}

	[[nodiscard]] auto
	MaterialNodeInputSelectItem::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MaterialNodeInputSelectItem::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MaterialNodeInputSelectItem> {
		if (incoming_type_id == MaterialNodeInputSelectItem::type_id) {
			return std::make_shared<MaterialNodeInputSelectItem>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
