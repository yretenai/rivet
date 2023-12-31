// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ModelDef.hpp> 

#include <rivet/ddl/generated/ModelAssetEngineItem.hpp>

namespace rivet::ddl::generated {
	ModelAssetEngineItem::ModelAssetEngineItem([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		AssetPath = serialized->get_string(AssetPath_type_id);
		ModelDef = serialized->unwrap_into<rivet::ddl::generated::ModelDef>(ModelDef_type_id); 
	}

	[[nodiscard]] auto
	ModelAssetEngineItem::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ModelAssetEngineItem::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ModelAssetEngineItem> {
		if (incoming_type_id == ModelAssetEngineItem::type_id) {
			return std::make_shared<ModelAssetEngineItem>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
