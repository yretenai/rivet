// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ItemListElement.hpp> 

#include <rivet/ddl/generated/ItemContainerPrius.hpp>

namespace rivet::ddl::generated {
	ItemContainerPrius::ItemContainerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Items = serialized->unwrap_into_many<rivet::ddl::generated::ItemListElement>(Items_type_id);
		DeleteOnSalvage = serialized->get_bool(DeleteOnSalvage_type_id, true);
		RespawnItemsTime = serialized->get_float(RespawnItemsTime_type_id, 300.000000); 
	}

	[[nodiscard]] auto
	ItemContainerPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ItemContainerPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ItemContainerPrius> {
		if (incoming_type_id == ItemContainerPrius::type_id) {
			return std::make_shared<ItemContainerPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
