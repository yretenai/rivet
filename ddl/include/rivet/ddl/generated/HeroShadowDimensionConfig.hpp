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
	struct RIVET_DDL_SHARED HeroShadowDimensionConfig : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "HeroShadowDimensionConfig";
		constexpr const static rivet::rivet_type_id type_id = 0xf5e37230;

		constexpr const static std::string_view ShadowDimensionAtmosphere_type_name = "ShadowDimensionAtmosphere";
		constexpr const static rivet::rivet_type_id ShadowDimensionAtmosphere_type_id = 0x72354d60;
		constexpr const static std::string_view CoolDownTime_type_name = "CoolDownTime";
		constexpr const static rivet::rivet_type_id CoolDownTime_type_id = 0xb0eee38d;
		constexpr const static std::string_view Duration_type_name = "Duration";
		constexpr const static rivet::rivet_type_id Duration_type_id = 0x7c5e3db0;
		constexpr const static std::string_view WorldTimeScale_type_name = "WorldTimeScale";
		constexpr const static rivet::rivet_type_id WorldTimeScale_type_id = 0xd696c4a8;
		constexpr const static std::string_view HeroTimeScale_type_name = "HeroTimeScale";
		constexpr const static rivet::rivet_type_id HeroTimeScale_type_id = 0xeb49e748; 

		explicit HeroShadowDimensionConfig() = default;
		explicit HeroShadowDimensionConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view ShadowDimensionAtmosphere {};
		float CoolDownTime {};
		float Duration {};
		float WorldTimeScale {};
		float HeroTimeScale {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroShadowDimensionConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
