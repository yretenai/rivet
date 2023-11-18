// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

// clang-format off

#include <cstdint>
#include <memory>
#include <string_view>
#include <vector>

#include <rivet/hash/type_id.hpp>
#include <rivet/rivet_array.hpp>
#include <rivet/rivet_keywords.hpp>
#include <rivet/structures/rivet_serialization.hpp>

namespace rivet::ddl::generated {
	struct CameraInputSettings;
	struct LightCaptureSettings;
	struct EventSettings; 

	struct RIVET_DDL_SHARED EngineSettings : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "EngineSettings";
		constexpr static rivet::rivet_type_id type_id = 0xa8107f21;

		constexpr static std::string_view SubtitleSystemEnable_type_name = "SubtitleSystemEnable";
		constexpr static rivet::rivet_type_id SubtitleSystemEnable_type_id = 0x6f3251f3;
		constexpr static std::string_view InputEnable_type_name = "InputEnable";
		constexpr static rivet::rivet_type_id InputEnable_type_id = 0x4b16b8f7;
		constexpr static std::string_view DecalsEnable_type_name = "DecalsEnable";
		constexpr static rivet::rivet_type_id DecalsEnable_type_id = 0xdc4eaa93;
		constexpr static std::string_view VFXEnable_type_name = "VFXEnable";
		constexpr static rivet::rivet_type_id VFXEnable_type_id = 0x5d4b31e0;
		constexpr static std::string_view WaterSimCreationEnable_type_name = "WaterSimCreationEnable";
		constexpr static rivet::rivet_type_id WaterSimCreationEnable_type_id = 0xf4207796;
		constexpr static std::string_view MaxUpdateRequestsFromThreads_type_name = "MaxUpdateRequestsFromThreads";
		constexpr static rivet::rivet_type_id MaxUpdateRequestsFromThreads_type_id = 0xa0d92346;
		constexpr static std::string_view MaxActorParentRequests_type_name = "MaxActorParentRequests";
		constexpr static rivet::rivet_type_id MaxActorParentRequests_type_id = 0x9cbc9707;
		constexpr static std::string_view MaxDefaultBucketRequests_type_name = "MaxDefaultBucketRequests";
		constexpr static rivet::rivet_type_id MaxDefaultBucketRequests_type_id = 0xb7820e9c;
		constexpr static std::string_view JobWaitTimeoutMs_type_name = "JobWaitTimeoutMs";
		constexpr static rivet::rivet_type_id JobWaitTimeoutMs_type_id = 0xc293af83;
		constexpr static std::string_view Event_type_name = "Event";
		constexpr static rivet::rivet_type_id Event_type_id = 0x22fdc666;
		constexpr static std::string_view LightCapture_type_name = "LightCapture";
		constexpr static rivet::rivet_type_id LightCapture_type_id = 0x9b2f9403;
		constexpr static std::string_view ScriptSignalMax_type_name = "ScriptSignalMax";
		constexpr static rivet::rivet_type_id ScriptSignalMax_type_id = 0x2a3a5055;
		constexpr static std::string_view ScratchSize_type_name = "ScratchSize";
		constexpr static rivet::rivet_type_id ScratchSize_type_id = 0x30ecc1c8;
		constexpr static std::string_view ScratchSizePersistent_type_name = "ScratchSizePersistent";
		constexpr static rivet::rivet_type_id ScratchSizePersistent_type_id = 0xb303db5b;
		constexpr static std::string_view AmmEmuVaddrSpace_type_name = "AmmEmuVaddrSpace";
		constexpr static rivet::rivet_type_id AmmEmuVaddrSpace_type_id = 0x9a96c547;
		constexpr static std::string_view GlobalForceClipDistance_type_name = "GlobalForceClipDistance";
		constexpr static rivet::rivet_type_id GlobalForceClipDistance_type_id = 0x549480b5;
		constexpr static std::string_view GlobalForceClipEnabled_type_name = "GlobalForceClipEnabled";
		constexpr static rivet::rivet_type_id GlobalForceClipEnabled_type_id = 0xebbfb405;
		constexpr static std::string_view ArchiveTocPath_type_name = "ArchiveTocPath";
		constexpr static rivet::rivet_type_id ArchiveTocPath_type_id = 0xb18a5bd7;
		constexpr static std::string_view ArchiveLoaderCoalesceAdjacentReads_type_name = "ArchiveLoaderCoalesceAdjacentReads";
		constexpr static rivet::rivet_type_id ArchiveLoaderCoalesceAdjacentReads_type_id = 0xccd00003;
		constexpr static std::string_view MovieCaptureFrameRate_type_name = "MovieCaptureFrameRate";
		constexpr static rivet::rivet_type_id MovieCaptureFrameRate_type_id = 0xa9f1686e;
		constexpr static std::string_view MovieCaptureOutputWidth_type_name = "MovieCaptureOutputWidth";
		constexpr static rivet::rivet_type_id MovieCaptureOutputWidth_type_id = 0x13ae87a4;
		constexpr static std::string_view MovieCaptureOutputHeight_type_name = "MovieCaptureOutputHeight";
		constexpr static rivet::rivet_type_id MovieCaptureOutputHeight_type_id = 0x5dbae4e8;
		constexpr static std::string_view MovieCaptureFaceSize_type_name = "MovieCaptureFaceSize";
		constexpr static rivet::rivet_type_id MovieCaptureFaceSize_type_id = 0x58b01774;
		constexpr static std::string_view ScreenshotIp_type_name = "ScreenshotIp";
		constexpr static rivet::rivet_type_id ScreenshotIp_type_id = 0xe084b4b1;
		constexpr static std::string_view CameraSettings_type_name = "CameraSettings";
		constexpr static rivet::rivet_type_id CameraSettings_type_id = 0xf7f1ab6e;
		constexpr static std::string_view LightBarColor_type_name = "LightBarColor";
		constexpr static rivet::rivet_type_id LightBarColor_type_id = 0x66097a36;
		constexpr static std::string_view NavMeshValidationEnable_type_name = "NavMeshValidationEnable";
		constexpr static rivet::rivet_type_id NavMeshValidationEnable_type_id = 0x231e83e5;
		constexpr static std::string_view MovieSystemEnable_type_name = "MovieSystemEnable";
		constexpr static rivet::rivet_type_id MovieSystemEnable_type_id = 0xad67a35;
		constexpr static std::string_view MovieMemoryBudget_type_name = "MovieMemoryBudget";
		constexpr static rivet::rivet_type_id MovieMemoryBudget_type_id = 0x395cc08a;
		constexpr static std::string_view JobBatchMax_type_name = "JobBatchMax";
		constexpr static rivet::rivet_type_id JobBatchMax_type_id = 0xaae97a48;
		constexpr static std::string_view UseLockedTimeStep_type_name = "UseLockedTimeStep";
		constexpr static rivet::rivet_type_id UseLockedTimeStep_type_id = 0x27474d05;
		constexpr static std::string_view TimeSmoothing_type_name = "TimeSmoothing";
		constexpr static rivet::rivet_type_id TimeSmoothing_type_id = 0x4a366253;
		constexpr static std::string_view TimeSmoothingFrames_type_name = "TimeSmoothingFrames";
		constexpr static rivet::rivet_type_id TimeSmoothingFrames_type_id = 0x89a5dcb0;
		constexpr static std::string_view RequireDependencyDag_type_name = "RequireDependencyDag";
		constexpr static rivet::rivet_type_id RequireDependencyDag_type_id = 0xb3a4139b;
		constexpr static std::string_view DDLUseJson_type_name = "DDLUseJson";
		constexpr static rivet::rivet_type_id DDLUseJson_type_id = 0x5a0403c9;
		constexpr static std::string_view InitDDL_type_name = "InitDDL";
		constexpr static rivet::rivet_type_id InitDDL_type_id = 0x5cc55b0b;
		constexpr static std::string_view DebugFontAlwaysShadowed_type_name = "DebugFontAlwaysShadowed";
		constexpr static rivet::rivet_type_id DebugFontAlwaysShadowed_type_id = 0x7154c9c1;
		constexpr static std::string_view MinCullDist_type_name = "MinCullDist";
		constexpr static rivet::rivet_type_id MinCullDist_type_id = 0xfef481be;
		constexpr static std::string_view OutlineDrawMaxDist_type_name = "OutlineDrawMaxDist";
		constexpr static rivet::rivet_type_id OutlineDrawMaxDist_type_id = 0x7a76719a;
		constexpr static std::string_view InitDebugImGui_type_name = "InitDebugImGui";
		constexpr static rivet::rivet_type_id InitDebugImGui_type_id = 0x99eb8779;
		constexpr static std::string_view ToolWindow_type_name = "ToolWindow";
		constexpr static rivet::rivet_type_id ToolWindow_type_id = 0x3c939416;
		constexpr static std::string_view EnforcePadFocus_type_name = "EnforcePadFocus";
		constexpr static rivet::rivet_type_id EnforcePadFocus_type_id = 0x12dcffd0;
		constexpr static std::string_view PadEnable_type_name = "PadEnable";
		constexpr static rivet::rivet_type_id PadEnable_type_id = 0xb221ec03;
		constexpr static std::string_view NoLoadHackAssetId_type_name = "NoLoadHackAssetId";
		constexpr static rivet::rivet_type_id NoLoadHackAssetId_type_id = 0xf7c9b7d1;
		constexpr static std::string_view IsCinematicEditor_type_name = "IsCinematicEditor";
		constexpr static rivet::rivet_type_id IsCinematicEditor_type_id = 0xde9332b7;
		constexpr static std::string_view PlayGoEnable_type_name = "PlayGoEnable";
		constexpr static rivet::rivet_type_id PlayGoEnable_type_id = 0xbf92fa7b;
		constexpr static std::string_view ExitAfterOneFrame_type_name = "ExitAfterOneFrame";
		constexpr static rivet::rivet_type_id ExitAfterOneFrame_type_id = 0xad7b3469; 

