// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CombatLaserSightPrius.hpp>

namespace rivet::ddl::generated {
	CombatLaserSightPrius::CombatLaserSightPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		StartsEnabled = serialized->get_bool(StartsEnabled_type_id);
		AttachLocator = serialized->get_string(AttachLocator_type_id); 
	}

	[[nodiscard]] auto
	CombatLaserSightPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CombatLaserSightPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CombatLaserSightPrius> {
		if (incoming_type_id == CombatLaserSightPrius::type_id) {
			return std::make_shared<CombatLaserSightPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
