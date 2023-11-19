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
	struct RIVET_DDL_SHARED SpaceshipMagnetRechargeRingPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "SpaceshipMagnetRechargeRingPrius";
		constexpr static rivet::rivet_type_id type_id = 0x1747a48e;

		constexpr static std::string_view AutoFaceShip_type_name = "AutoFaceShip";
		constexpr static rivet::rivet_type_id AutoFaceShip_type_id = 0x9e66d95a;
		constexpr static std::string_view PercentRecharge_type_name = "PercentRecharge";
		constexpr static rivet::rivet_type_id PercentRecharge_type_id = 0x36b891bb;
		constexpr static std::string_view CooldownTime_type_name = "CooldownTime";
		constexpr static rivet::rivet_type_id CooldownTime_type_id = 0x499881db; 

		explicit SpaceshipMagnetRechargeRingPrius() = default;
		explicit SpaceshipMagnetRechargeRingPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool AutoFaceShip {};
		float PercentRecharge {};
		float CooldownTime {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SpaceshipMagnetRechargeRingPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on