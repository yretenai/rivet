// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/WeaponIconData.hpp>

namespace rivet::ddl::generated {
	WeaponIconData::WeaponIconData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Weapon = serialized->get_enum<rivet::ddl::generated::xd5643d7e>(Weapon_type_id, rivet::ddl::generated::xd5643d7e_values);
		Icon = serialized->get_string(Icon_type_id); 
	}

	auto
	WeaponIconData::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	WeaponIconData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	WeaponIconData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WeaponIconData> {
		if (incoming_type_id == WeaponIconData::type_id) {
			return std::make_shared<WeaponIconData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
