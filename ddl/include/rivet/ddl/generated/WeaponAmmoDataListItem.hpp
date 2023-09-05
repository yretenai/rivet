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
	struct BaseComponentAmmoPrius; 

	struct RIVET_DDL_SHARED WeaponAmmoDataListItem : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "WeaponAmmoDataListItem";
		constexpr const static rivet::rivet_type_id type_id = 0xb7b44440;

		constexpr const static std::string_view Ammo_type_name = "Ammo";
		constexpr const static rivet::rivet_type_id Ammo_type_id = 0xdf1fbe9a; 

		explicit WeaponAmmoDataListItem() = default;
		explicit WeaponAmmoDataListItem([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::BaseComponentAmmoPrius> Ammo {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WeaponAmmoDataListItem>;
	};
} // namespace rivet::ddl::generated

// clang-format on
