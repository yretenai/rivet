// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/LootTableElement.hpp>

namespace rivet::ddl::generated {
	LootTableElement::LootTableElement([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		LootListConfig = serialized->get_string(LootListConfig_type_id, {});
		DropChance = serialized->get_float(DropChance_type_id, 10.000000); 
	}

	[[nodiscard]] auto
	LootTableElement::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	LootTableElement::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LootTableElement> {
		if (incoming_type_id == LootTableElement::type_id) {
			return std::make_shared<LootTableElement>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
