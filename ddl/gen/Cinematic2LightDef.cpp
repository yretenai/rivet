// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/Cinematic2LightIntensityCurveTrackDef.hpp>
#include <rivet/ddl/generated/Cinematic2LightColorCurveTrackDef.hpp>
#include <rivet/ddl/generated/Cinematic2PlacedInstanceOrphanTrackDef.hpp>
#include <rivet/ddl/generated/Cinematic2PlacedInstancePosRotScaleTrackDef.hpp>
#include <rivet/ddl/generated/Cinematic2PlacedInstanceHideTrackDef.hpp>
#include <rivet/ddl/generated/Cinematic2LightAttachTrackDef.hpp>
#include <rivet/ddl/generated/Cinematic2PlacedInstanceEventTrackDef.hpp>
#include <rivet/ddl/generated/LightDef.hpp>
#include <rivet/ddl/generated/DDLTransform.hpp> 

#include <rivet/ddl/generated/Cinematic2LightDef.hpp>

namespace rivet::ddl::generated {
	Cinematic2LightDef::Cinematic2LightDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Id = serialized->get_uint64(Id_type_id, 0);
		Name = serialized->get_string(Name_type_id, {});
		StartTransform = serialized->unwrap_into<rivet::ddl::generated::DDLTransform>(StartTransform_type_id);
		EventTracks = serialized->unwrap_into_many<rivet::ddl::generated::Cinematic2PlacedInstanceEventTrackDef>(EventTracks_type_id);
		HideTrack = serialized->unwrap_into<rivet::ddl::generated::Cinematic2PlacedInstanceHideTrackDef>(HideTrack_type_id);
		PosRotScaleTrack = serialized->unwrap_into<rivet::ddl::generated::Cinematic2PlacedInstancePosRotScaleTrackDef>(PosRotScaleTrack_type_id);
		OrphanTracks = serialized->unwrap_into_many<rivet::ddl::generated::Cinematic2PlacedInstanceOrphanTrackDef>(OrphanTracks_type_id);
		PlatformFilter = serialized->get_bitset<rivet::ddl::generated::xb52df7e7>(PlatformFilter_type_id, rivet::ddl::generated::xb52df7e7_values, 7);
		Light = serialized->unwrap_into<rivet::ddl::generated::LightDef>(Light_type_id);
		ColorTrack = serialized->unwrap_into<rivet::ddl::generated::Cinematic2LightColorCurveTrackDef>(ColorTrack_type_id);
		IntensityTrack = serialized->unwrap_into<rivet::ddl::generated::Cinematic2LightIntensityCurveTrackDef>(IntensityTrack_type_id);
		AttachTrack = serialized->unwrap_into<rivet::ddl::generated::Cinematic2LightAttachTrackDef>(AttachTrack_type_id); 
	}

	[[nodiscard]] auto
	Cinematic2LightDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	Cinematic2LightDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<Cinematic2LightDef> {
		if (incoming_type_id == Cinematic2LightDef::type_id) {
			return std::make_shared<Cinematic2LightDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
