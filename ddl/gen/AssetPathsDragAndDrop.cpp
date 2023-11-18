// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AssetPathsDragAndDrop.hpp>

namespace rivet::ddl::generated {
	AssetPathsDragAndDrop::AssetPathsDragAndDrop([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		AssetPathArray = serialized->get_strings(AssetPathArray_type_id); 
	}

	[[nodiscard]] auto
	AssetPathsDragAndDrop::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AssetPathsDragAndDrop::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AssetPathsDragAndDrop> {
		if (incoming_type_id == AssetPathsDragAndDrop::type_id) {
			return std::make_shared<AssetPathsDragAndDrop>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
