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

#include <rivet/ddl/generated/BaseComponentAmmoPrius.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED WeaponAmmoData : BaseComponentAmmoPrius {
		constexpr static std::string_view type_name = "WeaponAmmoData";
		constexpr static rivet::rivet_type_id type_id = 0x6ade1ffb;

		constexpr static std::string_view AmmoItemConfig_type_name = "AmmoItemConfig";
		constexpr static rivet::rivet_type_id AmmoItemConfig_type_id = 0x7151e5a4;
		constexpr static std::string_view PickupAmmo_type_name = "PickupAmmo";
		constexpr static rivet::rivet_type_id PickupAmmo_type_id = 0x252449da;
		constexpr static std::string_view SpawnBias_type_name = "SpawnBias";
		constexpr static rivet::rivet_type_id SpawnBias_type_id = 0xdf9f4c5f;
		constexpr static std::string_view MaxAmmo_type_name = "MaxAmmo";
		constexpr static rivet::rivet_type_id MaxAmmo_type_id = 0x1214e89a; 

		explicit WeaponAmmoData() = default;
		explicit WeaponAmmoData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view AmmoItemConfig {};
		float PickupAmmo {};
		float SpawnBias {};
		float MaxAmmo {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WeaponAmmoData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
