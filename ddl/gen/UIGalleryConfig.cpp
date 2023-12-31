// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/UIGalleryEntry.hpp> 

#include <rivet/ddl/generated/UIGalleryConfig.hpp>

namespace rivet::ddl::generated {
	UIGalleryConfig::UIGalleryConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		Entries = serialized->unwrap_into_many<rivet::ddl::generated::UIGalleryEntry>(Entries_type_id); 
	}

	[[nodiscard]] auto
	UIGalleryConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UIGalleryConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UIGalleryConfig> {
		if (incoming_type_id == UIGalleryConfig::type_id) {
			return std::make_shared<UIGalleryConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
