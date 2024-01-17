// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PreDecideLootEntry.hpp> 

#include <rivet/ddl/generated/PreDecideForMaterialChangeLootDropPrius.hpp>

namespace rivet::ddl::generated {
	PreDecideForMaterialChangeLootDropPrius::PreDecideForMaterialChangeLootDropPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Enabled = serialized->get_bool(Enabled_type_id, true);
		DropLootForKillerType = serialized->get_enum<rivet::ddl::generated::xa7ea7084>(DropLootForKillerType_type_id, rivet::ddl::generated::xa7ea7084_values, rivet::ddl::generated::xa7ea7084::Everybody);
		LootList = serialized->unwrap_into_many<rivet::ddl::generated::PreDecideLootEntry>(LootList_type_id); 
	}

	[[nodiscard]] auto
	PreDecideForMaterialChangeLootDropPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PreDecideForMaterialChangeLootDropPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PreDecideForMaterialChangeLootDropPrius> {
		if (incoming_type_id == PreDecideForMaterialChangeLootDropPrius::type_id) {
			return std::make_shared<PreDecideForMaterialChangeLootDropPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
