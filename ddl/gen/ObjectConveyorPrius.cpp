// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ObjectConveyorPrius.hpp>

namespace rivet::ddl::generated {
	ObjectConveyorPrius::ObjectConveyorPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ConveyorPath = serialized->get_uint64(ConveyorPath_type_id);
		ConveyorStartVolume = serialized->get_uint64(ConveyorStartVolume_type_id);
		ConveyorStopVolume = serialized->get_uint64(ConveyorStopVolume_type_id);
		TileList = serialized->get_uint64(TileList_type_id);
		TileSize = serialized->get_float(TileSize_type_id);
		PackTiles = serialized->get_bool(PackTiles_type_id);
		PackEndT = serialized->get_bool(PackEndT_type_id);
		SpeedAccel = serialized->get_float(SpeedAccel_type_id);
		SpeedDecel = serialized->get_float(SpeedDecel_type_id);
		SpeedMax = serialized->get_float(SpeedMax_type_id);
		StartMoving = serialized->get_bool(StartMoving_type_id); 
	}

	[[nodiscard]] auto
	ObjectConveyorPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ObjectConveyorPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ObjectConveyorPrius> {
		if (incoming_type_id == ObjectConveyorPrius::type_id) {
			return std::make_shared<ObjectConveyorPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
