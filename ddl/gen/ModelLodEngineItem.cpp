// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ModelLodEngineItem.hpp>

namespace rivet::ddl::generated {
	ModelLodEngineItem::ModelLodEngineItem([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Lod = serialized->get_int32(Lod_type_id); 
	}

	[[nodiscard]] auto
	ModelLodEngineItem::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ModelLodEngineItem::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ModelLodEngineItem> {
		if (incoming_type_id == ModelLodEngineItem::type_id) {
			return std::make_shared<ModelLodEngineItem>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
