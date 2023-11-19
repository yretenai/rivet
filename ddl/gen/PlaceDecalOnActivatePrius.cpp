// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/PlaceDecalOnActivatePrius.hpp>

namespace rivet::ddl::generated {
	PlaceDecalOnActivatePrius::PlaceDecalOnActivatePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Delay = serialized->get_float(Delay_type_id);
		DecalMaterial = serialized->get_string(DecalMaterial_type_id);
		DecalLifetime = serialized->get_float(DecalLifetime_type_id);
		DecalFadeDist = serialized->get_float(DecalFadeDist_type_id);
		DecalFadeTime = serialized->get_float(DecalFadeTime_type_id);
		DecalAlpha = serialized->get_float(DecalAlpha_type_id);
		SkipBots = serialized->get_bool(SkipBots_type_id);
		DecalOffset = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(DecalOffset_type_id); 
	}

	[[nodiscard]] auto
	PlaceDecalOnActivatePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PlaceDecalOnActivatePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PlaceDecalOnActivatePrius> {
		if (incoming_type_id == PlaceDecalOnActivatePrius::type_id) {
			return std::make_shared<PlaceDecalOnActivatePrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated