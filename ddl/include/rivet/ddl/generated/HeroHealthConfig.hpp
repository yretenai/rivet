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
	struct RIVET_DDL_SHARED HeroHealthConfig : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "HeroHealthConfig";
		constexpr static rivet::rivet_type_id type_id = 0xd5e3d13d;

		constexpr static std::string_view PostCinematicImmunity_type_name = "PostCinematicImmunity";
		constexpr static rivet::rivet_type_id PostCinematicImmunity_type_id = 0xacaf5004;
		constexpr static std::string_view PostFadeInImmunity_type_name = "PostFadeInImmunity";
		constexpr static rivet::rivet_type_id PostFadeInImmunity_type_id = 0xf08f0e37;
		constexpr static std::string_view PostHitReactImmunity_type_name = "PostHitReactImmunity";
		constexpr static rivet::rivet_type_id PostHitReactImmunity_type_id = 0x195242ce; 

		explicit HeroHealthConfig() = default;
		explicit HeroHealthConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float PostCinematicImmunity {};
		float PostFadeInImmunity {};
		float PostHitReactImmunity {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroHealthConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
