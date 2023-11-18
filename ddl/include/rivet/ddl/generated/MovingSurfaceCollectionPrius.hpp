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
	struct MovingSurfacePrius; 

	struct RIVET_DDL_SHARED MovingSurfaceCollectionPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "MovingSurfaceCollectionPrius";
		constexpr static rivet::rivet_type_id type_id = 0xdfed1dfc;

		constexpr static std::string_view SurfacePrius_type_name = "SurfacePrius";
		constexpr static rivet::rivet_type_id SurfacePrius_type_id = 0x627e6c23;
		constexpr static std::string_view MaxCollisionDistance_type_name = "MaxCollisionDistance";
		constexpr static rivet::rivet_type_id MaxCollisionDistance_type_id = 0xe79348c;
		constexpr static std::string_view AutoAddCollision_type_name = "AutoAddCollision";
		constexpr static rivet::rivet_type_id AutoAddCollision_type_id = 0x79f3f40d; 

		explicit MovingSurfaceCollectionPrius() = default;
		explicit MovingSurfaceCollectionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::MovingSurfacePrius> SurfacePrius {};
		float MaxCollisionDistance {};
		bool AutoAddCollision {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MovingSurfaceCollectionPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
