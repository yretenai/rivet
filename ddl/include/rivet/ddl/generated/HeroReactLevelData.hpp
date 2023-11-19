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
	struct CameraShakingData; 

	struct RIVET_DDL_SHARED HeroReactLevelData : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "HeroReactLevelData";
		constexpr static rivet::rivet_type_id type_id = 0xa9470242;

		constexpr static std::string_view DistanceScale_type_name = "DistanceScale";
		constexpr static rivet::rivet_type_id DistanceScale_type_id = 0x54654134;
		constexpr static std::string_view AnimRateScale_type_name = "AnimRateScale";
		constexpr static rivet::rivet_type_id AnimRateScale_type_id = 0xc6d5613e;
		constexpr static std::string_view ReReactCooldown_type_name = "ReReactCooldown";
		constexpr static rivet::rivet_type_id ReReactCooldown_type_id = 0xef493585;
		constexpr static std::string_view CameraShake_type_name = "CameraShake";
		constexpr static rivet::rivet_type_id CameraShake_type_id = 0xefd546ca; 

		explicit HeroReactLevelData() = default;
		explicit HeroReactLevelData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float DistanceScale {};
		float AnimRateScale {};
		float ReReactCooldown {};
		std::shared_ptr<rivet::ddl::generated::CameraShakingData> CameraShake {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroReactLevelData>;
	};
} // namespace rivet::ddl::generated

// clang-format on