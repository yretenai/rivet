// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DebugSettings.hpp>

namespace rivet::ddl::generated {
	DebugSettings::DebugSettings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		DrawCommandLine = serialized->get_bool(DrawCommandLine_type_id);
		AutoHost = serialized->get_bool(AutoHost_type_id);
		AutoJoin = serialized->get_bool(AutoJoin_type_id);
		AutoJoinServerName = serialized->get_string(AutoJoinServerName_type_id);
		FrontendRepeatDelay = serialized->get_float(FrontendRepeatDelay_type_id);
		FrontendRepeatRate = serialized->get_float(FrontendRepeatRate_type_id);
		FrontendRequireLockCode = serialized->get_bool(FrontendRequireLockCode_type_id);
		SpawnSubprocess = serialized->get_bool(SpawnSubprocess_type_id);
		LoadWithMultiplePlayers = serialized->get_bool(LoadWithMultiplePlayers_type_id);
		AutoMatchmake = serialized->get_bool(AutoMatchmake_type_id);
		OverrideServerName = serialized->get_string(OverrideServerName_type_id);
		DayOffset = serialized->get_int32(DayOffset_type_id);
		DebugServerInfoEnable = serialized->get_bool(DebugServerInfoEnable_type_id);
		DebugCurrentLocalTimeEnable = serialized->get_bool(DebugCurrentLocalTimeEnable_type_id);
		SaveToDisk = serialized->get_bool(SaveToDisk_type_id);
		MatOverrideVolumesEnable = serialized->get_bool(MatOverrideVolumesEnable_type_id);
		DrawLightingCondition = serialized->get_bool(DrawLightingCondition_type_id);
		DisableAllPrefabSpawning = serialized->get_bool(DisableAllPrefabSpawning_type_id);
		VignetteMemTest = serialized->get_bool(VignetteMemTest_type_id);
		CrimeMemTest = serialized->get_bool(CrimeMemTest_type_id);
		CollectiblesMemTest = serialized->get_bool(CollectiblesMemTest_type_id);
		FullscreenMaterialName = serialized->get_string(FullscreenMaterialName_type_id);
		StagingMemoryLimit = serialized->get_uint64(StagingMemoryLimit_type_id);
		EnableDPadQuickSelect = serialized->get_bool(EnableDPadQuickSelect_type_id);
		DoWeaponTriggerEffects = serialized->get_bool(DoWeaponTriggerEffects_type_id);
		DoHoverbootSurfaceDeformation = serialized->get_bool(DoHoverbootSurfaceDeformation_type_id);
		PlayDialogAudit = serialized->get_bool(PlayDialogAudit_type_id); 
	}

	[[nodiscard]] auto
	DebugSettings::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DebugSettings::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DebugSettings> {
		if (incoming_type_id == DebugSettings::type_id) {
			return std::make_shared<DebugSettings>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
