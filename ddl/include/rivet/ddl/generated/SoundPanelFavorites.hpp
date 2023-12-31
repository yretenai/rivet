// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

// clang-format off

#include <cstdint>
#include <memory>
#include <string_view>
#include <vector>

#include <rivet/hash/type_id.hpp>
#include <rivet/rivet_array.hpp>
#include <rivet/rivet_keywords.hpp>
#include <rivet/structures/rivet_serialization.hpp>

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED SoundPanelFavorites : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "SoundPanelFavorites";
		constexpr static rivet::rivet_type_id type_id = 0x99065be0;

		constexpr static std::string_view FavoriteBanks_type_name = "FavoriteBanks";
		constexpr static rivet::rivet_type_id FavoriteBanks_type_id = 0xe69d9323;
		constexpr static std::string_view FavoriteItems_type_name = "FavoriteItems";
		constexpr static rivet::rivet_type_id FavoriteItems_type_id = 0xac854df8; 

		explicit SoundPanelFavorites() = default;
		explicit SoundPanelFavorites([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<bool> FavoriteBanks {};
		std::vector<bool> FavoriteItems {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SoundPanelFavorites>;
	};
} // namespace rivet::ddl::generated

// clang-format on
