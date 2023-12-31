// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MaterialHighlightEngineItem.hpp>

namespace rivet::ddl::generated {
	MaterialHighlightEngineItem::MaterialHighlightEngineItem([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		MaterialMappingName = serialized->get_strings(MaterialMappingName_type_id); 
	}

	[[nodiscard]] auto
	MaterialHighlightEngineItem::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MaterialHighlightEngineItem::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MaterialHighlightEngineItem> {
		if (incoming_type_id == MaterialHighlightEngineItem::type_id) {
			return std::make_shared<MaterialHighlightEngineItem>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
