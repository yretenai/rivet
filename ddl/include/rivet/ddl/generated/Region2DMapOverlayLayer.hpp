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
	struct RIVET_DDL_SHARED Region2DMapOverlayLayer : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "Region2DMapOverlayLayer";
		constexpr static rivet::rivet_type_id type_id = 0xf47583e6;

		constexpr static std::string_view MapLayerImage_type_name = "MapLayerImage";
		constexpr static rivet::rivet_type_id MapLayerImage_type_id = 0x153c871f;
		constexpr static std::string_view LayerName_type_name = "LayerName";
		constexpr static rivet::rivet_type_id LayerName_type_id = 0xbf6cefad; 

		explicit Region2DMapOverlayLayer() = default;
		explicit Region2DMapOverlayLayer([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view MapLayerImage {};
		std::string_view LayerName {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<Region2DMapOverlayLayer>;
	};
} // namespace rivet::ddl::generated

// clang-format on
