// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AssetDbGetMaterialInfoInput.hpp>

namespace rivet::ddl::generated {
	AssetDbGetMaterialInfoInput::AssetDbGetMaterialInfoInput([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Id = serialized->get_uint32(Id_type_id);
		MaterialPath = serialized->get_string(MaterialPath_type_id);
		MaterialTemplatePath = serialized->get_string(MaterialTemplatePath_type_id); 
	}

	[[nodiscard]] auto
	AssetDbGetMaterialInfoInput::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AssetDbGetMaterialInfoInput::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AssetDbGetMaterialInfoInput> {
		if (incoming_type_id == AssetDbGetMaterialInfoInput::type_id) {
			return std::make_shared<AssetDbGetMaterialInfoInput>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
