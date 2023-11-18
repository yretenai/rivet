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
	struct RIVET_DDL_SHARED HeroSkyDiveConfig : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "HeroSkyDiveConfig";
		constexpr static rivet::rivet_type_id type_id = 0xfc9dd3ce;

		constexpr static std::string_view MinLeftRightSpeed_type_name = "MinLeftRightSpeed";
		constexpr static rivet::rivet_type_id MinLeftRightSpeed_type_id = 0xecc0ba32;
		constexpr static std::string_view MinForwardBackSpeed_type_name = "MinForwardBackSpeed";
		constexpr static rivet::rivet_type_id MinForwardBackSpeed_type_id = 0x6a3c3cbf;
		constexpr static std::string_view MinLeftRightAccel_type_name = "MinLeftRightAccel";
		constexpr static rivet::rivet_type_id MinLeftRightAccel_type_id = 0xbe1a7221;
		constexpr static std::string_view MinForwardBackAccel_type_name = "MinForwardBackAccel";
		constexpr static rivet::rivet_type_id MinForwardBackAccel_type_id = 0x38e6f4ac;
		constexpr static std::string_view LeftRightTravelTime_type_name = "LeftRightTravelTime";
		constexpr static rivet::rivet_type_id LeftRightTravelTime_type_id = 0x1a7cac90;
		constexpr static std::string_view ForwardBackTravelTime_type_name = "ForwardBackTravelTime";
		constexpr static rivet::rivet_type_id ForwardBackTravelTime_type_id = 0x1690610c;
		constexpr static std::string_view LeftRightTimeToMaxSpeed_type_name = "LeftRightTimeToMaxSpeed";
		constexpr static rivet::rivet_type_id LeftRightTimeToMaxSpeed_type_id = 0x96b1804c;
		constexpr static std::string_view ForwardBackTimeToMaxSpeed_type_name = "ForwardBackTimeToMaxSpeed";
		constexpr static rivet::rivet_type_id ForwardBackTimeToMaxSpeed_type_id = 0x32d2b88;
		constexpr static std::string_view CameraShakeConfig_type_name = "CameraShakeConfig";
		constexpr static rivet::rivet_type_id CameraShakeConfig_type_id = 0xb610c5e4; 

		explicit HeroSkyDiveConfig() = default;
		explicit HeroSkyDiveConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float MinLeftRightSpeed {};
		float MinForwardBackSpeed {};
		float MinLeftRightAccel {};
		float MinForwardBackAccel {};
		float LeftRightTravelTime {};
		float ForwardBackTravelTime {};
		float LeftRightTimeToMaxSpeed {};
		float ForwardBackTimeToMaxSpeed {};
		std::string_view CameraShakeConfig {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroSkyDiveConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
