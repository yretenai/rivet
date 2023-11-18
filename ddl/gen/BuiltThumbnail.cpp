// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BuiltThumbnail.hpp>

namespace rivet::ddl::generated {
	BuiltThumbnail::BuiltThumbnail([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		AssetPath = serialized->get_string(AssetPath_type_id); 
	}

	[[nodiscard]] auto
	BuiltThumbnail::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BuiltThumbnail::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BuiltThumbnail> {
		if (incoming_type_id == BuiltThumbnail::type_id) {
			return std::make_shared<BuiltThumbnail>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
