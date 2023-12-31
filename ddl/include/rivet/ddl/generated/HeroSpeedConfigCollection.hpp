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
	struct HeroSpeedConfig; 

	struct RIVET_DDL_SHARED HeroSpeedConfigCollection : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "HeroSpeedConfigCollection";
		constexpr static rivet::rivet_type_id type_id = 0xb9975e6b;

		constexpr static std::string_view NormalSpeedConfig_type_name = "NormalSpeedConfig";
		constexpr static rivet::rivet_type_id NormalSpeedConfig_type_id = 0xea9590d5;
		constexpr static std::string_view AimSpeedConfig_type_name = "AimSpeedConfig";
		constexpr static rivet::rivet_type_id AimSpeedConfig_type_id = 0x295decfa;
		constexpr static std::string_view JumpSpeedConfig_type_name = "JumpSpeedConfig";
		constexpr static rivet::rivet_type_id JumpSpeedConfig_type_id = 0x76a7baf5;
		constexpr static std::string_view RunAccel_type_name = "RunAccel";
		constexpr static rivet::rivet_type_id RunAccel_type_id = 0xa7e78bae;
		constexpr static std::string_view RunDecel_type_name = "RunDecel";
		constexpr static rivet::rivet_type_id RunDecel_type_id = 0x4a6c5b02; 

		explicit HeroSpeedConfigCollection() = default;
		explicit HeroSpeedConfigCollection([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::HeroSpeedConfig> NormalSpeedConfig {};
		std::shared_ptr<rivet::ddl::generated::HeroSpeedConfig> AimSpeedConfig {};
		std::shared_ptr<rivet::ddl::generated::HeroSpeedConfig> JumpSpeedConfig {};
		float RunAccel {};
		float RunDecel {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroSpeedConfigCollection>;
	};
} // namespace rivet::ddl::generated

// clang-format on
