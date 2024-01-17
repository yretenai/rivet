// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AssetReferenceDef.hpp> 

#include <rivet/ddl/generated/SelfieWeaponData.hpp>

namespace rivet::ddl::generated {
	SelfieWeaponData::SelfieWeaponData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		WeaponActor = serialized->unwrap_into<rivet::ddl::generated::AssetReferenceDef>(WeaponActor_type_id);
		GripStyle = serialized->get_enum<rivet::ddl::generated::x8c1c9e5c>(GripStyle_type_id, rivet::ddl::generated::x8c1c9e5c_values, rivet::ddl::generated::x8c1c9e5c::GripStyleRifle); 
	}

	[[nodiscard]] auto
	SelfieWeaponData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SelfieWeaponData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SelfieWeaponData> {
		if (incoming_type_id == SelfieWeaponData::type_id) {
			return std::make_shared<SelfieWeaponData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
