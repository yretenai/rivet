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

#include <rivet/ddl/generated/EventBase.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED UserEquippedWeaponFXOnEvent : EventBase {
		constexpr static std::string_view type_name = "UserEquippedWeaponFXOnEvent";
		constexpr static rivet::rivet_type_id type_id = 0xabd1b078;

		constexpr static std::string_view WeaponName_type_name = "WeaponName";
		constexpr static rivet::rivet_type_id WeaponName_type_id = 0xca0166cc;
		constexpr static std::string_view OwnerIsLocal_type_name = "OwnerIsLocal";
		constexpr static rivet::rivet_type_id OwnerIsLocal_type_id = 0xd23b3317;
		constexpr static std::string_view OwnerIsHero_type_name = "OwnerIsHero";
		constexpr static rivet::rivet_type_id OwnerIsHero_type_id = 0x22f6dc;
		constexpr static std::string_view AmmoCount_type_name = "AmmoCount";
		constexpr static rivet::rivet_type_id AmmoCount_type_id = 0xf5fba7fe; 

		explicit UserEquippedWeaponFXOnEvent() = default;
		explicit UserEquippedWeaponFXOnEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view WeaponName {};
		bool OwnerIsLocal {};
		bool OwnerIsHero {};
		float AmmoCount {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UserEquippedWeaponFXOnEvent>;
	};
} // namespace rivet::ddl::generated

// clang-format on
