// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp>
#include <rivet/ddl/generated/DDLVector2.hpp> 

#include <rivet/ddl/generated/RenderSettingsUser.hpp>

namespace rivet::ddl::generated {
	RenderSettingsUser::RenderSettingsUser([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		RenderEnable = serialized->get_bool(RenderEnable_type_id);
		PrintGPURes = serialized->get_bool(PrintGPURes_type_id);
		CombineProfileEntries = serialized->get_bool(CombineProfileEntries_type_id);
		SortProfileEntries = serialized->get_bool(SortProfileEntries_type_id);
		MotionBlurEnable = serialized->get_bool(MotionBlurEnable_type_id);
		TemporalAaEnable = serialized->get_bool(TemporalAaEnable_type_id);
		HdrEnableByDefault = serialized->get_bool(HdrEnableByDefault_type_id);
		AllowLcDebugAdjust = serialized->get_bool(AllowLcDebugAdjust_type_id);
		DegenerateOcclusionCameraCut = serialized->get_bool(DegenerateOcclusionCameraCut_type_id);
		BlendDefaultEnvProbeTextures = serialized->get_bool(BlendDefaultEnvProbeTextures_type_id);
		DoNotInitRedundantRenderTargets = serialized->get_bool(DoNotInitRedundantRenderTargets_type_id);
		MinGoboMaterialTextureSize = serialized->get_int32(MinGoboMaterialTextureSize_type_id);
		MinGoboUntexturedSize = serialized->get_float(MinGoboUntexturedSize_type_id);
		ModelSubsetGpuRegistrySize = serialized->get_int32(ModelSubsetGpuRegistrySize_type_id);
		MaterialGpuRegistryUpdates = serialized->get_int32(MaterialGpuRegistryUpdates_type_id);
		MaterialGpuRegistrySize = serialized->get_int32(MaterialGpuRegistrySize_type_id);
		ImpostorDrawDistanceRuntimeEnvProbe = serialized->get_float(ImpostorDrawDistanceRuntimeEnvProbe_type_id);
		ImpostorDrawDistanceDefaultHFov = serialized->get_float(ImpostorDrawDistanceDefaultHFov_type_id);
		ImpostorHQBaseDistance = serialized->get_float(ImpostorHQBaseDistance_type_id);
		ImpostorDrawDistance = serialized->get_float(ImpostorDrawDistance_type_id);
		HibernateInstLongDrawDistance = serialized->get_float(HibernateInstLongDrawDistance_type_id);
		HibernateInstLongDrawDistance60Hz = serialized->get_float(HibernateInstLongDrawDistance60Hz_type_id);
		HibernateInstDrawDistance = serialized->get_float(HibernateInstDrawDistance_type_id);
		HibernateInstDrawDistance60Hz = serialized->get_float(HibernateInstDrawDistance60Hz_type_id);
		HibernateInstOffScrDrawDistance = serialized->get_float(HibernateInstOffScrDrawDistance_type_id);
		HibernateInstOffScrDrawDistance60Hz = serialized->get_float(HibernateInstOffScrDrawDistance60Hz_type_id);
		HibernateFXDrawDistance = serialized->get_float(HibernateFXDrawDistance_type_id);
		HibernateFXDrawDistance60Hz = serialized->get_float(HibernateFXDrawDistance60Hz_type_id);
		HibernateATestFadeDistance = serialized->get_float(HibernateATestFadeDistance_type_id);
		HibernateATestFadeDistance60Hz = serialized->get_float(HibernateATestFadeDistance60Hz_type_id);
		HibernateInstRadiusFactor = serialized->get_float(HibernateInstRadiusFactor_type_id);
		HibernateInstRadiusFactor60Hz = serialized->get_float(HibernateInstRadiusFactor60Hz_type_id);
		HibernateUIMinRadius = serialized->get_float(HibernateUIMinRadius_type_id);
		HibernateFXMaxCount = serialized->get_uint32(HibernateFXMaxCount_type_id);
		AmbientAnimationFadeDistance = serialized->get_float(AmbientAnimationFadeDistance_type_id);
		CsmUseModelsInFarLodCache = serialized->get_bool(CsmUseModelsInFarLodCache_type_id);
		CsmFarLodTransitionDist = serialized->get_float(CsmFarLodTransitionDist_type_id);
		RenderAllocPreCommitMB = serialized->get_int32(RenderAllocPreCommitMB_type_id);
		RenderAllocGrowPercent = serialized->get_int32(RenderAllocGrowPercent_type_id);
		ViewContextMax = serialized->get_int32(ViewContextMax_type_id);
		PerViewRenderQueries = serialized->get_int32(PerViewRenderQueries_type_id);
		RenderQueryDeferredFreeCount = serialized->get_int32(RenderQueryDeferredFreeCount_type_id);
		DeferredRenderQueries = serialized->get_bool(DeferredRenderQueries_type_id);
		PerfAdaptationFovHigh = serialized->get_float(PerfAdaptationFovHigh_type_id);
		PerfAdaptationFovVeryHigh = serialized->get_float(PerfAdaptationFovVeryHigh_type_id);
		PerfAdaptationFovExtreme = serialized->get_float(PerfAdaptationFovExtreme_type_id);
		PerfAdaptationRotationHigh = serialized->get_float(PerfAdaptationRotationHigh_type_id);
		PerfAdaptationRotationVeryHigh = serialized->get_float(PerfAdaptationRotationVeryHigh_type_id);
		PerfAdaptationRotationExtreme = serialized->get_float(PerfAdaptationRotationExtreme_type_id);
		PerfAdaptationMovementHigh = serialized->get_float(PerfAdaptationMovementHigh_type_id);
		PerfAdaptationMovementVeryHigh = serialized->get_float(PerfAdaptationMovementVeryHigh_type_id);
		PerfAdaptationMovementExtreme = serialized->get_float(PerfAdaptationMovementExtreme_type_id);
		PerfAdaptationHeightHigh = serialized->get_float(PerfAdaptationHeightHigh_type_id);
		PerfAdaptationHeightVeryHigh = serialized->get_float(PerfAdaptationHeightVeryHigh_type_id);
		PerfAdaptationHeightExtreme = serialized->get_float(PerfAdaptationHeightExtreme_type_id);
		VFXDisableCameraOrientation = serialized->get_bool(VFXDisableCameraOrientation_type_id);
		VFXTessellationCamStep = serialized->get_float(VFXTessellationCamStep_type_id);
		VFXLightingOverScan = serialized->get_float(VFXLightingOverScan_type_id);
		VFXLightingBlurSize = serialized->get_float(VFXLightingBlurSize_type_id);
		VFXTessellationAdd = serialized->get_float(VFXTessellationAdd_type_id);
		VFXStreamingFade = serialized->get_float(VFXStreamingFade_type_id);
		VFXWakeUpFade = serialized->get_float(VFXWakeUpFade_type_id);
		MaxVFXCustomStreams = serialized->get_int32(MaxVFXCustomStreams_type_id);
		MaxVFXVectorFields = serialized->get_int32(MaxVFXVectorFields_type_id);
		MaxVFXGPUParticles = serialized->get_int32(MaxVFXGPUParticles_type_id);
		MaxVFXGPUEmitters = serialized->get_int32(MaxVFXGPUEmitters_type_id);
		LightPlacedCasterMin = serialized->get_float(LightPlacedCasterMin_type_id);
		LightPlacedCasterMax = serialized->get_float(LightPlacedCasterMax_type_id);
		LightPlacedCasterDensitySmall = serialized->get_float(LightPlacedCasterDensitySmall_type_id);
		LightPlacedCasterDensityLarge = serialized->get_float(LightPlacedCasterDensityLarge_type_id);
		LightGridBleedReduction = serialized->get_float(LightGridBleedReduction_type_id);
		LightGridFadeTime = serialized->get_float(LightGridFadeTime_type_id);
		LightGridStagingSlotMax = serialized->get_int32(LightGridStagingSlotMax_type_id);
		LightGridStreamSlotMax = serialized->get_int32(LightGridStreamSlotMax_type_id);
		WaterFoamEmissiveScale = serialized->get_float(WaterFoamEmissiveScale_type_id);
		VolumetricFogLargeNoiseTiling = serialized->get_float(VolumetricFogLargeNoiseTiling_type_id);
		VolumetricFogLargeNoiseSpeed = serialized->get_float(VolumetricFogLargeNoiseSpeed_type_id);
		VolumetricFogSmallNoiseTiling = serialized->get_float(VolumetricFogSmallNoiseTiling_type_id);
		VolumetricFogSmallNoiseSpeed = serialized->get_float(VolumetricFogSmallNoiseSpeed_type_id);
		NeededDisplaySafeArea = serialized->get_float(NeededDisplaySafeArea_type_id);
		ExtraFlushesEnabled = serialized->get_bool(ExtraFlushesEnabled_type_id);
		WindowTitle = serialized->get_string(WindowTitle_type_id);
		UseStickyConfig = serialized->get_bool(UseStickyConfig_type_id);
		FullscreenArg = serialized->get_bool(FullscreenArg_type_id);
		BorderlessWindow = serialized->get_bool(BorderlessWindow_type_id);
		StartMaximized = serialized->get_bool(StartMaximized_type_id);
		AllowFullScreenModeSwitch = serialized->get_bool(AllowFullScreenModeSwitch_type_id);
		AspectRatioOverride = serialized->get_enum<rivet::ddl::generated::x30866c77>(AspectRatioOverride_type_id, rivet::ddl::generated::x30866c77_values);
		EnableAspectBlur = serialized->get_bool(EnableAspectBlur_type_id);
		D3dDebug = serialized->get_bool(D3dDebug_type_id);
		EnableCommandRingReclamation = serialized->get_bool(EnableCommandRingReclamation_type_id);
		D3dPrintLabels = serialized->get_bool(D3dPrintLabels_type_id);
		DisableGPUProfilerCost = serialized->get_bool(DisableGPUProfilerCost_type_id);
		RequestDx11_1Device = serialized->get_bool(RequestDx11_1Device_type_id);
		TextureStreamingEnabled = serialized->get_bool(TextureStreamingEnabled_type_id);
		TextureStreamingLegacyMode = serialized->get_bool(TextureStreamingLegacyMode_type_id);
		Max2DCanvasSize = serialized->unwrap_into<rivet::ddl::generated::DDLVector2>(Max2DCanvasSize_type_id);
		CanvasDpiScalingFactor = serialized->get_float(CanvasDpiScalingFactor_type_id);
		UseCanvasDpiScalingFactor = serialized->get_bool(UseCanvasDpiScalingFactor_type_id);
		PauseMapAllowMats = serialized->get_bool(PauseMapAllowMats_type_id);
		SupportWaterBrushes = serialized->get_bool(SupportWaterBrushes_type_id);
		UI3DOccludesLensFlare = serialized->get_bool(UI3DOccludesLensFlare_type_id);
		EnableSubsurfaceBrdf = serialized->get_bool(EnableSubsurfaceBrdf_type_id);
		EnableAmbientShadows = serialized->get_bool(EnableAmbientShadows_type_id);
		RippleDisplacment = serialized->get_float(RippleDisplacment_type_id);
		RippleAmplitude = serialized->get_float(RippleAmplitude_type_id);
		RippleRate = serialized->get_float(RippleRate_type_id);
		ImpulseMaxCamera = serialized->get_float(ImpulseMaxCamera_type_id);
		ImpulseMaxRadius = serialized->get_float(ImpulseMaxRadius_type_id);
		ImpulseMinMove = serialized->get_float(ImpulseMinMove_type_id);
		BrushMinMove = serialized->get_float(BrushMinMove_type_id);
		EstTimeToRenderEnvProbeFaceCpu = serialized->get_float(EstTimeToRenderEnvProbeFaceCpu_type_id);
		EstTimeToRenderEnvProbeFaceGpu = serialized->get_float(EstTimeToRenderEnvProbeFaceGpu_type_id);
		ForceFieldsEdgeSize = serialized->get_float(ForceFieldsEdgeSize_type_id);
		VolumetricFogResolution = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(VolumetricFogResolution_type_id); 
	}

	[[nodiscard]] auto
	RenderSettingsUser::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	RenderSettingsUser::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RenderSettingsUser> {
		if (incoming_type_id == RenderSettingsUser::type_id) {
			return std::make_shared<RenderSettingsUser>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
