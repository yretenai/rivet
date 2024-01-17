// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/LoadURLEntry.hpp>

namespace rivet::ddl::generated {
	LoadURLEntry::LoadURLEntry([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		DisplayName = serialized->get_string(DisplayName_type_id, {});
		URL = serialized->get_string(URL_type_id, {});
		FontFolderPath = serialized->get_string(FontFolderPath_type_id, {});
		DefaultFontName = serialized->get_string(DefaultFontName_type_id, {}); 
	}

	[[nodiscard]] auto
	LoadURLEntry::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	LoadURLEntry::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LoadURLEntry> {
		if (incoming_type_id == LoadURLEntry::type_id) {
			return std::make_shared<LoadURLEntry>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
