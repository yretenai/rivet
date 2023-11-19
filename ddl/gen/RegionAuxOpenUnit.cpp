// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/RegionNamedLink.hpp>
#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/RegionAuxOpenUnit.hpp>

namespace rivet::ddl::generated {
	RegionAuxOpenUnit::RegionAuxOpenUnit([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		FolderId = serialized->get_uint64(FolderId_type_id);
		LodPosition = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(LodPosition_type_id);
		TileRadius = serialized->get_uint32(TileRadius_type_id);
		LoadDistance = serialized->get_uint32(LoadDistance_type_id);
		UnloadDistance = serialized->get_uint32(UnloadDistance_type_id);
		Zones = serialized->get_strings(Zones_type_id);
		NavExclusionZones = serialized->get_strings(NavExclusionZones_type_id);
		NavInclusionZones = serialized->get_strings(NavInclusionZones_type_id);
		NamedLinks = serialized->unwrap_into_many<rivet::ddl::generated::RegionNamedLink>(NamedLinks_type_id); 
	}

	[[nodiscard]] auto
	RegionAuxOpenUnit::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	RegionAuxOpenUnit::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RegionAuxOpenUnit> {
		if (incoming_type_id == RegionAuxOpenUnit::type_id) {
			return std::make_shared<RegionAuxOpenUnit>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated