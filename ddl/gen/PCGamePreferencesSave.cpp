// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MouseControl.hpp> 

#include <rivet/ddl/generated/PCGamePreferencesSave.hpp>

namespace rivet::ddl::generated {
	PCGamePreferencesSave::PCGamePreferencesSave([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		BootFlowShown = serialized->get_bool(BootFlowShown_type_id, false);
		PSNAccountLinked = serialized->get_bool(PSNAccountLinked_type_id, false);
		AcceptedSIEAnalytics = serialized->get_int32(AcceptedSIEAnalytics_type_id, -1);
		MouseControlFlying = serialized->unwrap_into<rivet::ddl::generated::MouseControl>(MouseControlFlying_type_id);
		SprintToggle = serialized->get_bool(SprintToggle_type_id, false);
		ListeningModePC = serialized->get_enum<rivet::ddl::generated::ListeningMode>(ListeningModePC_type_id, rivet::ddl::generated::ListeningMode_values, rivet::ddl::generated::ListeningMode::ListeningModeSpeakers);
		HudWidescreenScale = serialized->get_int32(HudWidescreenScale_type_id, 0);
		EnableAudioHaptics = serialized->get_bool(EnableAudioHaptics_type_id, true);
		ScePadAudioPathMode = serialized->get_int32(ScePadAudioPathMode_type_id, 0);
		AimInvertX = serialized->get_bool(AimInvertX_type_id, false);
		AimInvertY = serialized->get_bool(AimInvertY_type_id, false);
		SoundPerformanceMode = serialized->get_uint32(SoundPerformanceMode_type_id, 0); 
	}

	[[nodiscard]] auto
	PCGamePreferencesSave::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PCGamePreferencesSave::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PCGamePreferencesSave> {
		if (incoming_type_id == PCGamePreferencesSave::type_id) {
			return std::make_shared<PCGamePreferencesSave>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
