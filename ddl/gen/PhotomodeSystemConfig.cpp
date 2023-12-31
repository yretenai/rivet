// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BlackoutData.hpp>
#include <rivet/ddl/generated/DefaultPhotoLightSettings.hpp>
#include <rivet/ddl/generated/FirstPersonCamData.hpp>
#include <rivet/ddl/generated/BlackoutFilterItem.hpp>
#include <rivet/ddl/generated/OrbitCamData.hpp>
#include <rivet/ddl/generated/FreeMoveCamData.hpp>
#include <rivet/ddl/generated/GoldBoltRewardItem.hpp>
#include <rivet/ddl/generated/IntersectionFadeData.hpp>
#include <rivet/ddl/generated/SelfieModeData.hpp>
#include <rivet/ddl/generated/ModeUnavailableData.hpp> 

#include <rivet/ddl/generated/PhotomodeSystemConfig.hpp>

namespace rivet::ddl::generated {
	PhotomodeSystemConfig::PhotomodeSystemConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): PhotomodeSystemSharedConfig(serialized) {
		ModeUnavailable = serialized->unwrap_into<rivet::ddl::generated::ModeUnavailableData>(ModeUnavailable_type_id);
		SelfieModeUnavailable = serialized->unwrap_into<rivet::ddl::generated::ModeUnavailableData>(SelfieModeUnavailable_type_id);
		CamCollisRad = serialized->get_float(CamCollisRad_type_id);
		SavePauseTime = serialized->get_float(SavePauseTime_type_id);
		DofRangeNear = serialized->get_float(DofRangeNear_type_id);
		FacePoseMax = serialized->get_int32(FacePoseMax_type_id);
		BodyPoseNeutralMax = serialized->get_int32(BodyPoseNeutralMax_type_id);
		BodyPoseMeleeMax = serialized->get_int32(BodyPoseMeleeMax_type_id);
		BodyPosePistolMax = serialized->get_int32(BodyPosePistolMax_type_id);
		BodyPoseRifleMax = serialized->get_int32(BodyPoseRifleMax_type_id);
		BodyPoseThrownMax = serialized->get_int32(BodyPoseThrownMax_type_id);
		BodyPoseHeavyMax = serialized->get_int32(BodyPoseHeavyMax_type_id);
		LoadoutConfig = serialized->get_string(LoadoutConfig_type_id);
		SelfieMode = serialized->unwrap_into<rivet::ddl::generated::SelfieModeData>(SelfieMode_type_id);
		SelfieModeRivet = serialized->unwrap_into<rivet::ddl::generated::SelfieModeData>(SelfieModeRivet_type_id);
		SelfieModeClank = serialized->unwrap_into<rivet::ddl::generated::SelfieModeData>(SelfieModeClank_type_id);
		SelfieModeKit = serialized->unwrap_into<rivet::ddl::generated::SelfieModeData>(SelfieModeKit_type_id);
		IntersectionFade = serialized->unwrap_into<rivet::ddl::generated::IntersectionFadeData>(IntersectionFade_type_id);
		FreeMove = serialized->unwrap_into<rivet::ddl::generated::FreeMoveCamData>(FreeMove_type_id);
		OrbitCam = serialized->unwrap_into<rivet::ddl::generated::OrbitCamData>(OrbitCam_type_id);
		FirstPerson = serialized->unwrap_into<rivet::ddl::generated::FirstPersonCamData>(FirstPerson_type_id);
		LightDefaults = serialized->unwrap_into<rivet::ddl::generated::DefaultPhotoLightSettings>(LightDefaults_type_id);
		GoldBoltRewardItems = serialized->unwrap_into_many<rivet::ddl::generated::GoldBoltRewardItem>(GoldBoltRewardItems_type_id);
		BlackoutFilterItems = serialized->unwrap_into_many<rivet::ddl::generated::BlackoutFilterItem>(BlackoutFilterItems_type_id);
		BlackoutFilterData = serialized->unwrap_into<rivet::ddl::generated::BlackoutData>(BlackoutFilterData_type_id); 
	}

	[[nodiscard]] auto
	PhotomodeSystemConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PhotomodeSystemConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PhotomodeSystemConfig> {
		if (incoming_type_id == PhotomodeSystemConfig::type_id) {
			return std::make_shared<PhotomodeSystemConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
