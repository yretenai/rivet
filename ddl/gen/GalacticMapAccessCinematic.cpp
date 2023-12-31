// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GalacticMapAccessCinematic.hpp>

namespace rivet::ddl::generated {
	GalacticMapAccessCinematic::GalacticMapAccessCinematic([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		CinematicAsset = serialized->get_string(CinematicAsset_type_id);
		IsWorldSpaceCinematic = serialized->get_bool(IsWorldSpaceCinematic_type_id);
		UseGroundOffset = serialized->get_bool(UseGroundOffset_type_id); 
	}

	[[nodiscard]] auto
	GalacticMapAccessCinematic::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GalacticMapAccessCinematic::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GalacticMapAccessCinematic> {
		if (incoming_type_id == GalacticMapAccessCinematic::type_id) {
			return std::make_shared<GalacticMapAccessCinematic>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
