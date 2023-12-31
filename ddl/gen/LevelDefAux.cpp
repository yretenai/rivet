// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/RegionFolderNode.hpp> 

#include <rivet/ddl/generated/LevelDefAux.hpp>

namespace rivet::ddl::generated {
	LevelDefAux::LevelDefAux([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		OverlayFolders = serialized->unwrap_into_many<rivet::ddl::generated::RegionFolderNode>(OverlayFolders_type_id); 
	}

	[[nodiscard]] auto
	LevelDefAux::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	LevelDefAux::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LevelDefAux> {
		if (incoming_type_id == LevelDefAux::type_id) {
			return std::make_shared<LevelDefAux>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
