// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/WeaponSchrodingerPrius.hpp>

namespace rivet::ddl::generated {
	WeaponSchrodingerPrius::WeaponSchrodingerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): WeaponGamePrius(serialized) {
		AttachActor = serialized->get_string(AttachActor_type_id);
		AttachLocator = serialized->get_string(AttachLocator_type_id);
		AttachActorScale = serialized->get_float(AttachActorScale_type_id); 
	}

	auto
	WeaponSchrodingerPrius::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	WeaponSchrodingerPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	WeaponSchrodingerPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WeaponSchrodingerPrius> {
		if (incoming_type_id == WeaponSchrodingerPrius::type_id) {
			return std::make_shared<WeaponSchrodingerPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
