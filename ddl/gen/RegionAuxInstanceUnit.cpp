// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/RegionNamedLink.hpp>
#include <rivet/ddl/generated/Region2DMapOverlay.hpp> 

#include <rivet/ddl/generated/RegionAuxInstanceUnit.hpp>

namespace rivet::ddl::generated {
	RegionAuxInstanceUnit::RegionAuxInstanceUnit([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		MapOverlay = serialized->unwrap_into<rivet::ddl::generated::Region2DMapOverlay>(MapOverlay_type_id);
		Zones = serialized->get_strings(Zones_type_id);
		NamedLinks = serialized->unwrap_into_many<rivet::ddl::generated::RegionNamedLink>(NamedLinks_type_id); 
	}

	[[nodiscard]] auto
	RegionAuxInstanceUnit::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	RegionAuxInstanceUnit::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RegionAuxInstanceUnit> {
		if (incoming_type_id == RegionAuxInstanceUnit::type_id) {
			return std::make_shared<RegionAuxInstanceUnit>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
