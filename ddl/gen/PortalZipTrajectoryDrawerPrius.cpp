// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PortalZipTrajectoryDrawerPrius.hpp>

namespace rivet::ddl::generated {
	PortalZipTrajectoryDrawerPrius::PortalZipTrajectoryDrawerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): WeaponTrajectoryDrawerPrius(serialized) {

	}

	[[nodiscard]] auto
	PortalZipTrajectoryDrawerPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PortalZipTrajectoryDrawerPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PortalZipTrajectoryDrawerPrius> {
		if (incoming_type_id == PortalZipTrajectoryDrawerPrius::type_id) {
			return std::make_shared<PortalZipTrajectoryDrawerPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
