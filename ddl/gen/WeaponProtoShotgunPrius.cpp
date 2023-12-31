// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ShellCasingDataMultiEmit.hpp> 

#include <rivet/ddl/generated/WeaponProtoShotgunPrius.hpp>

namespace rivet::ddl::generated {
	WeaponProtoShotgunPrius::WeaponProtoShotgunPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): WeaponGamePrius(serialized) {
		V1ShellCasingData = serialized->unwrap_into<rivet::ddl::generated::ShellCasingDataMultiEmit>(V1ShellCasingData_type_id);
		V5ShellCasingData = serialized->unwrap_into<rivet::ddl::generated::ShellCasingDataMultiEmit>(V5ShellCasingData_type_id); 
	}

	[[nodiscard]] auto
	WeaponProtoShotgunPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	WeaponProtoShotgunPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WeaponProtoShotgunPrius> {
		if (incoming_type_id == WeaponProtoShotgunPrius::type_id) {
			return std::make_shared<WeaponProtoShotgunPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
