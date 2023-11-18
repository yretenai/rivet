// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AssetFileList.hpp>

namespace rivet::ddl::generated {
	AssetFileList::AssetFileList([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		AssetPaths = serialized->get_strings(AssetPaths_type_id);
		Force = serialized->get_bool(Force_type_id); 
	}

	[[nodiscard]] auto
	AssetFileList::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AssetFileList::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AssetFileList> {
		if (incoming_type_id == AssetFileList::type_id) {
			return std::make_shared<AssetFileList>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
