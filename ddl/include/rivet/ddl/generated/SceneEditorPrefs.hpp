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

#include <rivet/ddl/generated/enums/ManipSpaceMode.hpp>
#include <rivet/ddl/generated/enums/EditorRenderMode.hpp>
#include <rivet/ddl/generated/enums/MarqueeTestMode.hpp>
#include <rivet/ddl/generated/enums/CameraProjectionType.hpp>
#include <rivet/ddl/generated/enums/PivotMode.hpp> 

namespace rivet::ddl::generated {
	struct ModelDisplayOptions;
	struct ShrubbingPref;
	struct EventFilterOptions;
	struct VertexPaintingPref;
	struct RandomizationSettings;
	struct EditorRenderSettings2;
	struct EditorRenderSettings; 

	struct RIVET_DDL_SHARED SceneEditorPrefs : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "SceneEditorPrefs";
		constexpr static rivet::rivet_type_id type_id = 0x958bdf12;

		constexpr static std::string_view SpriteSize_type_name = "SpriteSize";
		constexpr static rivet::rivet_type_id SpriteSize_type_id = 0x92edb778;
		constexpr static std::string_view SpriteOffset_type_name = "SpriteOffset";
		constexpr static rivet::rivet_type_id SpriteOffset_type_id = 0x9210f2f;
		constexpr static std::string_view LastSyncDate_type_name = "LastSyncDate";
		constexpr static rivet::rivet_type_id LastSyncDate_type_id = 0xd1b57fee;
		constexpr static std::string_view RenderSettings_type_name = "RenderSettings";
		constexpr static rivet::rivet_type_id RenderSettings_type_id = 0x2adaf5f7;
		constexpr static std::string_view RenderSettings2_type_name = "RenderSettings2";
		constexpr static rivet::rivet_type_id RenderSettings2_type_id = 0xeb24ecca;
		constexpr static std::string_view DeleteUnmovedDuplicated_type_name = "DeleteUnmovedDuplicated";
		constexpr static rivet::rivet_type_id DeleteUnmovedDuplicated_type_id = 0xb4dfde6d;
		constexpr static std::string_view AutoParenting_type_name = "AutoParenting";
		constexpr static rivet::rivet_type_id AutoParenting_type_id = 0xd1ba2d86;
		constexpr static std::string_view AutoGrouping_type_name = "AutoGrouping";
		constexpr static rivet::rivet_type_id AutoGrouping_type_id = 0x6c0f7189;
		constexpr static std::string_view ExportToCentimeters_type_name = "ExportToCentimeters";
		constexpr static rivet::rivet_type_id ExportToCentimeters_type_id = 0x9ab45b32;
		constexpr static std::string_view ArcBallManip_type_name = "ArcBallManip";
		constexpr static rivet::rivet_type_id ArcBallManip_type_id = 0xcdbda3bb;
		constexpr static std::string_view AltTransManip_type_name = "AltTransManip";
		constexpr static rivet::rivet_type_id AltTransManip_type_id = 0x2195c9c1;
		constexpr static std::string_view UseMayaCameraPanSpeed_type_name = "UseMayaCameraPanSpeed";
		constexpr static rivet::rivet_type_id UseMayaCameraPanSpeed_type_id = 0x8ea022f4;
		constexpr static std::string_view FollowManipUseZ_type_name = "FollowManipUseZ";
		constexpr static rivet::rivet_type_id FollowManipUseZ_type_id = 0x7710496;
		constexpr static std::string_view AltPrefabOverlay_type_name = "AltPrefabOverlay";
		constexpr static rivet::rivet_type_id AltPrefabOverlay_type_id = 0xc0ebf2f0;
		constexpr static std::string_view StippleEffect_type_name = "StippleEffect";
		constexpr static rivet::rivet_type_id StippleEffect_type_id = 0x63c803f7;
		constexpr static std::string_view MetricAssist_type_name = "MetricAssist";
		constexpr static rivet::rivet_type_id MetricAssist_type_id = 0x6ca8a931;
		constexpr static std::string_view EnforcePadFocus_type_name = "EnforcePadFocus";
		constexpr static rivet::rivet_type_id EnforcePadFocus_type_id = 0x12dcffd0;
		constexpr static std::string_view AllowPadInEditor_type_name = "AllowPadInEditor";
		constexpr static rivet::rivet_type_id AllowPadInEditor_type_id = 0x32f8e003;
		constexpr static std::string_view PreferActiveState_type_name = "PreferActiveState";
		constexpr static rivet::rivet_type_id PreferActiveState_type_id = 0x5ebde4ac;
		constexpr static std::string_view RestoreZoneCameraOnLoad_type_name = "RestoreZoneCameraOnLoad";
		constexpr static rivet::rivet_type_id RestoreZoneCameraOnLoad_type_id = 0x3993ebd0;
		constexpr static std::string_view ShowScriptGraphGrid_type_name = "ShowScriptGraphGrid";
		constexpr static rivet::rivet_type_id ShowScriptGraphGrid_type_id = 0x8475b398;
		constexpr static std::string_view SelectedVolumesHighlight_type_name = "SelectedVolumesHighlight";
		constexpr static rivet::rivet_type_id SelectedVolumesHighlight_type_id = 0xc080b1d2;
		constexpr static std::string_view PlaceFacingCamera_type_name = "PlaceFacingCamera";
		constexpr static rivet::rivet_type_id PlaceFacingCamera_type_id = 0xe0ac40e5;
		constexpr static std::string_view EnableViewerAsserts_type_name = "EnableViewerAsserts";
		constexpr static rivet::rivet_type_id EnableViewerAsserts_type_id = 0x7aeb36e3;
		constexpr static std::string_view PivotMode_type_name = "PivotMode";
		constexpr static rivet::rivet_type_id PivotMode_type_id = 0x3707daff;
		constexpr static std::string_view CameraProjectionType_type_name = "CameraProjectionType";
		constexpr static rivet::rivet_type_id CameraProjectionType_type_id = 0x87a65665;
		constexpr static std::string_view GridXYZLock_type_name = "GridXYZLock";
		constexpr static rivet::rivet_type_id GridXYZLock_type_id = 0x86886d3e;
		constexpr static std::string_view GridSpacingX_type_name = "GridSpacingX";
		constexpr static rivet::rivet_type_id GridSpacingX_type_id = 0xf32e021;
		constexpr static std::string_view GridSpacingY_type_name = "GridSpacingY";
		constexpr static rivet::rivet_type_id GridSpacingY_type_id = 0x7835d0b7;
		constexpr static std::string_view GridSpacingZ_type_name = "GridSpacingZ";
		constexpr static rivet::rivet_type_id GridSpacingZ_type_id = 0xe13c810d;
		constexpr static std::string_view RotationSnap_type_name = "RotationSnap";
		constexpr static rivet::rivet_type_id RotationSnap_type_id = 0x593abc3c;
		constexpr static std::string_view PolylineSnap_type_name = "PolylineSnap";
		constexpr static rivet::rivet_type_id PolylineSnap_type_id = 0x85b2cbfc;
		constexpr static std::string_view HFovAsset_type_name = "HFovAsset";
		constexpr static rivet::rivet_type_id HFovAsset_type_id = 0xc97433e1;
		constexpr static std::string_view HFovZone_type_name = "HFovZone";
		constexpr static rivet::rivet_type_id HFovZone_type_id = 0x155b8191;
		constexpr static std::string_view MarqueeTestMode_type_name = "MarqueeTestMode";
		constexpr static rivet::rivet_type_id MarqueeTestMode_type_id = 0x2f68eb77;
		constexpr static std::string_view EditorRenderMode_type_name = "EditorRenderMode";
		constexpr static rivet::rivet_type_id EditorRenderMode_type_id = 0x5ebdec9a;
		constexpr static std::string_view EditorCollisionMode_type_name = "EditorCollisionMode";
		constexpr static rivet::rivet_type_id EditorCollisionMode_type_id = 0x3e1ae6be;
		constexpr static std::string_view SelectBoundingBox_type_name = "SelectBoundingBox";
		constexpr static rivet::rivet_type_id SelectBoundingBox_type_id = 0xa1f73cbf;
		constexpr static std::string_view FXDynamicScaling_type_name = "FXDynamicScaling";
		constexpr static rivet::rivet_type_id FXDynamicScaling_type_id = 0x1fd241a9;
		constexpr static std::string_view CamLoDScale_type_name = "CamLoDScale";
		constexpr static rivet::rivet_type_id CamLoDScale_type_id = 0xc0c447fa;
		constexpr static std::string_view FarClipDist_type_name = "FarClipDist";
		constexpr static rivet::rivet_type_id FarClipDist_type_id = 0x836dc546;
		constexpr static std::string_view MatAlphaSim_type_name = "MatAlphaSim";
		constexpr static rivet::rivet_type_id MatAlphaSim_type_id = 0x8f6cdeb4;
		constexpr static std::string_view FPSSim_type_name = "FPSSim";
		constexpr static rivet::rivet_type_id FPSSim_type_id = 0x597a31e6;
		constexpr static std::string_view MatAnimateLoD_type_name = "MatAnimateLoD";
		constexpr static rivet::rivet_type_id MatAnimateLoD_type_id = 0x6d94a4b8;
		constexpr static std::string_view MatDoubleSided_type_name = "MatDoubleSided";
		constexpr static rivet::rivet_type_id MatDoubleSided_type_id = 0x12533638;
		constexpr static std::string_view MatColorPicker_type_name = "MatColorPicker";
		constexpr static rivet::rivet_type_id MatColorPicker_type_id = 0xb8fc01e2;
		constexpr static std::string_view MatPreviewSrgb_type_name = "MatPreviewSrgb";
		constexpr static rivet::rivet_type_id MatPreviewSrgb_type_id = 0xb00c505a;
		constexpr static std::string_view CurvesDefaultLinear_type_name = "CurvesDefaultLinear";
		constexpr static rivet::rivet_type_id CurvesDefaultLinear_type_id = 0xa6933edd;
		constexpr static std::string_view SelectVolumesByEdge_type_name = "SelectVolumesByEdge";
		constexpr static rivet::rivet_type_id SelectVolumesByEdge_type_id = 0x833b1deb;
		constexpr static std::string_view MatSortTriangles_type_name = "MatSortTriangles";
		constexpr static rivet::rivet_type_id MatSortTriangles_type_id = 0x2e2163e0;
		constexpr static std::string_view ScriptCollapse_type_name = "ScriptCollapse";
		constexpr static rivet::rivet_type_id ScriptCollapse_type_id = 0x983e341;
		constexpr static std::string_view VertexPaintingPref_type_name = "VertexPaintingPref";
		constexpr static rivet::rivet_type_id VertexPaintingPref_type_id = 0xa0ee4977;
		constexpr static std::string_view ShrubbingPref_type_name = "ShrubbingPref";
		constexpr static rivet::rivet_type_id ShrubbingPref_type_id = 0x68f921f3;
		constexpr static std::string_view ManipSpaceMode_type_name = "ManipSpaceMode";
		constexpr static rivet::rivet_type_id ManipSpaceMode_type_id = 0x7452ffcb;
		constexpr static std::string_view ManipSnapToGrid_type_name = "ManipSnapToGrid";
		constexpr static rivet::rivet_type_id ManipSnapToGrid_type_id = 0xd1964c45;
		constexpr static std::string_view ManipSnapToVertex_type_name = "ManipSnapToVertex";
		constexpr static rivet::rivet_type_id ManipSnapToVertex_type_id = 0x3544e8c3;
		constexpr static std::string_view ManipSnapToSurface_type_name = "ManipSnapToSurface";
		constexpr static rivet::rivet_type_id ManipSnapToSurface_type_id = 0x3a41935b;
		constexpr static std::string_view ManipSnapToPivot_type_name = "ManipSnapToPivot";
		constexpr static rivet::rivet_type_id ManipSnapToPivot_type_id = 0xf05930fc;
		constexpr static std::string_view WorldGridMatrix_type_name = "WorldGridMatrix";
		constexpr static rivet::rivet_type_id WorldGridMatrix_type_id = 0xd8e2f149;
		constexpr static std::string_view CommandLineSwitches_type_name = "CommandLineSwitches";
		constexpr static rivet::rivet_type_id CommandLineSwitches_type_id = 0x1fb654d5;
		constexpr static std::string_view CurrentViewerAtmosphere_type_name = "CurrentViewerAtmosphere";
		constexpr static rivet::rivet_type_id CurrentViewerAtmosphere_type_id = 0x93be83b6;
		constexpr static std::string_view ViewerAtmospheres_type_name = "ViewerAtmospheres";
		constexpr static rivet::rivet_type_id ViewerAtmospheres_type_id = 0x3bac722b;
		constexpr static std::string_view ModelDisplayFlags_type_name = "ModelDisplayFlags";
		constexpr static rivet::rivet_type_id ModelDisplayFlags_type_id = 0x7d2286c8;
		constexpr static std::string_view EventFilterOptions_type_name = "EventFilterOptions";
		constexpr static rivet::rivet_type_id EventFilterOptions_type_id = 0x6feaf664;
		constexpr static std::string_view AVMaterialOverride_type_name = "AVMaterialOverride";
		constexpr static rivet::rivet_type_id AVMaterialOverride_type_id = 0x67ce3b19;
		constexpr static std::string_view RandomizationSettings_type_name = "RandomizationSettings";
		constexpr static rivet::rivet_type_id RandomizationSettings_type_id = 0xd649de83; 

		explicit SceneEditorPrefs() = default;
		explicit SceneEditorPrefs([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float SpriteSize {};
		float SpriteOffset {};
		std::string_view LastSyncDate {};
		std::shared_ptr<rivet::ddl::generated::EditorRenderSettings> RenderSettings {};
		std::shared_ptr<rivet::ddl::generated::EditorRenderSettings2> RenderSettings2 {};
		bool DeleteUnmovedDuplicated {};
		bool AutoParenting {};
		bool AutoGrouping {};
		bool ExportToCentimeters {};
		bool ArcBallManip {};
		bool AltTransManip {};
		bool UseMayaCameraPanSpeed {};
		bool FollowManipUseZ {};
		bool AltPrefabOverlay {};
		bool StippleEffect {};
		bool MetricAssist {};
		bool EnforcePadFocus {};
		bool AllowPadInEditor {};
		bool PreferActiveState {};
		bool RestoreZoneCameraOnLoad {};
		bool ShowScriptGraphGrid {};
		bool SelectedVolumesHighlight {};
		bool PlaceFacingCamera {};
		bool EnableViewerAsserts {};
		rivet::ddl::generated::PivotMode PivotMode {};
		rivet::ddl::generated::CameraProjectionType CameraProjectionType {};
		bool GridXYZLock {};
		double GridSpacingX {};
		double GridSpacingY {};
		double GridSpacingZ {};
		float RotationSnap {};
		float PolylineSnap {};
		float HFovAsset {};
		float HFovZone {};
		rivet::ddl::generated::MarqueeTestMode MarqueeTestMode {};
		rivet::ddl::generated::EditorRenderMode EditorRenderMode {};
		int32_t EditorCollisionMode {};
		bool SelectBoundingBox {};
		float FXDynamicScaling {};
		float CamLoDScale {};
		float FarClipDist {};
		float MatAlphaSim {};
		float FPSSim {};
		bool MatAnimateLoD {};
		bool MatDoubleSided {};
		bool MatColorPicker {};
		bool MatPreviewSrgb {};
		bool CurvesDefaultLinear {};
		bool SelectVolumesByEdge {};
		bool MatSortTriangles {};
		bool ScriptCollapse {};
		std::shared_ptr<rivet::ddl::generated::VertexPaintingPref> VertexPaintingPref {};
		std::shared_ptr<rivet::ddl::generated::ShrubbingPref> ShrubbingPref {};
		rivet::ddl::generated::ManipSpaceMode ManipSpaceMode {};
		bool ManipSnapToGrid {};
		bool ManipSnapToVertex {};
		bool ManipSnapToSurface {};
		bool ManipSnapToPivot {};
		std::vector<double> WorldGridMatrix {};
		std::string_view CommandLineSwitches {};
		int32_t CurrentViewerAtmosphere {};
		std::vector<std::string_view> ViewerAtmospheres {};
		std::shared_ptr<rivet::ddl::generated::ModelDisplayOptions> ModelDisplayFlags {};
		std::shared_ptr<rivet::ddl::generated::EventFilterOptions> EventFilterOptions {};
		int32_t AVMaterialOverride {};
		std::shared_ptr<rivet::ddl::generated::RandomizationSettings> RandomizationSettings {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SceneEditorPrefs>;
	};
} // namespace rivet::ddl::generated

// clang-format on
