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

#include <rivet/ddl/generated/ConfigBase.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED WeaponLevelConfig : ConfigBase {
		constexpr static std::string_view type_name = "WeaponLevelConfig";
		constexpr static rivet::rivet_type_id type_id = 0xa0605605;

		constexpr static std::string_view TimeScale_type_name = "TimeScale";
		constexpr static rivet::rivet_type_id TimeScale_type_id = 0x5fe2ecba;
		constexpr static std::string_view TimeScaleDuration_type_name = "TimeScaleDuration";
		constexpr static rivet::rivet_type_id TimeScaleDuration_type_id = 0x78f2d960;
		constexpr static std::string_view StartCameraShake_type_name = "StartCameraShake";
		constexpr static rivet::rivet_type_id StartCameraShake_type_id = 0xb4193c80;
		constexpr static std::string_view LevelUpCameraShake_type_name = "LevelUpCameraShake";
		constexpr static rivet::rivet_type_id LevelUpCameraShake_type_id = 0x5fb57995; 

		explicit WeaponLevelConfig() = default;
		explicit WeaponLevelConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float TimeScale {};
		float TimeScaleDuration {};
		std::string_view StartCameraShake {};
		std::string_view LevelUpCameraShake {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WeaponLevelConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
