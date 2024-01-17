// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/Cinematic2UserZoneDef.hpp> 

#include <rivet/ddl/generated/Cinematic2UserRegionDef.hpp>

namespace rivet::ddl::generated {
	Cinematic2UserRegionDef::Cinematic2UserRegionDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Id = serialized->get_uint64(Id_type_id, 0);
		Name = serialized->get_string(Name_type_id, {});
		UserZones = serialized->unwrap_into_many<rivet::ddl::generated::Cinematic2UserZoneDef>(UserZones_type_id); 
	}

	[[nodiscard]] auto
	Cinematic2UserRegionDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	Cinematic2UserRegionDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<Cinematic2UserRegionDef> {
		if (incoming_type_id == Cinematic2UserRegionDef::type_id) {
			return std::make_shared<Cinematic2UserRegionDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
