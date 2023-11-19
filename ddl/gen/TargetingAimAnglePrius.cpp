// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TargetingAimAngleJointAimPrius.hpp>
#include <rivet/ddl/generated/LookAtTargetPrius.hpp>
#include <rivet/ddl/generated/LookAtCameraPrius.hpp>
#include <rivet/ddl/generated/SwappableTargetingAimAnglePrius.hpp>
#include <rivet/ddl/generated/TargetingAimAngleGamePrius.hpp>
#include <rivet/ddl/generated/LookAtHeroPrius.hpp> 

#include <rivet/ddl/generated/TargetingAimAnglePrius.hpp>

namespace rivet::ddl::generated {
	TargetingAimAnglePrius::TargetingAimAnglePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		StartEnabled = serialized->get_bool(StartEnabled_type_id);
		WeaponEquipIndex = serialized->get_uint32(WeaponEquipIndex_type_id);
		ApplySpeed = serialized->get_float(ApplySpeed_type_id);
		AimGain = serialized->get_float(AimGain_type_id);
		YawRangeDegreesMin = serialized->get_float(YawRangeDegreesMin_type_id);
		YawRangeDegreesMax = serialized->get_float(YawRangeDegreesMax_type_id);
		PitchRangeDegreesMin = serialized->get_float(PitchRangeDegreesMin_type_id);
		PitchRangeDegreesMax = serialized->get_float(PitchRangeDegreesMax_type_id);
		VerticalAnimVarName = serialized->get_string(VerticalAnimVarName_type_id);
		HorizontalAnimVarName = serialized->get_string(HorizontalAnimVarName_type_id);
		PartialName = serialized->get_string(PartialName_type_id);
		AimSourceLocator = serialized->get_string(AimSourceLocator_type_id);
		AimDestLocator = serialized->get_string(AimDestLocator_type_id);
		LeftToRight = serialized->get_bool(LeftToRight_type_id);
		DownToUp = serialized->get_bool(DownToUp_type_id);
		VarValuesAreInDegrees = serialized->get_bool(VarValuesAreInDegrees_type_id);
		UseAimSourceReferenceMat = serialized->get_bool(UseAimSourceReferenceMat_type_id);
		UpdateStandardHeadLookValues = serialized->get_bool(UpdateStandardHeadLookValues_type_id); 
	}

	[[nodiscard]] auto
	TargetingAimAnglePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TargetingAimAnglePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TargetingAimAnglePrius> {
		if (incoming_type_id == TargetingAimAnglePrius::type_id) {
			return std::make_shared<TargetingAimAnglePrius>(serialized);
		}

		auto LookAtHeroPrius_ptr = LookAtHeroPrius::from_substruct(incoming_type_id, serialized);
		if (LookAtHeroPrius_ptr != nullptr) {
			return LookAtHeroPrius_ptr;
		}

		auto SwappableTargetingAimAnglePrius_ptr = SwappableTargetingAimAnglePrius::from_substruct(incoming_type_id, serialized);
		if (SwappableTargetingAimAnglePrius_ptr != nullptr) {
			return SwappableTargetingAimAnglePrius_ptr;
		}

		auto TargetingAimAngleGamePrius_ptr = TargetingAimAngleGamePrius::from_substruct(incoming_type_id, serialized);
		if (TargetingAimAngleGamePrius_ptr != nullptr) {
			return TargetingAimAngleGamePrius_ptr;
		}

		auto LookAtCameraPrius_ptr = LookAtCameraPrius::from_substruct(incoming_type_id, serialized);
		if (LookAtCameraPrius_ptr != nullptr) {
			return LookAtCameraPrius_ptr;
		}

		auto LookAtTargetPrius_ptr = LookAtTargetPrius::from_substruct(incoming_type_id, serialized);
		if (LookAtTargetPrius_ptr != nullptr) {
			return LookAtTargetPrius_ptr;
		}

		auto TargetingAimAngleJointAimPrius_ptr = TargetingAimAngleJointAimPrius::from_substruct(incoming_type_id, serialized);
		if (TargetingAimAngleJointAimPrius_ptr != nullptr) {
			return TargetingAimAngleJointAimPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated