// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AssetSwapEntry.hpp>

namespace rivet::ddl::generated {
	AssetSwapEntry::AssetSwapEntry([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Platform = serialized->get_enum<rivet::ddl::generated::x104b06bd>(Platform_type_id, rivet::ddl::generated::x104b06bd_values);
		AssetPath = serialized->get_string(AssetPath_type_id); 
	}

	[[nodiscard]] auto
	AssetSwapEntry::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AssetSwapEntry::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AssetSwapEntry> {
		if (incoming_type_id == AssetSwapEntry::type_id) {
			return std::make_shared<AssetSwapEntry>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated