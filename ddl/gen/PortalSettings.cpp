// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PortalSettings.hpp>

namespace rivet::ddl::generated {
	PortalSettings::PortalSettings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		DebugDraw = serialized->get_bool(DebugDraw_type_id);
		RenderPortals = serialized->get_bool(RenderPortals_type_id);
		UpdatePortalRendering = serialized->get_bool(UpdatePortalRendering_type_id);
		ResolutionMultiplier = serialized->get_float(ResolutionMultiplier_type_id);
		CastUserDataCount = serialized->get_uint32(CastUserDataCount_type_id);
		MaxPortalsToWarn = serialized->get_uint32(MaxPortalsToWarn_type_id); 
	}

	[[nodiscard]] auto
	PortalSettings::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PortalSettings::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PortalSettings> {
		if (incoming_type_id == PortalSettings::type_id) {
			return std::make_shared<PortalSettings>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
