// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/WeaponPyrocitorPrius.hpp>

namespace rivet::ddl::generated {
	WeaponPyrocitorPrius::WeaponPyrocitorPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): WeaponGamePrius(serialized) {
		PyrocitorSubShotConfig = serialized->get_string(PyrocitorSubShotConfig_type_id); 
	}

	[[nodiscard]] auto
	WeaponPyrocitorPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	WeaponPyrocitorPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WeaponPyrocitorPrius> {
		if (incoming_type_id == WeaponPyrocitorPrius::type_id) {
			return std::make_shared<WeaponPyrocitorPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated