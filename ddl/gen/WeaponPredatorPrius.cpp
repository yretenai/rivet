// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/WeaponHexapodPredatorPrius.hpp> 

#include <rivet/ddl/generated/WeaponPredatorPrius.hpp>

namespace rivet::ddl::generated {
	WeaponPredatorPrius::WeaponPredatorPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): WeaponGamePrius(serialized) {
		TargetMaterialGraph = serialized->get_string(TargetMaterialGraph_type_id); 
	}

	[[nodiscard]] auto
	WeaponPredatorPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	WeaponPredatorPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WeaponPredatorPrius> {
		if (incoming_type_id == WeaponPredatorPrius::type_id) {
			return std::make_shared<WeaponPredatorPrius>(serialized);
		}

		auto WeaponHexapodPredatorPrius_ptr = WeaponHexapodPredatorPrius::from_substruct(incoming_type_id, serialized);
		if (WeaponHexapodPredatorPrius_ptr != nullptr) {
			return WeaponHexapodPredatorPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
