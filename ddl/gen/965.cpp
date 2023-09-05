// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MeleeWeaponItemConfig.hpp> 

#include <rivet/ddl/generated/WeaponItemConfig.hpp>

namespace rivet::ddl::generated {
	WeaponItemConfig::WeaponItemConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): GameItemConfig(serialized) {
		PreferredHeldSlot = serialized->get_enum<rivet::ddl::generated::x5793ba5e>(PreferredHeldSlot_type_id, rivet::ddl::generated::x5793ba5e_values); 
	}

	auto
	WeaponItemConfig::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	WeaponItemConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	WeaponItemConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WeaponItemConfig> {
		if (incoming_type_id == WeaponItemConfig::type_id) {
			return std::make_shared<WeaponItemConfig>(serialized);
		}

		auto MeleeWeaponItemConfig_ptr = MeleeWeaponItemConfig::from_substruct(incoming_type_id, serialized);
		if (MeleeWeaponItemConfig_ptr != nullptr) {
			return MeleeWeaponItemConfig_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
