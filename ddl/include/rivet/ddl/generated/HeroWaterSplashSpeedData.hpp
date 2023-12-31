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
	struct RIVET_DDL_SHARED HeroWaterSplashSpeedData : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "HeroWaterSplashSpeedData";
		constexpr static rivet::rivet_type_id type_id = 0x6b22e819;

		constexpr static std::string_view SplashSmallSpeed_type_name = "SplashSmallSpeed";
		constexpr static rivet::rivet_type_id SplashSmallSpeed_type_id = 0x496460b6;
		constexpr static std::string_view SplashMediumSpeed_type_name = "SplashMediumSpeed";
		constexpr static rivet::rivet_type_id SplashMediumSpeed_type_id = 0xb13f4f72;
		constexpr static std::string_view SplashLargeSpeed_type_name = "SplashLargeSpeed";
		constexpr static rivet::rivet_type_id SplashLargeSpeed_type_id = 0xaec97a3d;
		constexpr static std::string_view SplashHugeSpeed_type_name = "SplashHugeSpeed";
		constexpr static rivet::rivet_type_id SplashHugeSpeed_type_id = 0x342f17c8;
		constexpr static std::string_view SplashExitSmallSpeed_type_name = "SplashExitSmallSpeed";
		constexpr static rivet::rivet_type_id SplashExitSmallSpeed_type_id = 0x42c4acab;
		constexpr static std::string_view SplashExitMediumSpeed_type_name = "SplashExitMediumSpeed";
		constexpr static rivet::rivet_type_id SplashExitMediumSpeed_type_id = 0xd2328367;
		constexpr static std::string_view SplashExitLargeSpeed_type_name = "SplashExitLargeSpeed";
		constexpr static rivet::rivet_type_id SplashExitLargeSpeed_type_id = 0xa569b620;
		constexpr static std::string_view SplashExitHugeSpeed_type_name = "SplashExitHugeSpeed";
		constexpr static rivet::rivet_type_id SplashExitHugeSpeed_type_id = 0x4f3c2b07; 

		explicit HeroWaterSplashSpeedData() = default;
		explicit HeroWaterSplashSpeedData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float SplashSmallSpeed {};
		float SplashMediumSpeed {};
		float SplashLargeSpeed {};
		float SplashHugeSpeed {};
		float SplashExitSmallSpeed {};
		float SplashExitMediumSpeed {};
		float SplashExitLargeSpeed {};
		float SplashExitHugeSpeed {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroWaterSplashSpeedData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