		explicit EngineSettings() = default;
		explicit EngineSettings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool SubtitleSystemEnable {};
		bool InputEnable {};
		bool DecalsEnable {};
		bool VFXEnable {};
		bool WaterSimCreationEnable {};
		int32_t MaxUpdateRequestsFromThreads {};
		int32_t MaxActorParentRequests {};
		int32_t MaxDefaultBucketRequests {};
		int32_t JobWaitTimeoutMs {};
		std::shared_ptr<rivet::ddl::generated::EventSettings> Event {};
		std::shared_ptr<rivet::ddl::generated::LightCaptureSettings> LightCapture {};
		int32_t ScriptSignalMax {};
		uint64_t ScratchSize {};
		uint64_t ScratchSizePersistent {};
		uint64_t AmmEmuVaddrSpace {};
		float GlobalForceClipDistance {};
		bool GlobalForceClipEnabled {};
		std::string_view ArchiveTocPath {};
		bool ArchiveLoaderCoalesceAdjacentReads {};
		int32_t MovieCaptureFrameRate {};
		int32_t MovieCaptureOutputWidth {};
		int32_t MovieCaptureOutputHeight {};
		int32_t MovieCaptureFaceSize {};
		std::string_view ScreenshotIp {};
		std::shared_ptr<rivet::ddl::generated::CameraInputSettings> CameraSettings {};
		std::vector<uint8_t> LightBarColor {};
		bool NavMeshValidationEnable {};
		bool MovieSystemEnable {};
		uint32_t MovieMemoryBudget {};
		int32_t JobBatchMax {};
		bool UseLockedTimeStep {};
		bool TimeSmoothing {};
		uint32_t TimeSmoothingFrames {};
		bool RequireDependencyDag {};
		bool DDLUseJson {};
		bool InitDDL {};
		bool DebugFontAlwaysShadowed {};
		float MinCullDist {};
		float OutlineDrawMaxDist {};
		bool InitDebugImGui {};
		std::string_view ToolWindow {};
		bool EnforcePadFocus {};
		bool PadEnable {};
		uint64_t NoLoadHackAssetId {};
		bool IsCinematicEditor {};
		bool PlayGoEnable {};
		bool ExitAfterOneFrame {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<EngineSettings>;
	};
} // namespace rivet::ddl::generated

// clang-format on
