// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SoundPanelFavorites.hpp>

namespace rivet::ddl::generated {
	SoundPanelFavorites::SoundPanelFavorites([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		FavoriteBanks = serialized->get_bools(FavoriteBanks_type_id);
		FavoriteItems = serialized->get_bools(FavoriteItems_type_id); 
	}

	[[nodiscard]] auto
	SoundPanelFavorites::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SoundPanelFavorites::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SoundPanelFavorites> {
		if (incoming_type_id == SoundPanelFavorites::type_id) {
			return std::make_shared<SoundPanelFavorites>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
