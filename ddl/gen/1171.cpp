// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BarrelObstructionBase.hpp> 

#include <rivet/ddl/generated/WeaponObstructionSingle.hpp>

namespace rivet::ddl::generated {
	WeaponObstructionSingle::WeaponObstructionSingle([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): WeaponObstructionBase(serialized) {
		Weapon = serialized->unwrap_into<rivet::ddl::generated::BarrelObstructionBase>(Weapon_type_id); 
	}

	auto
	WeaponObstructionSingle::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	WeaponObstructionSingle::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	WeaponObstructionSingle::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WeaponObstructionSingle> {
		if (incoming_type_id == WeaponObstructionSingle::type_id) {
			return std::make_shared<WeaponObstructionSingle>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
