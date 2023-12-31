// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/UI_CinematicInstanceZone.hpp>

namespace rivet::ddl::generated {
	UI_CinematicInstanceZone::UI_CinematicInstanceZone([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		IsCinematicOwner = serialized->get_bool(IsCinematicOwner_type_id);
		ParentRegionAssetPath = serialized->get_string(ParentRegionAssetPath_type_id);
		ShadowZoneAssetPath = serialized->get_string(ShadowZoneAssetPath_type_id);
		ZoneAssetPath = serialized->get_string(ZoneAssetPath_type_id); 
	}

	[[nodiscard]] auto
	UI_CinematicInstanceZone::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UI_CinematicInstanceZone::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UI_CinematicInstanceZone> {
		if (incoming_type_id == UI_CinematicInstanceZone::type_id) {
			return std::make_shared<UI_CinematicInstanceZone>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
