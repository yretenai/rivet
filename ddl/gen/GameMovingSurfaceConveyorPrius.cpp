// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GameMovingSurfaceConveyorPrius.hpp>

namespace rivet::ddl::generated {
	GameMovingSurfaceConveyorPrius::GameMovingSurfaceConveyorPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): MovingSurfacePrius(serialized) {
		LocalZMotion = serialized->get_float(LocalZMotion_type_id);
		LocalXMotion = serialized->get_float(LocalXMotion_type_id); 
	}

	[[nodiscard]] auto
	GameMovingSurfaceConveyorPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GameMovingSurfaceConveyorPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GameMovingSurfaceConveyorPrius> {
		if (incoming_type_id == GameMovingSurfaceConveyorPrius::type_id) {
			return std::make_shared<GameMovingSurfaceConveyorPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated