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
	struct RIVET_DDL_SHARED ShotTrajectoryDrawPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "ShotTrajectoryDrawPrius";
		constexpr static rivet::rivet_type_id type_id = 0x565ca8bd;

		constexpr static std::string_view ArcMaterial_type_name = "ArcMaterial";
		constexpr static rivet::rivet_type_id ArcMaterial_type_id = 0xb989a1;
		constexpr static std::string_view ArcWidth_type_name = "ArcWidth";
		constexpr static rivet::rivet_type_id ArcWidth_type_id = 0xfd0ce3fc;
		constexpr static std::string_view DecalTexture_type_name = "DecalTexture";
		constexpr static rivet::rivet_type_id DecalTexture_type_id = 0x94b7e712;
		constexpr static std::string_view DecalSize_type_name = "DecalSize";
		constexpr static rivet::rivet_type_id DecalSize_type_id = 0xaef2b156;
		constexpr static std::string_view PointOfImpact_type_name = "PointOfImpact";
		constexpr static rivet::rivet_type_id PointOfImpact_type_id = 0xf37be841; 

		explicit ShotTrajectoryDrawPrius() = default;
		explicit ShotTrajectoryDrawPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view ArcMaterial {};
		float ArcWidth {};
		std::string_view DecalTexture {};
		float DecalSize {};
		std::string_view PointOfImpact {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ShotTrajectoryDrawPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
