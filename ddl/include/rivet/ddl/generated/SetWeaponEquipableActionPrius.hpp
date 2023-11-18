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

#include <rivet/ddl/generated/enums/x63d44ada.hpp>
#include <rivet/ddl/generated/enums/x10228b34.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED SetWeaponEquipableActionPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "SetWeaponEquipableActionPrius";
		constexpr static rivet::rivet_type_id type_id = 0x4d230233;

		constexpr static std::string_view ActionType_type_name = "ActionType";
		constexpr static rivet::rivet_type_id ActionType_type_id = 0x874b2194;
		constexpr static std::string_view Weapon_type_name = "Weapon";
		constexpr static rivet::rivet_type_id Weapon_type_id = 0x574be981;
		constexpr static std::string_view Equipable_type_name = "Equipable";
		constexpr static rivet::rivet_type_id Equipable_type_id = 0x46daa1c2;
		constexpr static std::string_view ForceUnequipIfNowUnequipable_type_name = "ForceUnequipIfNowUnequipable";
		constexpr static rivet::rivet_type_id ForceUnequipIfNowUnequipable_type_id = 0x9a546549; 

		explicit SetWeaponEquipableActionPrius() = default;
		explicit SetWeaponEquipableActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x10228b34 ActionType {};
		rivet::ddl::generated::x63d44ada Weapon {};
		bool Equipable {};
		bool ForceUnequipIfNowUnequipable {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SetWeaponEquipableActionPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
