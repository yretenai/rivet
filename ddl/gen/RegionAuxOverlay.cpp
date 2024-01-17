// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/RegionNamedLink.hpp>
#include <rivet/ddl/generated/RegionShadowingZone.hpp> 

#include <rivet/ddl/generated/RegionAuxOverlay.hpp>

namespace rivet::ddl::generated {
	RegionAuxOverlay::RegionAuxOverlay([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		OverlayFolderId = serialized->get_uint64(OverlayFolderId_type_id, 0);
		OverlayType = serialized->get_string(OverlayType_type_id, {});
		ShadowingZones = serialized->unwrap_into_many<rivet::ddl::generated::RegionShadowingZone>(ShadowingZones_type_id);
		NamedLinks = serialized->unwrap_into_many<rivet::ddl::generated::RegionNamedLink>(NamedLinks_type_id);
		NamedLinkRegions = serialized->get_strings(NamedLinkRegions_type_id); 
	}

	[[nodiscard]] auto
	RegionAuxOverlay::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	RegionAuxOverlay::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RegionAuxOverlay> {
		if (incoming_type_id == RegionAuxOverlay::type_id) {
			return std::make_shared<RegionAuxOverlay>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
