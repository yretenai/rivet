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

#include <rivet/ddl/generated/GameItemPrius.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED WeaponItemPrius : GameItemPrius {
		constexpr static std::string_view type_name = "WeaponItemPrius";
		constexpr static rivet::rivet_type_id type_id = 0xa89e9c3c;

		constexpr static std::string_view LastCheckpointAmmo_type_name = "LastCheckpointAmmo";
		constexpr static rivet::rivet_type_id LastCheckpointAmmo_type_id = 0x3c536435;
		constexpr static std::string_view LoadedAmmo_type_name = "LoadedAmmo";
		constexpr static rivet::rivet_type_id LoadedAmmo_type_id = 0x4977157b;
		constexpr static std::string_view ModCount_type_name = "ModCount";
		constexpr static rivet::rivet_type_id ModCount_type_id = 0xb86c3a48;
		constexpr static std::string_view SelectedCell_type_name = "SelectedCell";
		constexpr static rivet::rivet_type_id SelectedCell_type_id = 0x2f1a5c40;
		constexpr static std::string_view Omega_type_name = "Omega";
		constexpr static rivet::rivet_type_id Omega_type_id = 0x534a51fb; 

		explicit WeaponItemPrius() = default;
		explicit WeaponItemPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float LastCheckpointAmmo {};
		float LoadedAmmo {};
		std::vector<uint8_t> ModCount {};
		uint8_t SelectedCell {};
		bool Omega {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WeaponItemPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
