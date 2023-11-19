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
	struct RIVET_DDL_SHARED VolumetricCloudsShadowDef : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "VolumetricCloudsShadowDef";
		constexpr static rivet::rivet_type_id type_id = 0x1368744d;

		constexpr static std::string_view EnabledShadow_type_name = "EnabledShadow";
		constexpr static rivet::rivet_type_id EnabledShadow_type_id = 0x38477dd8;
		constexpr static std::string_view ShadowBrightness_type_name = "ShadowBrightness";
		constexpr static rivet::rivet_type_id ShadowBrightness_type_id = 0xf14ce9c1;
		constexpr static std::string_view ShadowTiling_type_name = "ShadowTiling";
		constexpr static rivet::rivet_type_id ShadowTiling_type_id = 0x3556cd9;
		constexpr static std::string_view ShadowSpeed_type_name = "ShadowSpeed";
		constexpr static rivet::rivet_type_id ShadowSpeed_type_id = 0x3f0e8c7d; 

		explicit VolumetricCloudsShadowDef() = default;
		explicit VolumetricCloudsShadowDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool EnabledShadow {};
		float ShadowBrightness {};
		float ShadowTiling {};
		float ShadowSpeed {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VolumetricCloudsShadowDef>;
	};
} // namespace rivet::ddl::generated

// clang-format on