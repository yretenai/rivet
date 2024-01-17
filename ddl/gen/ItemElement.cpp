// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ItemElement.hpp>

namespace rivet::ddl::generated {
	ItemElement::ItemElement([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ItemConfig = serialized->get_string(ItemConfig_type_id, {});
		DropWeight = serialized->get_float(DropWeight_type_id, 1.000000); 
	}

	[[nodiscard]] auto
	ItemElement::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ItemElement::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ItemElement> {
		if (incoming_type_id == ItemElement::type_id) {
			return std::make_shared<ItemElement>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
