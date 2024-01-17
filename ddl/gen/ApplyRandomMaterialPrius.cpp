// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ApplyRandomMaterialInfo.hpp> 

#include <rivet/ddl/generated/ApplyRandomMaterialPrius.hpp>

namespace rivet::ddl::generated {
	ApplyRandomMaterialPrius::ApplyRandomMaterialPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ReplaceBaseMaterial = serialized->get_bool(ReplaceBaseMaterial_type_id, true);
		MaterialToReplace = serialized->get_string(MaterialToReplace_type_id, {});
		MaterialList = serialized->unwrap_into_many<rivet::ddl::generated::ApplyRandomMaterialInfo>(MaterialList_type_id);
		MaterialIsSynced = serialized->get_bool(MaterialIsSynced_type_id, true); 
	}

	[[nodiscard]] auto
	ApplyRandomMaterialPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ApplyRandomMaterialPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ApplyRandomMaterialPrius> {
		if (incoming_type_id == ApplyRandomMaterialPrius::type_id) {
			return std::make_shared<ApplyRandomMaterialPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
