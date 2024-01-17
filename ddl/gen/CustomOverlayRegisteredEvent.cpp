// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CustomOverlayRegisteredEvent.hpp>

namespace rivet::ddl::generated {
	CustomOverlayRegisteredEvent::CustomOverlayRegisteredEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		RegionAssetId = serialized->get_uint64(RegionAssetId_type_id, 0);
		ProcessNavMeshObstacles = serialized->get_bool(ProcessNavMeshObstacles_type_id, false); 
	}

	[[nodiscard]] auto
	CustomOverlayRegisteredEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CustomOverlayRegisteredEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CustomOverlayRegisteredEvent> {
		if (incoming_type_id == CustomOverlayRegisteredEvent::type_id) {
			return std::make_shared<CustomOverlayRegisteredEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
