// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/RegionShadowingZone.hpp>

namespace rivet::ddl::generated {
	RegionShadowingZone::RegionShadowingZone([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Zone = serialized->get_string(Zone_type_id);
		ShadowZone = serialized->get_string(ShadowZone_type_id); 
	}

	[[nodiscard]] auto
	RegionShadowingZone::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	RegionShadowingZone::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RegionShadowingZone> {
		if (incoming_type_id == RegionShadowingZone::type_id) {
			return std::make_shared<RegionShadowingZone>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
