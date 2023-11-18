// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SessionSoundData.hpp>
#include <rivet/ddl/generated/SceneNodePropertyLinkMode.hpp>
#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/SessionTransientData.hpp>

namespace rivet::ddl::generated {
	SessionTransientData::SessionTransientData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		CameraPosition = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(CameraPosition_type_id);
		CameraRotation = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(CameraRotation_type_id);
		ToolMode = serialized->get_string(ToolMode_type_id);
		PlatformFilter = serialized->get_string(PlatformFilter_type_id);
		RequestBrightness = serialized->get_float(RequestBrightness_type_id);
		CurrentBrightness = serialized->get_float(CurrentBrightness_type_id);
		LinkMode = serialized->unwrap_into<rivet::ddl::generated::SceneNodePropertyLinkMode>(LinkMode_type_id);
		UserMessages = serialized->get_strings(UserMessages_type_id);
		DebugLog = serialized->get_strings(DebugLog_type_id);
		ActiveSoundEventIds = serialized->get_bools(ActiveSoundEventIds_type_id);
		RequestPlaySoundEvents = serialized->unwrap_into_many<rivet::ddl::generated::SessionSoundData>(RequestPlaySoundEvents_type_id);
		RequestStopSoundEvents = serialized->get_strings(RequestStopSoundEvents_type_id);
		CurrentAtmosphere = serialized->get_string(CurrentAtmosphere_type_id); 
	}

	[[nodiscard]] auto
	SessionTransientData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SessionTransientData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SessionTransientData> {
		if (incoming_type_id == SessionTransientData::type_id) {
			return std::make_shared<SessionTransientData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
