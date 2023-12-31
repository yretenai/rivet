// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/Cinematic2CameraDofFollowTrackDef.hpp>
#include <rivet/ddl/generated/Cinematic2CameraDofBlurStrengthDef.hpp>
#include <rivet/ddl/generated/Cinematic2CameraDofFocusDistanceCurveDef.hpp>
#include <rivet/ddl/generated/Cinematic2TrackTagsDef.hpp> 

#include <rivet/ddl/generated/Cinematic2CameraDofTrackDef.hpp>

namespace rivet::ddl::generated {
	Cinematic2CameraDofTrackDef::Cinematic2CameraDofTrackDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Id = serialized->get_uint64(Id_type_id);
		Name = serialized->get_string(Name_type_id);
		PlatformFilter = serialized->get_bitset<rivet::ddl::generated::xb52df7e7>(PlatformFilter_type_id, rivet::ddl::generated::xb52df7e7_values);
		Tags = serialized->unwrap_into<rivet::ddl::generated::Cinematic2TrackTagsDef>(Tags_type_id);
		Global = serialized->get_bool(Global_type_id);
		NearFocusDistance = serialized->unwrap_into<rivet::ddl::generated::Cinematic2CameraDofFocusDistanceCurveDef>(NearFocusDistance_type_id);
		NearBlurStrength = serialized->unwrap_into<rivet::ddl::generated::Cinematic2CameraDofBlurStrengthDef>(NearBlurStrength_type_id);
		FarFocusDistance = serialized->unwrap_into<rivet::ddl::generated::Cinematic2CameraDofFocusDistanceCurveDef>(FarFocusDistance_type_id);
		FarBlurStrength = serialized->unwrap_into<rivet::ddl::generated::Cinematic2CameraDofBlurStrengthDef>(FarBlurStrength_type_id);
		Follow = serialized->unwrap_into<rivet::ddl::generated::Cinematic2CameraDofFollowTrackDef>(Follow_type_id); 
	}

	[[nodiscard]] auto
	Cinematic2CameraDofTrackDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	Cinematic2CameraDofTrackDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<Cinematic2CameraDofTrackDef> {
		if (incoming_type_id == Cinematic2CameraDofTrackDef::type_id) {
			return std::make_shared<Cinematic2CameraDofTrackDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
