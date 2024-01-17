// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/NodeGraphCollectionDef.hpp>
#include <rivet/ddl/generated/VaultMetaData.hpp> 

#include <rivet/ddl/generated/BreakableDef.hpp>

namespace rivet::ddl::generated {
	BreakableDef::BreakableDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		VaultMetaData = serialized->unwrap_into<rivet::ddl::generated::VaultMetaData>(VaultMetaData_type_id);
		IconPath = serialized->get_string(IconPath_type_id, "");
		Foundation = serialized->get_string(Foundation_type_id, {});
		NodeGraphCollection = serialized->unwrap_into<rivet::ddl::generated::NodeGraphCollectionDef>(NodeGraphCollection_type_id);
		BreakableAssetList = serialized->get_strings(BreakableAssetList_type_id); 
	}

	[[nodiscard]] auto
	BreakableDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BreakableDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BreakableDef> {
		if (incoming_type_id == BreakableDef::type_id) {
			return std::make_shared<BreakableDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
