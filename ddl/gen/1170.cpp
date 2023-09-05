// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/WeaponObstructionSingle.hpp>
#include <rivet/ddl/generated/WeaponObstructionUpgradable.hpp>
#include <rivet/ddl/generated/WeaponObstructionNone.hpp> 

#include <rivet/ddl/generated/WeaponObstructionBase.hpp>

namespace rivet::ddl::generated {
	WeaponObstructionBase::WeaponObstructionBase([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {

	}

	auto
	WeaponObstructionBase::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	WeaponObstructionBase::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	WeaponObstructionBase::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WeaponObstructionBase> {
		if (incoming_type_id == WeaponObstructionBase::type_id) {
			return std::make_shared<WeaponObstructionBase>(serialized);
		}

		auto WeaponObstructionSingle_ptr = WeaponObstructionSingle::from_substruct(incoming_type_id, serialized);
		if (WeaponObstructionSingle_ptr != nullptr) {
			return WeaponObstructionSingle_ptr;
		}

		auto WeaponObstructionUpgradable_ptr = WeaponObstructionUpgradable::from_substruct(incoming_type_id, serialized);
		if (WeaponObstructionUpgradable_ptr != nullptr) {
			return WeaponObstructionUpgradable_ptr;
		}

		auto WeaponObstructionNone_ptr = WeaponObstructionNone::from_substruct(incoming_type_id, serialized);
		if (WeaponObstructionNone_ptr != nullptr) {
			return WeaponObstructionNone_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
