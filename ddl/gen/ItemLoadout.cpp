// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ItemLoadoutList.hpp> 

#include <rivet/ddl/generated/ItemLoadout.hpp>

namespace rivet::ddl::generated {
	ItemLoadout::ItemLoadout([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Name = serialized->get_string(Name_type_id, "Loadout");
		FillAllOwnedAmmo = serialized->get_bool(FillAllOwnedAmmo_type_id, false);
		ItemLoadoutLists = serialized->unwrap_into_many<rivet::ddl::generated::ItemLoadoutList>(ItemLoadoutLists_type_id); 
	}

	[[nodiscard]] auto
	ItemLoadout::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ItemLoadout::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ItemLoadout> {
		if (incoming_type_id == ItemLoadout::type_id) {
			return std::make_shared<ItemLoadout>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
