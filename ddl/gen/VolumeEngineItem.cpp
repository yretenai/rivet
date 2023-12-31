// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VolumeEngineItem.hpp>

namespace rivet::ddl::generated {
	VolumeEngineItem::VolumeEngineItem([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		VolumeNodeShape = serialized->get_enum<rivet::ddl::generated::VolumeNodeShape>(VolumeNodeShape_type_id, rivet::ddl::generated::VolumeNodeShape_values); 
	}

	[[nodiscard]] auto
	VolumeEngineItem::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VolumeEngineItem::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VolumeEngineItem> {
		if (incoming_type_id == VolumeEngineItem::type_id) {
			return std::make_shared<VolumeEngineItem>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
