// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CameraOptions.hpp> 

#include <rivet/ddl/generated/CinematicUIOptionsEngineItem.hpp>

namespace rivet::ddl::generated {
	CinematicUIOptionsEngineItem::CinematicUIOptionsEngineItem([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		DOFVisualization = serialized->get_bool(DOFVisualization_type_id);
		LookAtVisualization = serialized->get_bool(LookAtVisualization_type_id);
		CameraConeVisualization = serialized->get_bool(CameraConeVisualization_type_id);
		IgnoreJumpToShot = serialized->get_bool(IgnoreJumpToShot_type_id);
		AnimControllerActor = serialized->get_uint64(AnimControllerActor_type_id);
		AnimDynamicsActor = serialized->get_uint64(AnimDynamicsActor_type_id);
		AutoKeyframe = serialized->get_bool(AutoKeyframe_type_id);
		ShowAnimDebugHud = serialized->get_bool(ShowAnimDebugHud_type_id);
		UseFastSeekVFX = serialized->get_bool(UseFastSeekVFX_type_id);
		ShowSkeletonHud = serialized->get_bool(ShowSkeletonHud_type_id);
		ShowClothHud = serialized->get_bool(ShowClothHud_type_id);
		ShowDebugVertHud = serialized->get_bool(ShowDebugVertHud_type_id);
		ShowAudioListener = serialized->get_bool(ShowAudioListener_type_id);
		ShowEmptyTracks = serialized->get_bool(ShowEmptyTracks_type_id);
		Sound = serialized->get_bool(Sound_type_id);
		Subtitles = serialized->get_bool(Subtitles_type_id);
		TimecodeMode = serialized->get_enum<rivet::ddl::generated::xe8324e15>(TimecodeMode_type_id, rivet::ddl::generated::xe8324e15_values);
		PlatformFilter = serialized->get_enum<rivet::ddl::generated::xd7e26c97>(PlatformFilter_type_id, rivet::ddl::generated::xd7e26c97_values);
		DebugCinematicCameraOptions = serialized->unwrap_into<rivet::ddl::generated::CameraOptions>(DebugCinematicCameraOptions_type_id);
		DebugCameraOptions = serialized->unwrap_into<rivet::ddl::generated::CameraOptions>(DebugCameraOptions_type_id); 
	}

	[[nodiscard]] auto
	CinematicUIOptionsEngineItem::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CinematicUIOptionsEngineItem::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CinematicUIOptionsEngineItem> {
		if (incoming_type_id == CinematicUIOptionsEngineItem::type_id) {
			return std::make_shared<CinematicUIOptionsEngineItem>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated