// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

// clang-format off

#include <cstdint>
#include <string_view>
#include <array>

#include <rivet/hash/type_id.hpp>
#include <rivet/rivet_keywords.hpp>

namespace rivet::ddl::generated {
	constexpr static std::string_view xfdd79442_type_name = "xfdd79442";
	constexpr static rivet::rivet_type_id xfdd79442_type_id = 0xfdd79442;

	constexpr static std::array<std::string_view, 159> xfdd79442_values = {
		"kAny",
		"kElevationStand",
		"kElevationCrouch",
		"kElevationProne",
		"kDirectionEast",
		"kDirectionNorth",
		"kDirectionNorthEast",
		"kDirectionNorthWest",
		"kDirectionWest",
		"kDirectionSouth",
		"kDirectionSouthEast",
		"kDirectionSouthWest",
		"kDirectionFront",
		"kDirectionLeft",
		"kDirectionRight",
		"kDirectionBack",
		"kDirectionFrontLeft",
		"kDirectionFrontRight",
		"kDirectionBackLeft",
		"kDirectionBackRight",
		"kDirectionUp",
		"kDirectionDown",
		"kSpeedIdle",
		"kSpeedWalk",
		"kSpeedJog",
		"kSpeedRun",
		"kSpeedSprint",
		"kRangeShort",
		"kRangeMedium",
		"kRangeLong",
		"kGripHandNone",
		"kGripHandLeft",
		"kGripHandRight",
		"kIndexOne",
		"kIndexTwo",
		"kIndexThree",
		"kIndexFour",
		"kIndexFive",
		"kIndexSix",
		"kIndexSeven",
		"kIndexEight",
		"kIndexNine",
		"kIndexTen",
		"kIndexEleven",
		"kIndexTwelve",
		"kIndexThirteen",
		"kIndexFourteen",
		"kIndexFifteen",
		"kIndexSixteen",
		"kIndexSeventeen",
		"kIndexEightteen",
		"kIndexNineteen",
		"kIndexTwenty",
		"kIndexCOUNT",
		"kAwarenessPassive",
		"kAwarenessAlert",
		"kAwarenessEngaged",
		"kHitDirectionFront",
		"kHitDirectionBack",
		"kHitDirectionLeft",
		"kHitDirectionRight",
		"kHitLocationHead",
		"kHitLocationTorso",
		"kHitLocationRightArm",
		"kHitLocationLeftArm",
		"kHitLocationRightLeg",
		"kHitLocationLeftLeg",
		"kHitWeakspotTrue",
		"kHitWeakspotFalse",
		"kHitMeleeDirectionForward",
		"kHitMeleeDirectionLeft",
		"kHitMeleeDirectionRight",
		"kMotionNotMoving",
		"kMotionMoving",
		"kFireModeAim",
		"kFireModeHip",
		"kFireModeBlind",
		"kFireModeBlindOver",
		"kFireModeLedge",
		"kHealthAlive",
		"kHealthDead",
		"kJumpDistanceOne",
		"kJumpDistanceTwo",
		"kJumpDistanceThree",
		"kJumpDistanceFour",
		"kSyncedAnimParticipantHost",
		"kSyncedAnimParticipantGuest1",
		"kSyncedAnimParticipantGuest2",
		"kCameraShakeEnabled",
		"kCameraShakeDisabled",
		"kMoveStyleGround",
		"kMoveStyleHover",
		"kHolsterHipRight",
		"kHolsterBackRight",
		"kHolsterBackLeft",
		"kMacroStateNone",
		"kMacroStateJump",
		"kMacroStateWallRun",
		"kMacroStateGrind",
		"kInteractTypeDualTorchWall",
		"kInteractTypeConsoleLever",
		"kInteractTypeVentHatch",
		"kInteractTypeFloorVent",
		"kInteractTypeZiplineAnchor",
		"kInteractTypeHackPanel",
		"kInteractTypeExplosiveWall",
		"kInteractTypeGondolaDoor",
		"kInteractTypeDoorPry2P",
		"kInteractTypeDoorKick2P",
		"kInteractTypeDoorLift4P",
		"kInteractTypeDoorUnder4P",
		"kInteractTypeFloorCut4P",
		"kInteractTypeDoorPry4P",
		"kInteractTypeFuseExtract",
		"kInteractTypeFuseInsert",
		"kInteractTypeWheelValve",
		"kInteractTypeEyeScan",
		"kInteractTypeWallButton",
		"kInteractTypePhotoBooth",
		"kInteractTypePortoPotty",
		"kInteractTypeRotatable",
		"kInteractTypeGraffiti",
		"kInteractTypeAmpExtract",
		"kInteractTypeCrane",
		"kGripStyleNeutral",
		"kGripStylePistol",
		"kGripStyleRifle",
		"kGripStyleThrown",
		"kGripStyleHeavy",
		"kGripStyleMelee",
		"kGripStyleCarry",
		"kGripStyleArmCannon",
		"kGripStyleSword",
		"kGripStyleHammer",
		"kGripHandDual",
		"kHitLocationHigh",
		"kHitLocationLow",
		"kFireStyleLight",
		"kFireStyleMedium",
		"kFireStyleHeavy",
		"kReloadStyleNone",
		"kReloadStyleSpin",
		"kReloadStyleSnap",
		"kReloadStylePump",
		"kReloadStyleShake",
		"kOffsetStyleNone",
		"kOffsetStyleSniper",
		"kElevationFlying",
		"kElevationUnderground",
		"kSuitSuited",
		"kSuitUnsuited",
		"kHoverStateOnGround",
		"kHoverStateInAir",
		"kPerfSpecPS5_30",
		"kPerfSpecPS5_60",
		"kClankVolumeHeavy",
		"kClankVolumeLight",
		"kClankVolumeEnergy",
		"kClankVolumeSpeedUp", 
	};

	constexpr static std::array<std::string_view, 159> xfdd79442_labels = {
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE", 
	};

	enum class xfdd79442 : uint64_t {
		Any,
		ElevationStand,
		ElevationCrouch,
		ElevationProne,
		DirectionEast,
		DirectionNorth,
		DirectionNorthEast,
		DirectionNorthWest,
		DirectionWest,
		DirectionSouth,
		DirectionSouthEast,
		DirectionSouthWest,
		DirectionFront,
		DirectionLeft,
		DirectionRight,
		DirectionBack,
		DirectionFrontLeft,
		DirectionFrontRight,
		DirectionBackLeft,
		DirectionBackRight,
		DirectionUp,
		DirectionDown,
		SpeedIdle,
		SpeedWalk,
		SpeedJog,
		SpeedRun,
		SpeedSprint,
		RangeShort,
		RangeMedium,
		RangeLong,
		GripHandNone,
		GripHandLeft,
		GripHandRight,
		IndexOne,
		IndexTwo,
		IndexThree,
		IndexFour,
		IndexFive,
		IndexSix,
		IndexSeven,
		IndexEight,
		IndexNine,
		IndexTen,
		IndexEleven,
		IndexTwelve,
		IndexThirteen,
		IndexFourteen,
		IndexFifteen,
		IndexSixteen,
		IndexSeventeen,
		IndexEightteen,
		IndexNineteen,
		IndexTwenty,
		IndexCOUNT,
		AwarenessPassive,
		AwarenessAlert,
		AwarenessEngaged,
		HitDirectionFront,
		HitDirectionBack,
		HitDirectionLeft,
		HitDirectionRight,
		HitLocationHead,
		HitLocationTorso,
		HitLocationRightArm,
		HitLocationLeftArm,
		HitLocationRightLeg,
		HitLocationLeftLeg,
		HitWeakspotTrue,
		HitWeakspotFalse,
		HitMeleeDirectionForward,
		HitMeleeDirectionLeft,
		HitMeleeDirectionRight,
		MotionNotMoving,
		MotionMoving,
		FireModeAim,
		FireModeHip,
		FireModeBlind,
		FireModeBlindOver,
		FireModeLedge,
		HealthAlive,
		HealthDead,
		JumpDistanceOne,
		JumpDistanceTwo,
		JumpDistanceThree,
		JumpDistanceFour,
		SyncedAnimParticipantHost,
		SyncedAnimParticipantGuest1,
		SyncedAnimParticipantGuest2,
		CameraShakeEnabled,
		CameraShakeDisabled,
		MoveStyleGround,
		MoveStyleHover,
		HolsterHipRight,
		HolsterBackRight,
		HolsterBackLeft,
		MacroStateNone,
		MacroStateJump,
		MacroStateWallRun,
		MacroStateGrind,
		InteractTypeDualTorchWall,
		InteractTypeConsoleLever,
		InteractTypeVentHatch,
		InteractTypeFloorVent,
		InteractTypeZiplineAnchor,
		InteractTypeHackPanel,
		InteractTypeExplosiveWall,
		InteractTypeGondolaDoor,
		InteractTypeDoorPry2P,
		InteractTypeDoorKick2P,
		InteractTypeDoorLift4P,
		InteractTypeDoorUnder4P,
		InteractTypeFloorCut4P,
		InteractTypeDoorPry4P,
		InteractTypeFuseExtract,
		InteractTypeFuseInsert,
		InteractTypeWheelValve,
		InteractTypeEyeScan,
		InteractTypeWallButton,
		InteractTypePhotoBooth,
		InteractTypePortoPotty,
		InteractTypeRotatable,
		InteractTypeGraffiti,
		InteractTypeAmpExtract,
		InteractTypeCrane,
		GripStyleNeutral,
		GripStylePistol,
		GripStyleRifle,
		GripStyleThrown,
		GripStyleHeavy,
		GripStyleMelee,
		GripStyleCarry,
		GripStyleArmCannon,
		GripStyleSword,
		GripStyleHammer,
		GripHandDual,
		HitLocationHigh,
		HitLocationLow,
		FireStyleLight,
		FireStyleMedium,
		FireStyleHeavy,
		ReloadStyleNone,
		ReloadStyleSpin,
		ReloadStyleSnap,
		ReloadStylePump,
		ReloadStyleShake,
		OffsetStyleNone,
		OffsetStyleSniper,
		ElevationFlying,
		ElevationUnderground,
		SuitSuited,
		SuitUnsuited,
		HoverStateOnGround,
		HoverStateInAir,
		PerfSpecPS5_30,
		PerfSpecPS5_60,
		ClankVolumeHeavy,
		ClankVolumeLight,
		ClankVolumeEnergy,
		ClankVolumeSpeedUp, 
	};
} // namespace rivet::ddl::generated

// clang-format on
