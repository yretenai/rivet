// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SkinItemOverride.hpp> 

#include <rivet/ddl/generated/ItemLoadoutListElement.hpp>

namespace rivet::ddl::generated {
	ItemLoadoutListElement::ItemLoadoutListElement([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Item = serialized->get_string(Item_type_id);
		Count = serialized->get_uint32(Count_type_id);
		ItemProgression = serialized->get_float(ItemProgression_type_id);
		AutoEquip = serialized->get_bool(AutoEquip_type_id);
		EquipTarget = serialized->get_string(EquipTarget_type_id);
		SkinItemOverrideList = serialized->unwrap_into_many<rivet::ddl::generated::SkinItemOverride>(SkinItemOverrideList_type_id); 
	}

	auto
	ItemLoadoutListElement::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	ItemLoadoutListElement::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ItemLoadoutListElement::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ItemLoadoutListElement> {
		if (incoming_type_id == ItemLoadoutListElement::type_id) {
			return std::make_shared<ItemLoadoutListElement>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
